#include "iostream"
using namespace std;
/*
 * 问题描述
把一些整数存放在数组中，然后输出其中奇数的总和
输入描述
只有一组案例，有5个整数。
输出描述
把这5个整数先存到一个数组里，然后输出其中奇数的总和。不要换行。
样例输入
1 2 3 4 5
样例输出
9
 */
#include "iostream"
using namespace std;
/*
 * 问题描述
把一些整数存放在数组中，然后输出其中奇数的总和
输入描述
只有一组案例，有5个整数。
输出描述
把这5个整数先存到一个数组里，然后输出其中奇数的总和。不要换行。
样例输入
1 2 3 4 5
样例输出
9
 */

int main()
{
    int a[5];
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
        if (a[i] % 2 != 0) sum += a[i];
    }
    cout << sum;
    return 0;
}
int main()
{
    int a[5];
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
        if (a[i] % 2 != 0) sum += a[i];
    }
    cout << sum;
    return 0;
}