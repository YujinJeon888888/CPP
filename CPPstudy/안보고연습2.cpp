#include <iostream>
void Merge(int A[], int start, int middle, int end) {
	
	//left배열과 right배열로 쪼개기
	//1. left배열 크기 , right배열 크기 구하기
	int leftNum = middle-start+1;
	int rightNum = end - middle;
	//2. 배열할당
	int* leftArr = new int[leftNum] ;
	int* rightArr = new int[rightNum] ;
	//3. 배열에 값넣기
	for (int i = 0; i < leftNum; i++) {
		leftArr[i] = A[start+i];
	}
	for (int i = 0; i < rightNum; i++) {
		rightArr[i] = A[middle + 1 + i];
	}
	//인덱스를 옮겨가며비교하기위해, 인덱스 선언
	int i=0, j = 0;//i : leftArr위한, j: rightArr위한
	int k = start;

	while (i < leftNum && j < rightNum) {// 유효범위에서 가리키도록
		if (leftArr[i] <= rightArr[j]) {
			A[k] = leftArr[i];
			i++;
		}
		else {
			A[k]=rightArr[j];
			j++;
		}
		k++;
	}

	//남은거 싹 넣기
	while (i < leftNum) {
		A[k++] = leftArr[i++];
	}
	while (j < rightNum) {
		A[k++] = rightArr[j++];
	}
	//동적할당 비우기
	delete[] leftArr;
	delete[] rightArr;
}




void MergeSort(int A[], int start, int end) {
	//bese case
	if (start >= end) {
		return;
	}

	//중앙 인덱스 구하기
	int middle = (start+end)/2;

	//쪼개기
	MergeSort(A, start, middle);
	MergeSort(A,  middle+1, end);

	//합치기
	Merge(A,start,middle,end);
}

int main() {
	int A[] = { 10,200,9,1,100};
	MergeSort(A, 0, std::size(A) - 1);
	
	for (int i = 0; i < std::size(A); i++) {
		std::cout << A[i]<<" ";
	}
	return	0;
}