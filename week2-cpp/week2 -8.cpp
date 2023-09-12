#include <iostream>

int main() {
    int userInput;

    std::cout << "정수를 입력하세요: ";
    std::cin >> userInput;

    double result = static_cast<double>(userInput) / 3.0;

    std::cout << "입력한 정수를 3으로 나눈 결과: " << result << std::endl;

    return 0;
}