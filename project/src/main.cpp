#include <iostream>
#include <vector>
#include "capture_regions.h"

int main() {
    int m, n;
    std::cout << "请输入矩阵的行数和列数：";
    if (!(std::cin >> m >> n)) {
        std::cerr << "输入错误：行数和列数必须为正整数" << std::endl;
        return 1;
    }

    if (m <= 0 || n <= 0) {
        std::cerr << "输入错误：行数和列数必须为正整数" << std::endl;
        return 1;
    }

    std::vector<std::vector<char>> board(m, std::vector<char>(n));
    std::cout << "请输入矩阵（仅限 'X' 和 'O'）：" << std::endl;

    int inputCount = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!(std::cin >> board[i][j])) {
                std::cerr << "输入错误：输入的矩阵元素数量与指定的行数和列数不一致" << std::endl;
                return 1;
            }
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                std::cerr << "输入错误：矩阵元素必须为 'X' 或 'O'" << std::endl;
                return 1;
            }
            inputCount++;
        }
    }

    char extraInput;
    if (std::cin >> extraInput) {
        std::cerr << "输入错误：输入的矩阵元素数量与指定的行数和列数不一致" << std::endl;
        return 1;
    }

    captureRegions(board);

    std::cout << "捕获后的矩阵：" << std::endl;
    for (const auto& row : board) {
        for (char c : row) {
            std::cout << c << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}