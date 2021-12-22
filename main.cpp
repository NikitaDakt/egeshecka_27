#include <iostream>
#include <vector>
using namespace std;

void num_sum_min_distance_eff_2318_2()
{
    /**
÷» Ћ»„≈— »… Ѕ”‘≈–
1. считываютс€ числа в черв€ка
2. выводитс€ кажда€ верси€ черв€ка как циклического буфера (после каждого шага/продвижени€ на одно число)
3. дл€ каждого шага черв€ка выводитс€ его содержимое и минимальное пройденное число
4. дл€ каждого шага черв€ка выводитс€ пара из числа в зубах и минимального пройденного
5. ищетс€ минимум среди сгенерированных пар, удовлетвор€ющих условию номер 2 (кратно ли числу)

    **/

    int n, min_num = 9999, min_sum = 8000;
    cin >> n;
    vector<int> num(6, 0);
    int counters[1][33];
    for (int i(0); i < 6; i++)
    {
        cin >> num[i];
        counters[0][num[i] % 33] += 1;
    }


    int count = 0, tail_number = 0, t_and_h_sum = 0;
    for (int i = 6; i < n; ++i)
    {
        int tail = i % 6;
        tail_number = num[tail]; // tail
        cin >> num[tail]; // head

        t_and_h_sum = min_num + num[tail];
        count += counters[i] + counters[33 - i];
        if (t_and_h_sum % 33 == 0)
            count += 1;
    }
    cout << count;
}
int main()
{
    num_sum_min_distance_eff_2318_2();
    return 0;
}
