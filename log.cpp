#include <cmath>
#include <iostream>
using namespace std;

int main()
{
  double number, dsqrt,dpow,dlog;
  int i,fact=1;

  cout << "Please enter a number \n";
  cin >> number;

  for(i=1;i<=number;i++)
  {
      fact=log10(fact*i);
  }
  cout<<fact<<endl;
  return 0;
}
