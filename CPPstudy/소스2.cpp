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




	int i = 0;//L배열 요소를 가리킴
	int j = 0;//R배열 요소를 가리킴
	int k = start;//A의 채울 곳을 가리킨다

	while (i < leftNum && j < rightNum) {//인덱스안넘게
		if (leftArr[i] < rightArr[j]) {
			A[k] = leftArr[i];//작은 수를 취해서 왼쪽부터 작은수를 채워나감
			i++;//i인덱스는 이동
		}
		else {
			A[k] = rightArr[j];//작은 수를 취해서 왼쪽부터 작은수를 채워나감
			j++;//j인덱스는 이동
		}
		k++;//k인덱스 이동
	}
	//left/ right중 한 쪽 포인팅이 초과되면 : 포인팅 초과 안 된 배열의 남은 수들 집어넣기
	//남은거 싹 넣어도 괜찮은 이유: 
	//1) 이미 더 작은애들이 A의 왼쪽을 차지.
	//2) 남은 배열은 이미 정렬된 애들 - > A의 나머지 자리에넣었을 때 정렬을 해치지 않는다.
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
	if (start >= end) {//더 쪼갤 게 없으면 : base case
		return;
	}
	int middle = (start + end) / 2;
	MergeSort(A, start, middle);//왼쪽
	MergeSort(A, middle + 1, end);//오른쪽
	//merge A[start:middle] and A[middle+1:end] into A[start,end]
	Merge(A, start, middle, end);
}

int main() {
	int A [5] = {5,4,3,2,1}; //배열이기 때문에 값이 계속 동기화된다 // 함수공간에서의 제약 x
	MergeSort(A, 0,std::size(A)-1);
	for (int i = 0; i < std::size(A); i++) {
		std::cout << A[i];
	}
	return 0;
}