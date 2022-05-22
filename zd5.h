#include <iostream>
#include <ctime>


using namespace std;

void pol(int* dar, int size, int* pol)
{
    *pol = 0;
    for (int i = 0; i < size; i++)
        if (dar[i] > 0)
            pol++;
    cout << *pol << endl;
}
void min(int* dar, int size, int* min)
{
    *min = 0;
    for (int i = 0; i < size; i++) {
        if (dar[i] < 0) {
            min += 1;
        }
    }
    cout << *min << endl;
}

void null(int* dar, int size, int* null)
{
    *null = 0;
    for (int i = 0; i < size; i++) {
        if (dar[i] = 0) {
            null++;
        }
    }
    cout << *null << endl;
}





void main()
{
    srand(time_t(NULL));

    int size;
    int* dar;
    int pol1 = 0;
    int min1 = 0;
    int null1 = 0;

    cout << "Enter size:\n";
    cin >> size;

    dar = new int[size];
    if (!dar) {
        cout << "Sorry, error!!!";
        exit(0);
    }

    for (int i = 0; i < size; i++) {
        dar[i] = rand() % 41 - 20;
        cout << dar[i] << "\t";
    }
    cout << "\n\n";

    pol(dar, size, &pol1);
    min(dar, size, &min1);
    null(dar, size, &null1);

    delete[]dar;
}




