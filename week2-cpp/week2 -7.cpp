#include <iostream>

int main() {
    int integerInput;
    double doubleInput;

    std::cout << "정수를 입력하세요: ";
    std::cin >> integerInput;

    std::cout << "실수를 입력하세요: ";
    std::cin >> doubleInput;

    double result = integerInput * doubleInput;

    int resultAsInt = static_cast<int>(result);

    std::cout << "두 값을 곱한 후 정수로 변환한 결과는: " << resultAsInt << std::endl;

    return 0;
}