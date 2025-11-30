#include "iostream"
using namespace std;
/*
 *
问题描述
有一些整数，求其中正数的和以及正数的个数。
输入描述
一个正整数n，表示案例的数量。
每组案例先是一个正整数m，表示整数的数量，然后m个整数。
输出描述
针对每组案例，输出两个整数，分别是其中正数的和，以及正数的个数。两个整数之间以空格相隔。
每组案例输出完都要换行。
样例输入
2
3 -1 -2 -3
5 1 2 -1 -2 0
样例输出
0 0
3 2
 */

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m, sum = 0, count = 0;
        cin >> m;
        while(m--) {
            int a;
            cin >> a;
                if (a > 0){
                    sum += a;
                count++;
            }
        }
        cout << sum << " " << count << endl;
    }
    return 0;
}