#include "iostream"
using namespace std;
/*
 * 问题描述
输出1-1/3+1/5-1/7+1/9...的结果，和正确答案相差不超过0.001即可
输入描述
无
输出描述
一个浮点数，表示1-1/3+1/5-1/7+1/9...的结果。不要换行。
样例输入

样例输出
自己算
 */
int main(){
    double sum = 0;
    double den = 1; // 分母
    int sign = 1; // 符号

    while (1.0 / den > 0.001)
    {
        sum += sign * 1.0 / den;

        // 符号变换
        den += 2; // 分母变成下一个奇数
        sign = -sign; // 符号变换
    }
    cout << sum;
    return 0;
}