// including required header files
#include <iostream>
using namespace std;

int main()
{
  // input a number from user
  int n;

  cout << "Enter the number of rows: ";
  cin >> n;

  // printting pattern
  for (int i = 1; i <= n; ++i)
  {

    for (int j = 1; j <= n - i; ++j)
    {
      cout << " ";
    }

    for (int k = 1; k <= i; ++k)
    {
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}
