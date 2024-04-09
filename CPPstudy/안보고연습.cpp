//#include <iostream>
///// <summary>
///// O(n^2)
///// </summary>
///// <param name="A"></param>
///// <param name="n"></param>
//void InsertionSort(int A[], int n) {
//	for (int i = 1; i < n; i++) {
//		int key = A[i];
//		int j = i - 1;//j는 i바로 왼쪽.
//		while (j >= 0 && A[j] > key) {
//			A[j + 1] = A[j];
//			j -= 1;		
//		}
//		A[j + 1] = key;
//	}
//}
//void PrintArray(int A[]) {
//	for (int i = 0; i < 6; i++) {
//		std::cout << A[i] << " ";
//	}
//	std::cout << "\n";
//}
//
//int main() {
//	int A[] = { 10,9,8,7,6,5 };
//	InsertionSort(A,6);
//	PrintArray(A);
//	return 0;
//}