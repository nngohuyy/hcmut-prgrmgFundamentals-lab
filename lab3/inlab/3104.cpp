#include <iostream>
using namespace std;

int** readArray()
{
   //TODO
   int** arr = new int*[10];
   for (int i = 0; i < 10; i++) {
       arr[i] = new int[10];
   }
   for (int i = 0; i < 10; i++) {
       for (int j = 0; j < 10; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0) {
                for (int c = j + 1; c < 10; c++) {
                    arr[i][c] = 0;
                }
                break;
            }
       }
   }
   return arr;
}