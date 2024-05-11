//#include <iostream>
//#include <vector>
//
//struct Result {
//    std::vector<std::vector<std::string>> b;
//    std::vector<std::vector<int>> c;
//};
//
//Result LCSLength(std::vector<int> x, std::vector<int> y, int m, int n);
//void PrintLCS(std::vector<std::vector<std::string>> b, std::vector<int> x, int i, int j);
//
//Result LCSLength(std::vector<int> x, std::vector<int> y, int m, int n) {
//    std::vector<std::vector<std::string>> b(m + 1, std::vector<std::string>(n + 1));
//    std::vector<std::vector<int>> c(m + 1, std::vector<int>(n + 1));
//
//    for (int i = 0; i <= m; i++) {
//        c[i][0] = 0;
//    }
//
//    for (int j = 0; j <= n; j++) {
//        c[0][j] = 0;
//    }
//
//    for (int i = 1; i <= m; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (x[i - 1] == y[j - 1]) {
//                c[i][j] = c[i - 1][j - 1] + 1;
//                b[i][j] = "↖";
//            }
//            else if (c[i - 1][j] >= c[i][j - 1]) {
//                c[i][j] = c[i - 1][j];
//                b[i][j] = "↑";
//            }
//            else {
//                c[i][j] = c[i][j - 1];
//                b[i][j] = "←";
//            }
//        }
//    }
//
//    Result result;
//    result.b = b;
//    result.c = c;
//    return result;
//}
//
//void PrintLCS(std::vector<std::vector<std::string>> b, std::vector<int> x, int i, int j) {
//    if (i == 0 || j == 0) {
//        return;
//    }
//    if (b[i][j] == "↖") {
//        PrintLCS(b, x, i - 1, j - 1);
//        std::cout << x[i - 1];
//    }
//    else if (b[i][j] == "↑") {
//        PrintLCS(b, x, i - 1, j);
//    }
//    else {
//        PrintLCS(b, x, i, j - 1);
//    }
//}
//
//int main() {
//    std::vector<int> a;
//    int inputA;
//    while (std::cin >> inputA) {
//        a.push_back(inputA);
//    }
//
//    std::vector<int> b;
//    int inputB;
//    while (std::cin >> inputB) {
//        b.push_back(inputB);
//    }
//
//    PrintLCS(LCSLength(a, b, a.size(), b.size()).b, a, a.size(), b.size());
//
//    return 0;
//}
