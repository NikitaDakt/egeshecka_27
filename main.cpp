#include <iostream>
#include <vector>

using namespace std;

void div_6()
{
    /**
     +1) считать число
     +2) добавить его к одному из счетчиков соответсвующего класса эквивалетности:
     делится на 6
     делится на 2 НЕ на 3
     делится на 3 НЕ на 2
     не делится ни на 2 ни на 3
     3) ответ n6 * n2 + n6 * n3 + n6 * no + n6*(n6-1) / 2 * n2 * n3
    */

    int n6 = 0, n3 = 0, n2 = 0, no = 0;
    int n = 0, cur = 0;
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        cin >> cur;

        if (cur % 6 == 0)
            n6++;
        else if (cur % 2 ==0)
            n2++;
        else if (cur % 3 == 0)
            n3++;
    }

    no = n - n6 - n3 - n2;
    cout << n6 << ' ' << n3 << ' ' << n2 << ' ' <<  no;


}

int main()
{
    div_6();
    return 0;
}
