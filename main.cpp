#include <iostream>
#include<Windows.h>
#include <cmath>

int main() {
    system("chcp 1251");
    system("cls");
    double radius, volume;

    std::cout << "���������� ��'��� ���" << std::endl;
    std::cout << "������ ����� ��� (��) -> ";
    std::cin >> radius;

    
    volume = (4.0 / 3.0) * 3.14 * pow(radius, 3);

    std::cout << "��'�� ���: " << volume << " ���.��." << std::endl;

    return 0;
}