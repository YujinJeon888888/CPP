//#include <iostream>
//namespace BestComImpl {
//	void SimpleFunc();
//}
//
//namespace BestComImpl {
//	void PrettyFunc();
//}
//
//namespace ProgCosmImpl {
//	void SimpleFunc();
//}
//
//int main() {
//	BestComImpl::SimpleFunc();
//	return 0;
//}
//
//void BestComImpl::SimpleFunc() {
//	std::cout << "BestCom이 정의한 함수" << std::endl;
//	PrettyFunc();//같은 이름공간
//	ProgCosmImpl::SimpleFunc();//다른 이름공간
//}
//
//void BestComImpl::PrettyFunc() {
//	std::cout << "So pretty !!" << "\n";
//}
//
//void ProgCosmImpl::SimpleFunc() {
//	std::cout << "ProgCom이 정의한 함수" << "\n";
//}