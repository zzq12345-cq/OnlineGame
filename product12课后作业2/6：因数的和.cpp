#include "iostream"
using namespace std;
/*
 * 问题描述
在数学上，如果整数a除以整数b(b≠0) 的商正好是整数而没有余数，那么称b是a的因数。
计算一个正整数的所有正因数之和。
输入描述
只有一组案例。
一个正整数a。（a<=10000）
输出描述
一个正整数，表示a所有正因数之和。
不要换行。
样例输入
6
样例输出
12
提示说明
6的因数有1、2、3、6，而1+2+3+6=12。
 */
int main()
{
    int a;
    cin >> a;
    int sum = 0;
    for(int i = 1; i <= a; i++){
        if(a % i == 0){
            sum += i;
        }
    }
    cout << sum;
    return 0;
}

