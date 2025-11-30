#include "iostream"
using namespace std;
/*
 *
问题描述
编写两个函数，分别求两个正整数的最大公约数和最小公倍数。在主函数输入两个正整数，分别输出它们的最大公约数和最小公倍数。

输入描述
一个正整数n，表示n组案例。
每组案例由两个正整数a和b构成。
输出描述
针对每组案例，输出a和b的最大公约数和最小公倍数，用空格相隔。
每组案例输出完都要换行。
样例输入
2
2 3
8 10
样例输出
1 6
2 40
提示说明
辗转相除法
 */

// 求最大公约数
int gcd(int a, int b){
    while(b != 0){
        int  temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// 求最小公倍数
int lcm(int a, int b){
    return  a * b / gcd(a, b);
}

int main()
{
    int n;
    cin >> n;
    while (n --){
        int a, b;
        cin >> a >> b;
        cout << gcd(a, b) << " " << lcm(a, b) << endl;
    }
    return 0;
}