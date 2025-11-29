#include "iostream"
using namespace std;
/*
 * 问题描述
把一些整数存放在数组中，然后再输出出来
输入描述
只有一组案例，有5个整数。
输出描述
把这5个整数先存到一个数组里，然后再输出出来，每个整数输出后都要换行。
样例输入
1 2 3 4 5
样例输出
1
2
3
4
5
 */
int main(){
    int a[5];
    for (int i = 0; i < 5; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < 5; ++i) {
        cout << a[i] << endl;
    }
    return 0;
}