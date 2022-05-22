#include<iostream>
#include<ctime>

using namespace std;


int ydalenie_tam_gde_nado(int*& mas, int size)
{
    int s_kakogo = NULL;
    int do_kakogo = NULL;

    int* parray1 = NULL;
    cout << "С какого элемента произвести удаление - " << endl;
    cin >> s_kakogo;

    cout << "До какого элемента произвести удаление -";
    cin >> do_kakogo;
    int indeks = do_kakogo - s_kakogo;

    if (parray1 = (int*)calloc(size - indeks, (sizeof(int))))
    {
        for (int i = 0; i < s_kakogo; i++)
            *(parray1 + i) = mas[i];


        for (int i = do_kakogo; i < size; i++, s_kakogo++)
        {
            *(parray1 + s_kakogo) = mas[i];
        }
    }
    else
    {
        cout<<("Ошибка выделения памяти\n");
        return 0;
    }

    size = size - indeks;
    free(mas);
    if (mas = (int*)calloc(size, (sizeof(int))))
        for (int i = 0; i < size; i++)
            mas[i] = parray1[i];
    else
    {
       cout<<("Ошибка выделения памяти\n");
        return 0;
    }
    free(parray1);

    return size;
}
