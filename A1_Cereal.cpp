#include <iostream>
using namespace std;

int main()
{
  //Keeps the conversion value of ounces to tons
  const double ton = 35273.92;
  //User input for package weight
  double weight = 0.0;

  //Prompts the user and gets input
  cout << "Please enter the weight of a package of breakfast cereal in oz." << endl;
  cin >> weight;

  //Outputs relevant information
  cout << "The weight of the package in tons is: " << (weight/ton) << endl;
  cout << "You would need " << (ton/weight) << " boxes of cereal to yield one metric ton of cereal." << endl;

  return 0;
}
