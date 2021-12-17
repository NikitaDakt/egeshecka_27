#include <iostream>
#include <vector>

using namespace std;
void div_15()
{
    /**
     1) считать и запомнить числа
     2) вывести все пары чисел
     3) вместо пар вывести произведения
     4) проверить делимость произведений
     5) посчиттать и выести коичество подходящих пар
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        cin >> numbers[i];
    for (int j = 0; j < n; ++j)
        for (int i = j + 1; i < n; ++i)
            cout << numbers[j] * numbers[i] << endl;
}

int main()
{
    div_15();
    return 0;
}
