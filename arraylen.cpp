# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: "
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*'
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    
  }

  return 0;
}
