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

    int good_pairs = 0;
    for (int j = 0; j < n; ++j)
        for (int i = j + 1; i < n; ++i)
        {
            int cur_prod = numbers[j] * numbers[i];
            if (cur_prod % 55 == 0)
                good_pairs++;
        }
    cout << good_pairs;
}

int main()
{
    div_15();
    return 0;
}
