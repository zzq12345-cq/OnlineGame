#include "iostream"
using namespace std;
/*
 * 输入一个正整数 n，然后输入 n 个范围从 1 到 10 之间的整数（包含 1 和 10），依次
输出每个数字出现的次数。
分析：定义一个长度为 11 的数组 a，a[1]存放 1 出现的次数，a[2]存放 2 出现的次数，…，
a[10]存放 10 出现的次数。
 */

int main()
{
    int n,b,a[11]={0};
    cin >> n;
    for (int i = 0; i <= n; ++i) {
        cin >> b;
        a[b]++;
    }
    for (int i = 1; i <= 10; ++i) {
        cout << a[i] << endl;
    }
    return 0;
}
