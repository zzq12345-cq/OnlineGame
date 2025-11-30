#include "iostream"
using namespace std;
/*
 * 问题描述
把两个整数的末两位（个位和十位）进行交换。
输入描述
只有一组案例。案例由两个正整数a和b组成。（a>=100, b>=100）
输出描述
把a的末两位交换给b，把b的末两位交换给a。然后输出a和b，中间用空格相间隔，不要换行。
样例输入
1234 5678
样例输出
1278 5634
 */
int main()
{
    int a,b;
    cin >> a >> b;
    int a1 = a % 100;
    int b1 = b % 100;
    a = a / 100 * 100 + b1;
    b = b /100 * 100 + a1;
    cout << a << " " << b;
    return 0;
}
