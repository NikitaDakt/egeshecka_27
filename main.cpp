#include <iostream>
#include <vector>

using namespace std;

void max_sum_div()
{
    /**
    1)считать и сохранить все числа
    2) вывести все пары
    3) вместо пары вывести суммы
    4) проверить делимость суммы
    5) вывести только наибольшую сумму
    */
    int n(0);
    cin >> n;
    vector <int> numbers(n);
    for (int i(0); i<n; i++)
        cin>> numbers[i];
    cout << endl;
    for (int i(0); i<n; i++)
        cout << numbers[i] << " ";

}
int main()
{
    max_sum_div();
    return 0;
}
