#include <iostream>
using namespace std;

int main()
{
  int size = 6;
  for (int i = size; i >= 0; i--)
  {
    cout << "i = " << i << endl;
    size += 1;
  }
}