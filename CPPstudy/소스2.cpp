#include <iostream>
void Merge(int A[], int start, int middle, int end) {
	int leftNum = middle - start + 1;
	int rightNum = end - middle;

	int *leftArr= new int[leftNum], *rightArr =  new int[rightNum];

	for (int i = 0; i < leftNum; i++) {//copy A[start:middle] into L[0:leftNum-1]
		leftArr[i] = A[start + i];
	}
	for (int i = 0; i < rightNum; i++) {//copy A[middle+1:end] into R[0:rightNum-1]
		rightArr[i] = A[middle + 1 + i];
	}




	int i = 0;//L�迭 ��Ҹ� ����Ŵ
	int j = 0;//R�迭 ��Ҹ� ����Ŵ
	int k = start;//A�� ä�� ���� ����Ų��

	while (i < leftNum && j < rightNum) {//�ε����ȳѰ�
		if (leftArr[i] < rightArr[j]) {
			A[k] = leftArr[i];//���� ���� ���ؼ� ���ʺ��� �������� ä������
			i++;//i�ε����� �̵�
		}
		else {
			A[k] = rightArr[j];//���� ���� ���ؼ� ���ʺ��� �������� ä������
			j++;//j�ε����� �̵�
		}
		k++;//k�ε��� �̵�
	}
	//left/ right�� �� �� �������� �ʰ��Ǹ� : ������ �ʰ� �� �� �迭�� ���� ���� ����ֱ�
	//������ �� �־ ������ ����: 
	//1) �̹� �� �����ֵ��� A�� ������ ����.
	//2) ���� �迭�� �̹� ���ĵ� �ֵ� - > A�� ������ �ڸ����־��� �� ������ ��ġ�� �ʴ´�.
	while (i < leftNum) {
		A[k] = leftArr[i];
		i++;
		k++;
	}
	while (j < rightNum) {
		A[k] = rightArr[j];
		j++;
		k++;
	}
}
void MergeSort(int A[], int start, int end) {
	if (start >= end) {//�� �ɰ� �� ������ : base case
		return;
	}
	int middle = (start + end) / 2;
	MergeSort(A, start, middle);//����
	MergeSort(A, middle + 1, end);//������
	//merge A[start:middle] and A[middle+1:end] into A[start,end]
	Merge(A, start, middle, end);
}

int main() {
	int A [5] = {5,4,3,2,1}; //�迭�̱� ������ ���� ��� ����ȭ�ȴ� // �Լ����������� ���� x
	MergeSort(A, 0,std::size(A)-1);
	for (int i = 0; i < std::size(A); i++) {
		std::cout << A[i];
	}
	return 0;
}