#include "iostream"
using namespace std;
/*
 * 问题描述
编写递归函数将输入的整数逐个数字反序输出。如输入12345，输出5 4 3 2 1，每个数字之间用空格隔开。
输入描述
一个正整数 n，表示 n 组案例。
每组案例由一个正整数 m 构成。
输出描述
针对每组案例，将输入的整数逐个数字反序输出，每个数字之间用空格隔开，最后一位数字后面没有空格。
每组案例输出完都要换行。
样例输入
1
12345
样例输出
5 4 3 2 1
 */
void f(int m){
    if (m < 10){
        cout << m;
    } else {
        cout << m % 10 << " ";
        f(m / 10);
    }
}

int main()
{
    int n;
    cin >> n;
    while (n--){
        int m;
        cin >> m;
        f(m);
        cout << endl;
    }
    return 0;
}