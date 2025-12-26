#include <iostream>
#include <string>
using namespace std;

class Calculator {
private:
    double a;
    double b;
    string operation;

public:
    Calculator(double x, double y, string op) {
        a = x;
        b = y;
        operation = op;
    }

    double calculate() {
        if (operation == "add") {
            return a + b;
        } 
        else if (operation == "subtract") {
            return a - b;
        } 
        else if (operation == "multiply") {
            return a * b;
        } 
        else if (operation == "divide") {
            if (b == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
        } 
        else {
            cout << "Invalid operation!" << endl;
            return 0;
        }
    }
};

int main() {
    double a, b;
    string op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operation (add / subtract / multiply / divide): ";
    cin >> op;

    Calculator calc(a, b, op);
    double result = calc.calculate();

    cout << "Result: " << result << endl;

    return 0;
}
