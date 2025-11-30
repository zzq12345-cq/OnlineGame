#include "iostream"
using namespace std;
/*
 * 输入一个正整数 n（保证不大于 26），输出 n 行 n 列由大写字母组成的阵列，最后一行输出后也要换行。自
行根据样例分析规律。
样例 1 输入：5
样例 1 输出：
ABCDE
BCDEA
CDEAB
DEABC
EABCD
样例 2 输入：3
样例 2 输出：
ABC
BCA
CAB
 */
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i + j < n) cout << char('A' + i + j);
            else cout << char ('A' + i + j - n );
        }
        cout << endl;
    }
    return 0;
}