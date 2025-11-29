#include "iostream"
using namespace std;
/*
 * 问题描述
输出一堆数字中最大的正偶数，如果所有这些数字都不是正偶数，则输出NONE
输入描述
1个正整数n，表示测试案例的数量。
每组测试案例有一个正整数m，表示数字的个数，然后是m个整数。
输出描述
针对每组案例，输出这m个整数中最大的正偶数，如果所有这m个数字都不是正偶数，则输出NONE。每组案例输出后都要换行。
样例输入
2
4 0 1 2 3
3 1 3 5
样例输出
2
NONE
 */

int main()
{
    int n;
    cin >> n;
    while (n--){
        int m;
        cin >> m;
        int x;
        int max = -1;
        for (int i = 0; i < m; ++i) {
            cin >> x;
            if (x > 0 && x % 2 == 0){
                if (x > max){
                    max = x;
                }
            }
        }
        if (max == -1){
            cout << "NONE" << endl;
        }else{
            cout << max << endl;
        }
    }
    return 0;
}