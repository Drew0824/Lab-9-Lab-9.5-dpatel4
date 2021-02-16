#include <iostream>
using namespace std;

int main() {
  
  double q1;
  double q2;
  double q3;
  double q4;
  double waterBill;

  cout << "Please input your water bill for quarter 1:\n";
  cin >> q1;

  cout << "Please input your water bill for quarter 2:\n";
  cin >> q2;

  cout << "Please input your water bill for quarter 3:\n";
  cin >> q3;

  cout << "Please input your water bill for quarter 4:\n";
  cin >> q4;

  waterBill = (q1 + q2 + q3 + q4) / 12;

  cout << "Your average monthly bill is: $" << waterBill << endl;

  if (waterBill >= 75)
    cout << "Too much water is being used." << endl;

  else if (waterBill >= 25)  
    cout << "Typical amount of water is being used." << endl;

  else if (waterBill >= 0)
    cout << "Thank You so much for conserving water." << endl;

  
}