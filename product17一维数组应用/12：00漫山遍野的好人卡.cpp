#include "iostream"
using namespace std;
/*
 * 问题描述
00手上有非常多张（m张）好人卡，每天发1~3张，发完为止，问有多少种发送方法。注意：第一天发1张第二天发2张和第一天发2张第二天发1张，是两种不同的发送方法。
输入描述
第1行是一个正整数n，表示测试案例的数量。
从第2行到第n+1行，每行有1个正整数m（m<=50000000）。
输出描述
针对每组测试案例，计算这m张好人卡发送方法的总数，因为这个数字可能非常大，所以只要输出这个数字对100000007取模的结果。
每组案例输出完后都要换行。
样例输入
2
3
100
样例输出
4
99298679
 */

int main()
{
    int n;
    cin >> n;
    while (n--){
       long long m;
        cin >> m;
        if (m == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (m == 2){
            cout << 2 << endl;
            continue;
        }
        int a = 1, b = 2, c = 4;
        for (int i = 3; i < m; ++i) {
            int t = a;
            a = b;
            b = c;
            c = (t + b + a) % (int ) (1e+8+7);
        }
        cout << c << endl;
    }
    return 0;
}
