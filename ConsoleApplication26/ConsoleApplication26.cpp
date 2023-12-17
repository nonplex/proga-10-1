#include <iostream>
#include <cmath>
#include <locale>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    /**
     * @brief Л/р 5 Одномерные массивы
     * Вариант 21 задание 1(статический)
     * Дан массив размера N. Найти номера тех элементов массива,
     * которые больше своего правого соседа, и количество таких элементов.
     * Найденные номера выводить в порядке их возрастания.
     * Ввод значений массива производится с клавиатуры.
    */
    string patch = "myFile.txt";
    ofstream fout;
    fout.open(patch);
    const int n = 10;
    int mas[n];
    int k = 0;
    for (int i = 0; i < n; i++) {
        cout << "элемент массива номер " << i << ":";
        cin >> mas[i];
    }
    fout << "Подходящие под условие номера элементов ";
    for (int i = 0; i < n-1; i++) {
        if (mas[i] > mas[i + 1]) {

            fout << i << " ";
            k = k + 1;
        }
    }
    fout << endl << "количество подходящих элементов " << k;
    
    string line;
    ifstream in;
    in.open("myFile.txt");
    while (getline(in, line)) {
        cout << line << endl;
    }
    in.close(); 
}
