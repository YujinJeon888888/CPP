//#include <iostream>
//
//void InsertionSort(int A[], int n);
//void PrintArray(int A[]);
//int main() {
//	int A[] = {5,2,4,6,1,3};//�迭�� ��ü�� ù �ε��� �ּ� ����Ű�Ƿ� ������x
//	PrintArray(A);
//	InsertionSort(A, 6);
//	return 0;
//}
//
//
//void InsertionSort(int A[],int n) {
//	for (int i = 1; i < n; i++) {
//		int key = A[i]; //key: a[j]���� ���� ���� �������ִ�. 
//		//insert A[i] into the sorted subarray A[1:i-1]
//		int j = i - 1;//j�� i�� �ٷ� ����
//		while (j >= 0 && A[j] > key) {//j�� ��ȿ�ε���  && A[j]�� key���� Ŀ����.
//			A[j + 1] = A[j];//Ű���� ū ���̸� �����. 
//			j = j - 1;//���� ��� �̵�
//		}
//		A[j + 1] = key;//���� Ż���ϸ� j-1���� �� Ż���Ѱű� ������, ������� �ٷ� ���ʿ� key�� ����( ����Ŵ� ������ key���� ũ�Ƿ�)
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