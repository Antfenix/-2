#include <iostream>
using namespace std;
int main()
{
    const int arrlen = 10;
    int arr[arrlen];
    int* ret = arr;

    for (int i = 0; i < arrlen; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> ret[i];
    }

    cout << "[ ";
    for (int i = 0; i < arrlen; i++)
        cout << ret[i] << " ";
    cout << "]" << endl;

    cout << "[ ";
    for (int i = arrlen - 1; i >= 0; i--)
        cout << ret[i] << " ";
    cout << "]" << endl;
    return 0;
}
