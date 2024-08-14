#include <iostream>
using namespace std;

int main()
{
	char optr;
	float num1, num2;
    
    cout<<"Enter the operator ( + , - , * , / ) : ";
	cin >> optr;
    
    cout<<"Enter first number : ";
    cin >> num1;

    cout<<"Enter second number : ";
    cin >> num2;

	switch (optr) {
	case '+':
		cout <<"Sum is : "<<num1 + num2;
		break;
	case '-':
		cout <<"Difference is : "<<num1 - num2;
		break;
	case '*':
		cout <<"Product is : "<<num1 * num2;
		break;
	case '/':
		cout <<"Division is : "<<num1 / num2;
		break;
	default:
		cout << "Error! operator is not correct";
	}

	return 0;
}
