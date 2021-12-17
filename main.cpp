#include <iostream>

using namespace std;

void max_sum_div_eff_2()
{
    /**
     1) заполнить массив 2 на 40 нулями
     2) затем заполнить массив с счетчиками [x > 40][x % 40] += 1
     3) суммировать комплементарные остатки для 40 отдельно, 20 отдельно, остальных отдельно
    */
    int x = 0;
    int counters[2][40];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 40; j++)
        {
            counters[i][j] = 0;
        }
    }

    std::cin >> x;
}
int main()
{
    max_sum_div_eff_2();
    return 0;
}
