// laba17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    //задание 1
    cout << "Task 1. ";
    int n,K,L;
    cout << "\nPrint size: ";
    cin >> n;
    cout << "Print K: ";
    cin >> K;
    cout << "Print L: ";
    cin >> L;
    if (cin.fail() || n < 1 || K<1 || L<1 || K>L || K>n || L>n)
    {
        cout << "ERROR!\n";
    }
    else
    {
        int* mas1 = new int[n];
        double average = 0;  // среднее арифметическое
        for (int i = 0; i < n; i++)
        {
            mas1[i] = rand() % 30;  //рандомно заполняем массив
            cout << mas1[i] << " "; //выводим на экран
        }
        for (int i = K - 1; i < L; i++)
        {
            average = average + mas1[i]; //считаем сумму чисел
        }
        average = average / (L - K + 1);  //считаем среднее арифметическое
        cout << "\nAverege = " << average;
    }
    //задание 2
    cout << "\nTask 2. ";
    cout << "\nPrint size: ";
    cin >> n;
    if (cin.fail() || n < 1)
    {
        cout << "ERROR!\n";
    }
    else
    {
        int* mas2 = new int[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Print " << i << " value: ";
            cin >> mas2[i];  //ввод значений массива
        }
        bool b = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                    if (mas2[i] == mas2[j]) //проверка, есть ли в массиве одинаковые числа
                    {
                        b = true;
                        break;
                    }
            }
            if (b) break; 
        }
        if (b) cout << "ERROR! Identical numbers found.\n";
        else
        {
            b = false;
            int d = mas2[1] - mas2[0];
            for (int i = 2; i < n; i++)
            {
                if (d != mas2[i] - mas2[i - 1])
                {
                    b = true;
                    break;
                }
            }
            if(b) cout << " 0\n";
            else cout << "D = " << d<<"\n";
        }
    }

    //задание 3
    cout << "\nTask 3. ";
    cout << "\nPrint size: ";
    cin >> n;
    if (cin.fail() || n < 1)
    {
        cout << "ERROR!\n";
    }
    else
    {
        int* mas3 = new int[n];
        for (int i = 0; i < n; i++)
        {
            mas3[i] = rand() % 30;  //рандомно заполняем массив
            cout << mas3[i] << " "; //выводим на экран
        }
        int min = mas3[0];
        for (int i = 0; i < n; i++)
        {
            if (i % 2)  //проверка на четность
            {
                if (mas3[i] < min)  //сравнение
                    min = mas3[i];
            }
        }
        cout << "\nMin = " << min;
    }
    //задание 4
    cout << "\nTask 4. ";
    cout << "\nPrint size: ";
    cin >> n;
    if (cin.fail() || n < 1)
    {
        cout << "ERROR!\n";
    }
    else
    {
        int* mas4 = new int[n];
        for (int i = 0; i < n; i++)
        {
            mas4[i] = rand() % 30;  //рандомно заполняем массив
            cout << mas4[i] << " "; //выводим на экран
        }
        int NumMax=-1;
        if (mas4[0] > mas4[1]) NumMax = 0;  //сравниваем 2 первых элемента
        for (int i = 1; i < n-1; i++)
        {
            if (mas4[i] > mas4[i - 1] && mas4[i] > mas4[i + 1]) //сравниваем элементы посередине
                NumMax = i;
        }
        if (mas4[n - 1] > mas4[n - 2]) NumMax = n - 1; //сравниваем 2 последних элемента
        cout << "\nNumber Max = " << NumMax+1;
    }
    //задание 5
    cout << "\nTask 5. ";
    cout << "\nPrint size: ";
    cin >> n;
    if (cin.fail() || n < 1)
    {
        cout << "ERROR!\n";
    }
    else
    {
        int* mas5 = new int[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Print "<<i<<" value: ";
            cin >> mas5[i];  //ввод значений массива
        }
        int One, Second,count;
        for (int i = 0; i < n ; i++)
        {
            count = 0;
            for (int j = 0; j < n; j++)
            {
                if (i != j) 
                {
                    if (mas5[i] == mas5[j]) //поиск 2х одинаковых чисел
                    {
                        count++;
                        One = i;
                        Second = j;
                    }
                    if (count > 1) break;  //проверка на количество таких чисел
                }
            }
            if (count == 1) break; //если 2одинаковых числа найдены, завершаем поиск
        }
        if (count >0)
            cout << "\n Numbers of the same numbers: " << One << " " << Second;
        else 
            cout << "\n No numbers found.";
    }

    cout << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
