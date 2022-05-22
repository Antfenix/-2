#include <iostream>

using namespace std;

int* DelNeg(int* Arr, int n, int& k)
{
    int i, j, * r;
    k = 0;
    for (i = 0; i < n; i++) if (Arr[i] >= 0) k++;
    r = new int[k];
    j = 0;
    for (i = 0; i < n; i++) if (Arr[i] >= 0) r[j++] = Arr[i];
    delete[] Arr;
    return r;
}

int main(int argc, char* argv[])
{
    int* A = new int[10];
    int i, n, * r;

    A[0] = 1;
    A[1] = -1;
    A[2] = 16;
    A[3] = -81;
    A[4] = 0;
    A[5] = 0;
    A[6] = 12;
    A[7] = 121;
    A[8] = -11;
    A[9] = 11;

    r = DelNeg(A, 10, n);

    for (i = 0; i < n; i++) cout << r[i] << " ";

    cout << endl;

    delete[] r;

    return 0;
}
