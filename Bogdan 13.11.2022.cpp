#include <iostream>
#include <ctime>
using namespace std;
int main()
{
   // Вариант 1
      //  1. Задан массив A, содержащий 10 целых случайных чисел от 0 до 20. Найти произведение элементов этого массива.
   /* int pr = 1;
    const int a = 10;
    int mas[a];
    srand(time(nullptr));
    for (int i = 0; i < a; i++) {
        mas[i] = rand() % 21;
        cout << mas[i] << endl;
        pr = pr * mas[i];
    }
    cout <<"proisvedenie" << " "<< pr << endl;
    */
  //  2. Задан массив, который содержит 8 случайных целых чисел от - 10 до 10. Найти сумму положительных элементов массива.
   /* int sum = 0;
    const int n = 8;
    int mas[n];
    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        mas[i] = rand() % 21 - 10;
        cout << mas[i] << endl;
        if (mas[i] > 0) {
            sum = sum + mas[i];
        }
    }
    cout <<"summa"<< " "<< sum << endl;*/
  //  3. Задан массив, который содержит 16 случайных целых чисел от 0 до 20. Найти количество элементов массива, которые делятся на 3 и на 5.
   /* int kol = 0;
    const int n = 16;
    int mas[n];
    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        mas[i] = rand() % 21;
        cout << mas[i] << endl;
        if (mas[i] % 5 == 0 && mas[i]%3==0) {
            kol = kol + 1;
        }
    }
    cout <<"kolichestvo" << " " << kol << endl;*/
  //  4. Задан массив из 9 целых чисел  от - 10 до 10. Найти сумму элементов массива, которые являются четными числами.
   /* int sum = 0;
    const int  n = 9;
    int mas[n];
    srand(time(nullptr));
    for (int i = 0; i < n; i++) {
        mas[i] = rand() % 21 - 10;
        cout << mas[i] << endl;
        if (mas[i] % 2 == 0) {
            sum = sum + mas[i];
        }
    }
    cout << "summa" << " " << sum << endl;*/










    return 0;
}
