#include <iostream>
using namespace std;

int main()
{
  int arr[] = {9, 8, 7, 6, 3, 2, 1};
  for (int i = 0; i < 6; i++)
  {
    if (arr[i] % 2 == 1)
      arr[i] *= 2;
  }
  for (int i = 0; i < 7; i++)
    cout << arr[i] << " ";
  cout << endl;
}