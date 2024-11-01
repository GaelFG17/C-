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

    switch (value1) {
        case 1:
            std::cout << "El primer valor es 1" << std::endl;
            break;
        case 2:
            std::cout << "El primer valor es 2" << std::endl;
            break;
        default:
            std::cout << "El primer valor no es ni 1 ni 2" << std::endl;
            break;
    }

    std::cout << "Usted ingresó: " << value1 << " y " << value2 << std::endl;
    return 0;
}