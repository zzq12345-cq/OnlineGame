#include "iostream"
using namespace std;
/*
 * 问题描述
斐波那契数列是这样一组有规律的数字：1、1、2、3、5、8、13、21、34、…。这组数字的前两项都是1，从第三项开始，每个数字都是前两个数字的和。
把数列的前n项输出出来。
输入描述
一个正整数n（n>=2）
输出描述
n个整数，表示数列前n项。要求每两个数字之间有一个空格，最后那个数字后面不要有空格，直接换行。
样例输入
4
样例输出
1 1 2 3
 */
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    // 斐波那契数列前2项都是1
    a[0] = a[1] = 1;
    for (int i = 2; i < n ; ++i) {
        a [i] = (a[i-1] + a[i-2]) % (int)(1e+8+7);
    }

    for (int i = 0; i < n; ++i) {
        if (i == 0){
            cout << a[i];
        }
        else {
            cout << " " << a[i];
        }
    }
    delete[]a;
    return 0;
}