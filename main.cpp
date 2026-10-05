#include <iostream>
#include <thread>


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
    std::this_thread::sleep_for (std::chrono::seconds(10));
    return 0;
}
