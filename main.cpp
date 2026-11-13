#include <iostream>
using namespace std;

int main(){
  double x, y, z;
  cout << "Enter a number: ";
  cin >> x;
  cout << "Enter a number: ";
  cin >> y;
  z = func(x, y);
  cout << "The result is: " << z << endl;
  return 0;
}
