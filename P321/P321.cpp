#include <iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    /* setlocale(LC_ALL, "rus");
     int stolb = 1;
     for (int i = 0; i < 2; i++)
     {
         if (i == 0)
         {
             for (int m = 0; m < stolb; m++)
             {
                 for (int j = 0; j < 1; j++)
                 {
                     if (j == 0)
                     {
                         for (int k = 0; k < stolb; k++)
                         {
                             cout << "\t";
                             cout << "A  ";
                             cout << "B  ";
                             cout << "C  ";
                             cout << "D  ";
                             cout << "E  ";
                             cout << "F  ";
                             cout << "G  ";
                             cout << "H  ";
                             cout << "I  ";
                             cout << "J  ";
                             cout << "\n";
                         }
                     }

                 }
                 cout << "\n";
             }
         }
         else {
             for (int m = 0; m < stolb; m++)
             {
                 for (int j = 0; j < 1; j++)
                 {
                     if (j == 0)
                     {
                         for (int k = 0; k < stolb; k++)
                         {
                             if ((k % 2) == 0)
                             {
                                 for (int c = 0; c < 10;)
                                 {
                                     cout << c << "\t";
                                     cout << "A" << c << " ";
                                     cout << "B" << c << " ";
                                     cout << "C" << c << " ";
                                     cout << "D" << c << " ";
                                     cout << "E" << c << " ";
                                     cout << "F" << c << " ";
                                     cout << "G" << c << " ";
                                     cout << "H" << c << " ";
                                     cout << "I" << c << " ";
                                     cout << "J" << c << "";
                                     c++;
                                     cout << "\n";
                                 }

                             }
                         }
                     }

                 }
             }
         }
     }*/

     // srand(556);
    srand(time(NULL));

    //cout << sizeof(arrynumber[0]) << endl;// размер одного элемента массива в байтах
    //cout << arrynumber << endl; // адрес массива в памяти
    //cout << sizeof(arrynumber) / sizeof(arrynumber[0]) << " количество элементов в массиве\n\n\n";
   /* for (int i = 0; i < n; )
    {
        arrynumber[i] = 1+rand()%100;
        if (arrynumber[i]%2!=0)
        {
            cout <<i<<". "<<arrynumber[i] << " \n";
            i++;
        }

    }*/

    /* const int n = 5;
     int arrynumber[n][n] = {};
     srand(time(NULL));
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             arrynumber[i][j] = rand() % 10 + 110;
         }

     }
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             cout << arrynumber[i][j]<<"\t";
         }
         cout << "\n\n";
     }
     cout << "\n\n";*/

     /*for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             arrynumber[i] = rand() % 50 + 100;
         }

     }
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             cout  << arrynumber[i]<<"\t";
         }
         cout << endl<<endl;
     }
     cout << endl<<arrynumber[3];
    arrynumber[5] = 35;
     cout << "Значение массива по индексу 5 "  << " -> " << arrynumber[5] << endl;*/
     //srand(50);
     //int n;
     //n = rand();// 0-32 767 диапазон
     //cout << "n-> " << n << endl;
  /*   srand(time(NULL));
     double n = 0;
     for (int i = 0; i < 23; i++)
     {
         n = rand()%((54621*11884)/646)*0.65;
         cout << n << endl;
     }*/

     /*const int n = 5;
     int arr[n] = {};
     for (int i = 0; i < n; i++)
     {
         cout << "Введите значение элемента " << i+1 << " массива" << endl;
         cin >> arr[i];
     }
     for (int i = 0; i < n; i++)
     {
         cout << arr[i]<<"\t\t";
     }
     return 0;*/


    const int n = 5;
    int arry[n][n] = { {}, {} };
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arry[i][j] = 1 + rand() % 100;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout<<  arry[i][j]<<"\t";
        }
        cout << endl;
    }


}