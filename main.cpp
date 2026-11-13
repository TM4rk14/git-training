#include <iostream>
#include <vector>
using namespace std;
double func(const double x, const double y)
{
  int A = (int)x;
  int B = (int)y;
  int szam = B - A + 1;
  vector<double> vec(szam);
  for (int i = 0; i < szam; ++i)
  {
    vec[i] = A;
    A++;
  }
  for (int i = 0; i < szam; ++i)
  {
    int temp;
    temp = vec[i];
    vec[i] = vec[szam - i - 1];
    vec[szam - i - 1] = temp;
  }

  int sum = 0;
  for (auto &e : vec)
  {
    sum += e;
  }

  return ((double)sum);
}

int main()
{
  double x, y, z;
  cout << "Enter a number: ";
  cin >> x;
  cout << "Enter a number: ";
  cin >> y;
  z = func(x, y);
  cout << "The result is: " << z << endl;
  return 0;
}
