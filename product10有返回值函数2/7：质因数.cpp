#include "iostream"
using namespace std;
/*
 * 问题描述
定义：一个数字a的质因数是指能整除a而且是质数的数字，注意1并不是质数。给定一个整数，如果这个数字的质因数的个数为1，则输出Yes，否则输出No。
输入描述
一个正整数n，表示测试案例的数量。（n<=20）
然后是n组案例，每组案例有一个正整数m。（m<=10000）
输出描述
针对每组案例，如果m的质因数的个数为1，则输出Yes，否则输出No。
每组案例输出完要换行。
样例输入
3
6
27
5
样例输出
No
Yes
Yes
提示说明
6的质因数有2和3，
27的质因数只有3，
5的质因数只有5。
 */
int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int n;
    cin >> n;
    while (n--){
     int p, q;
     cin >> p >> q;
     int g = gcd(p, q);
     int count = 0;
        for (int i = 1; i * i<= g ; ++i) {
            if (g % i == 0) {
                if (i * i == g){
                    count += 1;
                } else {
                    count += 2;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
