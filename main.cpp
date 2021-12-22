#include <iostream>
#include <vector>
using namespace std;

bool is_sum(int a, int b)
{
    return ((a + b) % 31 == 0); // ������� �������, ����������� 0 ��� 1 � ����������� �� ���� 
    //������� �� ����� �� 31
}

void num_sum_max_distance_eff()
{
    /*/
    1)����� ������ 10 ����� (������� � 10 ����� �� �������)
    2) ������������� �� �� ������� ����, ������ �� ��� 31
    3) ����� ��������� ����� �� 10 �� ����� � ���������� ��������� ������������ �������
    */


    int N;
    cin >> N;
    int count = 0;
    vector<int> number(10, 0); //������� ������ ������ 10 �����

    for (int i = 0; i < 10; i++)
    {
        cin >> number[i];
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
            count += is_sum(number[i], number[j]); //������� �� ����� � ������� ������ �� 31
    }

    for (int i = 10; i < N; i++)
    {
        int a;
        cin >> a;

        for (int j = 0; j < 9; j++)
        {
            number[j] = number[j + 1];
            count += is_sum(number[j], a);
        }
        number[9] = a;
    }

    cout << count;
}

int main()
{
    num_sum_max_distance_eff();
    return 0;
}
