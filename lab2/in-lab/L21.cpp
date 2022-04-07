#include <iostream>
using namespace std;

bool checkDuplicate(int* ar, int size)
{
    //Implement content in function  here
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    if (size == 1) return true;
    else
    {
        if (ar[size - 1] == ar[size - 2]) return false;
        else return checkDuplicate(ar, size - 1);
    }
}

int main() {
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[n];
    }
    cout << checkDuplicate(ar, n);
    return 0;
}