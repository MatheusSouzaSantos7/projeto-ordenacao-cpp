#include <iostream>
using namespace std;

void sort_insertion(int t, int *a)
{
    for(int i = 1; i < t; ++i)
    {
        int key = a[i];
        int j = i - 1;
        
        // Move os elementos de a[0..i-1], que são maiores que a[i], 
        // para uma posição à frente de sua posição atual
        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            cout << "Moveu: " << a[j] << " de [" << j << "] para [" << j+1 << "]" << endl;
            --j;
        }
        a[j + 1] = key;
        cout << "Inseriu: " << key << " em [" << j+1 << "]" << endl;
        cout << "---------------" << endl;
    }
}

void print(int t, int *a)
{
    for(int i = 0; i < t; ++i)
    {
        cout << "Elemento " << i << " = " << a[i] << endl;
    }
    cout << "----------------" << endl;    
}

int main(int argc, char** argv)
{
    int v[8] = {49, 38, 58, 87, 34, 93, 26, 13};
    print(8, v);
    sort_insertion(8, v);
    print(8, v);
    
    return 0;
}