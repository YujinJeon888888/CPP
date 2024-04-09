//#include <iostream>
//
//void InsertionSort(int A[], int n);
//void PrintArray(int A[]);
//int main() {
//	int A[] = {5,2,4,6,1,3};//배열은 자체로 첫 인덱스 주소 가리키므로 포인터x
//	PrintArray(A);
//	InsertionSort(A, 6);
//	return 0;
//}
//
//
//void InsertionSort(int A[],int n) {
//	for (int i = 1; i < n; i++) {
//		int key = A[i]; //key: a[j]보다 작은 값을 가지고있다. 
//		//insert A[i] into the sorted subarray A[1:i-1]
//		int j = i - 1;//j는 i의 바로 왼쪽
//		while (j >= 0 && A[j] > key) {//j는 유효인덱스  && A[j]가 key보다 커야함.
//			A[j + 1] = A[j];//키보다 큰 값이면 덮어쓰기. 
//			j = j - 1;//왼쪽 계속 이동
//		}
//		A[j + 1] = key;//조건 탈출하면 j-1했을 때 탈출한거기 때문에, 덮어쓴거의 바로 왼쪽에 key를 넣음( 덮어쓴거는 무조건 key보다 크므로)
//		PrintArray(A);
//	}
//};
//
//void PrintArray(int A[]) {
//	for (int i = 0; i < 6; i++) {
//		std::cout << A[i]<<" ";
//	}
//	std::cout << "\n";
//}