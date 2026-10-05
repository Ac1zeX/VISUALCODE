#include <iostream>

int main() {
    double temp;
    std::cout << "Input temperature:";
    std::cin >> temp;
    if (temp < 10){
        std::cout << "COLD";
    }
    else if (temp > 80){
        std::cout << "DANGER";
    }
        else if (temp > 40){
        std::cout << "HOT";
    }
        else {
            std::cout << "NORMAL";
        }
    return 0;
}
