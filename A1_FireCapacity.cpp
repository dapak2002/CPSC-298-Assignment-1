#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  //Keeps track of room capacity
  int maxCapacity = 0;
  //Keeps track of number of people in room
  int numPeople = 0;

  //Prompts and gets user input.
  cout << "Enter the maximum room capacity." << endl;
  cin >> maxCapacity;
  cout << "Enter the number of people attending the meeting." << endl;
  cin >> numPeople;

  //Determines if meeting is legal or if people must be excluded.
  if (numPeople <= maxCapacity)
  {
    cout << "It is legal to hold the meeting. " << (maxCapacity - numPeople) << " more people may attend the meeting." << endl;
  }
  else
  {
    cout << "The meeting cannot be held las planned due to fire regulations. " << fabs(maxCapacity - numPeople) << " people must be excluded in order to meet the fire regulations." << endl;
  }
  return 0;
}
