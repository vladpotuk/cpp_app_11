#include <iostream>
#include<Windows.h>
#include <cmath>

int main() {
    system("chcp 1251");
    system("cls");
    double radius, volume;

    std::cout << "ќбчисленн€ об'Їму кул≥" << std::endl;
    std::cout << "¬вед≥ть рад≥ус кул≥ (см) -> ";
    std::cin >> radius;

    
    volume = (4.0 / 3.0) * 3.14 * pow(radius, 3);

    std::cout << "ќб'Їм кул≥: " << volume << " куб.см." << std::endl;

    return 0;
}