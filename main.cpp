#include <iostream>

using namespace std;

// introduce floating point units for the sum, difference, product, dividend, and the input numbers.
double sum, difference, product, num1, num2, dividend;
// introduce character for operation selection
char operation, fix;
// introduce strings for later use
string opselect = "Hello there! Please select the operation you wish to perform.\n available operations are as follows:\n addition (a), subtraction (s), multiplication (m), and division (d).\n Please select an operation by typing the corresponding letter and hitting the Enter key.";
string pin = "Alright, now please insert a number.\n";
string pin2 = "Fantastic! Now, please do insert a second number.\n";
string error = "Sorry, that isn't an available operation at this moment. \n Please restart and try again.";;
string didyoumean = "Sorry, that doesn't seem quite right. Did you mean ";
// introduction + operation selection
// completion, each having a prefix to determine which operation they go with
string acomplete = "Wonderful, thank you. The sum of your two numbers is \n";
string scomplete = "Wonderful, thank you. The difference of your two numbers is \n";
string mcomplete = "Wonderful, thank you. The product of your two numbers is \n";
string dcomplete = "Wonderful, thank you. The dividend of your two numbers is \n";

int addition(double a, double b) {

    cout << pin;
    cin >> num1;
    cout << pin2;
    cin >> num2;

    return sum = num1 + num2;
}

int subtraction(double a, double b) {
    cout << pin;
    cin >> num1;
    cout << pin2;
    cin >> num2;

   return difference = num1 - num2;
}

int multiplication(double a, double b) {
    cout << pin;
    cin >> num1;
    cout << pin2;
    cin >> num2;

   return product = num1 * num2;
}

int division(double a, double b) {
    cout << pin;
    cin >> num1;
    cout << pin2;
    cin >> num2;
    return dividend = num1 / num2;
}

int main(int argc, char **argv)
{

    // selecting operation
    cout << opselect;
    cin >> operation;
    // the meat of the code, where the calculations happen
    switch (operation) {
        // error message if proper operation is not selected
    default:
        cout << error;
        break;
        // actual operations, 'a' being addition, 's' being subtraction, 'm' being multiplication, and 'd' being division.
    case 'a':
        cout << scomplete << addition(num1, num2);
        break;
    case 's':
        cout << scomplete << subtraction(num1, num2);
        break;
    case 'm':
        cout << mcomplete << multiplication(num1, num2);
        break;
    case 'd':
        cout << dcomplete << division(num1, num2);
        break;
    case 'z':
        cout << didyoumean << "'a'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << acomplete << addition(num1, num2);
        }
        break;
    case 'q':
        cout << didyoumean << "'a'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << acomplete << addition(num1, num2);
        }

        break;
    case 'w':
        cout << didyoumean << "'s'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << scomplete << subtraction(num1, num2);
        }
        break;
    case 'x':
        cout << didyoumean << "'s'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << scomplete << subtraction(num1, num2);
        }
        break;
    case 'e':
        cout << didyoumean << "'d'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << dcomplete << division(num1, num2);
        }
        break;
    case 'c':
        cout << didyoumean << "'d'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << dcomplete << division(num1, num2);
        }
        break;
    case 'n':
        cout << didyoumean << "'m'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << mcomplete << multiplication(num1, num2);
        }
        break;
    case 'k':
        cout << didyoumean << "'m'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << mcomplete << multiplication(num1, num2);
        }
        break;
    case ',':
        cout << didyoumean << "'m'?" << "(y/n)";
        cin >> fix;
        if (fix == 'y') {
            cout << mcomplete << multiplication(num1, num2);
        }
        break;
    }
}
