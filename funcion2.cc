#include <iostream>

void readValues(int &a, int &b) {
    std::cout << "Ingrese el primer valor: ";
    std::cin >> a;
    std::cout << "Ingrese el segundo valor: ";
    std::cin >> b;
}

int main() {
    int value1, value2;
    readValues(value1, value2);
    std::cout << "Usted ingresó: " << value1 << " y " << value2 << std::endl;
    return 0;
}