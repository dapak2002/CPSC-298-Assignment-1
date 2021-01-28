#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //Represents constant pay rates
  const double regPay = 16.0;
  const double overPay = 24.0;
  //Stores hours worked
  int hours = 0;
  //Stores gross pay
  double grossPay = 0.0;

  //Prompts and gets user input
  cout << "Enter the number of hours and employee has worked in week." << endl;
  cin >> hours;

  if (hours > 40)
  {
    grossPay = hours * overPay;
    double finalPay = grossPay;
    cout << "Gross pay: $";
    cout << fixed << setprecision(2) << grossPay << endl;
    cout << "Amount withheld for Social Security tax: $";
    cout << fixed << setprecision(2) << (grossPay * 0.06) << endl;
    finalPay -= (grossPay * 0.06);
    cout << "Amount withheld for federal income tax: $";
    cout << fixed << setprecision(2) << (grossPay * 0.14) << endl;
    finalPay -= (grossPay * 0.14);
    cout << "Amount withheld for state income tax: $";
    cout << fixed << setprecision(2) << (grossPay * 0.05) << endl;
    finalPay -= (grossPay * 0.05);
    cout << "Amount withheld for medical insurance: $";
    cout << fixed << setprecision(2) << 10.00 << endl;
    finalPay -= 10.0;
    cout << "Net take-home pay for the week: $";
    cout << fixed << setprecision(2) << finalPay << endl;
  }
  else
  {
    grossPay = hours * regPay;
    double finalPay = grossPay;
    cout << "Gross pay: $";
    cout << fixed << setprecision(2) << grossPay << endl;
    cout << "Amount withheld for Social Security tax: $";
    cout << fixed << setprecision(2) << (grossPay * 0.06) << endl;
    finalPay -= (grossPay * 0.06);
    cout << "Amount withheld for federal income tax: $";
    cout << fixed << setprecision(2) << (grossPay * 0.14) << endl;
    finalPay -= (grossPay * 0.14);
    cout << "Amount withheld for state income tax: $";
    cout << fixed << setprecision(2) << (grossPay * 0.05) << endl;
    finalPay -= (grossPay * 0.05);
    cout << "Amount withheld for medical insurance: $";
    cout << fixed << setprecision(2) << 10.00 << endl;
    finalPay -= 10.0;
    cout << "Net take-home pay for the week: $";
    cout << fixed << setprecision(2) << finalPay << endl;
  }!
  return 0;
}
