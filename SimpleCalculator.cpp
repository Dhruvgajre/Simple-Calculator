#include <iostream>

using namespace std;

int main()
{
    cout << "This is a Simple Calculator" << endl;
    int ans;
    int num1;
    int num2;
    char operation;

    cout << "Enter the first nummber" << endl;
    cin >> num1;

    cout << "Choose the operation: " << endl;
    cout << "1. +" << endl;
    cout << "2. -" << endl;
    cout << "3. *" << endl;
    cout << "4. /" << endl;
    cin >> operation;

    cout << "Enter the second number" << endl;
    cin >> num2;

    switch (operation)
    {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '/':
        ans = num1 / num2;
        break;
    default:
        cout << "Invalid operation" << endl;
        break;
    }
    cout << "Answer --> " << ans << endl;
}