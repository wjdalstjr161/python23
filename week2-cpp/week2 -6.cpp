#include <iostream>

int main() {
    int num1, num2;

    std::cout << "정수를 입력하세요: ";
    std::cin >> num1;

    std::cout << "또 다른 정수를 입력하세요: ";
    std::cin >> num2;

    int sum = num1 + num2;

    std::cout << "두 정수의 합은: " << sum << std::endl;

    return 0;
}