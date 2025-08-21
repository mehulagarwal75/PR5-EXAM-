#include <iostream>
using namespace std;

int main() {
    char choice;
    
    cout << "Calculator"<<endl<<endl;

    while (true) {
        cout << endl <<"Press + for Addition";
        cout <<endl <<"Press - for Subtraction";
        cout << endl <<"Press * for Multiplication";
        cout << endl <<"Press / for Division";
        cout << endl <<"Press %  for  Modulus";
        cout << endl <<"Press 0 to Exit.";
        cout <<endl <<"Enter Your Choice : ";
        cin >> choice;

        if (choice == '0') {
            // running = false;
            cout << "Exiting... Thank you!"<<endl<<endl;
        } 
        else {
            int a, b;
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;

            switch (choice) {
                case '+':
                    cout << "Result = " << (a + b) << endl;
                    break;
                case '-':
                    cout << "Result = " << (a - b) << endl;
                    break;
                case '*':
                    cout << "Result = " << (a * b) << endl;
                    break;
                case '/':
                    if (b != 0)
                        cout << "Result = " << (a / b) << endl;
                    else
                        cout << " Division by zero not allowed."<<endl;
                    break;
                case '%':
                    if (b != 0)
                        cout << "Result = " << (a % b) << endl;
                    else
                        cout << "Modulus by zero not allowed."<<endl;
                    break;
                default:
                    cout << "Invalid choice! Please enter a valid choice."<<endl;
            }
        }
    }

    return 0;
}
