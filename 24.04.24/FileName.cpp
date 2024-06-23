#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int size;
    cout << "Enter size -> ";
    cin >> size;

    int* ptr = 0;

    ptr = new int[size]; // new
    if (ptr == nullptr)
    {
        cout << "Error\n\n";
    }
    for (int i = 0; i < size; i++)
    {
        ptr[i] = rand() % 20;
        cout << ptr[i] << "\t";
    }
    cout << endl;


    //создать новый массив минимально возможного размера и копировать туда только чётные елементы массива
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] % 2 == 0)
        {
            count++;
        }
    }
    int* mas = 0;
    mas = new int[count];
    for (int i = 0,j=0; i < size; i++)
    {
        if (ptr[i] % 2 == 0)
        {
            mas[j] = ptr[i];
            j++;
        }
    }
    
    cout << "-----------------\n";
    for (int i = 0; i < count; i++)
    {
        cout << mas[i]<<"\t";
    }
    cout << endl;



    delete[] ptr;
    delete[] mas;
}