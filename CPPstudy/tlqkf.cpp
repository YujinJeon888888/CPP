#include <iostream>
#include <vector>
#include <string>

void LCSLength(std::vector<std::string> inputA, std::vector<std::string> inputB, int aSize, int bSize) {
    std::vector<std::vector<std::string>> stringTable(aSize + 1, std::vector<std::string>(bSize + 1, ""));
    std::vector<std::vector<int>> resultTable(aSize + 1, std::vector<int>(bSize + 1, 0));
    
    for (int i = 1; i <= aSize; i++) {
        for (int j = 1; j <= bSize; j++) {
            if (inputA[i] == inputB[i]) {
                resultTable[i][j] = resultTable[i - 1][j - 1] + 1;//↖+1
                stringTable[i][j] = "↖";
            }
            //위, 왼쪽 값을 보고 둘 중에 큰 값을 취함
            else if (resultTable[i - 1][j] >= resultTable[i][j - 1]) {
                resultTable[i][j] = resultTable[i][j - 1];
                stringTable[i][j] = "↑";
            }
            else {
                resultTable[i][j] = resultTable[i][j - 1];
                stringTable[i][j] = "←";
            }
        }
    }

    PrintLCS(stringTable, inputA, aSize, bSize);
}

void PrintLCS(std::vector<std::vector<std::string>> stringTable, std::vector<std::string> inputA, int i, int j) {
    if (i == 0 || j == 0) { //LCS길이가 없다면 리턴
        return;
    }
    if (stringTable[i][j] == "↖") {
        PrintLCS(stringTable, inputA, i - 1, j - 1);
        std::cout << inputA[i];
    }
    else if (stringTable[i][j] == "↑") {
        PrintLCS(stringTable, inputA, i - 1, j);
    }
    else {
        PrintLCS(stringTable, inputA, i , j - 1);
    }
}
int main() {
    std::vector<std::string> inputA;
    std::vector<std::string> inputB;
    for (int i = 0;; i++) {
        std::cin >> inputA[i];
        if (inputA[i] == "\n")
            break;
    }

    int aSize = inputA.size();
    int bSize = inputB.size();

    LCSLength(inputA, inputB, aSize, bSize);

    return 0;
}
