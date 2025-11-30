#include "iostream"
using namespace std;
/*
 *
问题描述
有一组有规律的数字：2、3、5、7、10、15、22…。这组数字的前三项是2、3、5，从第四项开始，每个数字都是前1项数字加上前3项数字的和。
输出数列的第n项。
输入描述
一个正整数n。（n<=20）
输出描述
一个整数，表示数列第n项。不要换行。
样例输入
4
样例输出
7
 */
int main(){
    int n;
    cin >> n;
    int *a = new int [n];
    a[0] = 2;
    a[1] = 3;
    a[2] = 5;
    for (int i = 3; i < n; ++i) {
        a[i] = (a[i-1] + a[i-3]) % (int) (1e+8+7);
    }
    cout << a[n-1];
    delete []a;
    return 0;
}