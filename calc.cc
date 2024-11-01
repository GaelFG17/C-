#include <iostream>

using namespace std;

int main() {
    char operacion;
    float num1, num2;

    cout << "Ingrese operador (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingrese dos operandos: ";
    cin >> num1 >> num2;

    switch(operacion) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error: División por cero no permitida.";
            break;

        default:
            cout << "Error: Operador no válido.";
            break;
    }

    return 0;
}