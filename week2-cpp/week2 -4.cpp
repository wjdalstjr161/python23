#include <iostream>

int main() {
    double userInput;

    std::cout << "실수를 입력하세요: ";
    std::cin >> userInput;

    double result = userInput + 1.2;

    std::cout << "입력한 실수에 1.2를 더한 결과는: " << result << std::endl;

    return 0;
}