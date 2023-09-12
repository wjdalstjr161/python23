#include <iostream>

int main() {
    double userInput;

    std::cout << "실수를 입력하세요: ";
    std::cin >> userInput;

    double result = userInput * 3;

    std::cout << "입력한 실수에 3을 곱한 결과는: " << result << std::endl;

    return 0;
}