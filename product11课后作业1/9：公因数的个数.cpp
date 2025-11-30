#include "iostream"
using namespace std;
/*
 * 问题描述
对于正整数a和b，如果a除以b的余数为0，则称b是a的因数。
如果z是x的因数，且z是y的因数，则称z是x和y的公因数。
已知两个正整数p、q，求p和q的公因数的个数。
输入描述
一个正整数n，表示n组案例。（n<=10）
每组案例由两个正整数p和q组成。（p<=100000000, q<=100000000）
输出描述
针对每组案例，输出一个整数，表示p和q的公因数的个数。
每组案例输出完都要换行。
样例输入
2
12 18
9999 10000
样例输出
4
1
提示说明
12和18的公因数有1、2、3、6这四个
9999和10000的公因数只有1这一个
 */
bool isPrime(int a){
    for (int i = 0; i < a; ++i) {
        if (a % i == 0) return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        
    }
}