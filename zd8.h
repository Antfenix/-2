#include <iostream>
#include <ctime>

using namespace std;

int dobavlenie_tam_gde_nado(int*& mas, int size)
{
    int add;
    int indeks;
    int* parray1 = NULL;
    cout << "С какого элемента произвести добавление?" << endl;
    cin >> indeks;

    cout << "Сколько элементов добавить - ";
    cin >> add;



    if (parray1 = (int*)calloc(size + add, (sizeof(int))))
    {
        for (int i = 0; i < indeks; i++)
            *(parray1 + i) = mas[i];

        for (int i = indeks; i < add + indeks; i++) {
            cout << "[" << size + i << "]=";
            cin >> *(parray1 + i);
        }
        for (int i = indeks + add; i < size + add; i++, indeks++)
        {
            cout << "[" << size + i << "]=";
            *(parray1 + i) = mas[indeks];
        }
    }
    else
    {
        cout << ("Ошибка выделения памяти\n");
        return 0;
    }

    size = size + add;
    free(mas);
    if (mas = (int*)calloc(size, (sizeof(int))))
        for (int i = 0; i < size; i++)
            mas[i] = parray1[i];
    else
    {
        cout << ("Ошибка выделения памяти\n");
        return 0;
    }
    free(parray1);

    return size;
}