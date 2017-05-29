#include <iostream>
using namespace std;

int main()
{
  int arr[] = {0, 1, 2, 3, 4, 5};
  int idx = 6;
  int j = (idx * 2) - 1;
  cout << j << endl;
  for (int i = 11; i >= 0; i -= 2)
  {
    idx -= 1;
    arr[i] = arr[idx];
    arr[i - 1] = arr[idx];

    // cout << i << " " << i - 1 << " ";
    // for (int i = (idx * 2) - 1; i >= 0; i--)
    cout << "arr[" << idx << "] = " << arr[idx] << " " << endl;
    cout << "arr[" << i << "] = " << arr[i] << " " << endl;
    cout << "arr[" << i - 1 << "] = " << arr[i - 1] << " " << endl;

    cout << "=================" << endl;
  }
  cout << endl;
  idx = 6;
  for (int i = (idx * 2) - 1; i >= 0; i--)
    cout << arr[i] << " ";

  cout << endl;
}