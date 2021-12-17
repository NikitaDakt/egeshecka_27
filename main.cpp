#include <iostream>

using namespace std;

void max_sum_div_eff_2()
{
    /**
     +1) заполнить массив 2 на 40 нулями
     +2) затем заполнить массив с счетчиками [x > 40][x % 40] += 1
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
    cin>> x;

    while (x != -9999)
    {
        counters[x > 40][x % 40] += 1;
        cin>> x;
    }

    int sum = 0;

    int bigger_40 = counters[1][0], smaller_40 = counters[0][0];

    sum += bigger_40 * (bigger_40 - 1) / 2;
    sum += bigger_40 * smaller_40;

    bigger_40 = counters[1][20];
    smaller_40 = counters[0][20];

    sum += bigger_40 * (bigger_40 - 1) / 2;
    sum += bigger_40 * smaller_40;

    for (int i = 1; i < 20; ++i)
    {
        int count_complimentary_num_bigger_40 = counters[1][40 - i];
        bigger_40 = counters[1][i];

        int count_complimentary_num_smaller_40 = counters[0][40 - i];
        smaller_40 = counters[0][i];


        sum += bigger_40 * count_complimentary_num_bigger_40;
        sum += bigger_40 * count_complimentary_num_smaller_40;
        sum += smaller_40 * count_complimentary_num_bigger_40;
    }

    cout << sum;
}

int main()
{
    max_sum_div_eff_2();
    return 0 ;
}
