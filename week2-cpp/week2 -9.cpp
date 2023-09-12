#include <iostream>

int main() {
    double doubleInput;

    std::cout << "실수를 입력하세요: ";
    std::cin >> doubleInput;

    int intResult = static_cast<int>(doubleInput);

    std::cout << "입력한 실수를 정수로 변환한 결과는: " << intResult << std::endl;

    return 0;
}