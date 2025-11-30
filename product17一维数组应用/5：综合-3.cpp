#include "iostream"
using namespace std;
/*
 * 问题描述
统计m以内（小于等于m）同时满足以下三个条件的数字的总个数：1、是正整数；2、是完全平方数；3、各位数字上没有相同的数字。
输入描述
一个正整数n，表示有n组案例。
每组案例由一个正整数m构成（m可能有点大）。
输出描述
针对每组案例，输出m以内（小于等于m）同时满足以下三个条件的数字的总个数：1、是正整数；2、是完全平方数；3、各位数字上没有相同的数字（例如171，由于有两个1，所以不满足条件）。
每组案例输出完都要换行。
样例输入
1
100
样例输出
9
提示说明
1 4 9 16 25 36 49 64 81都满足，100有2个重复的数字0，故不算。
 */
bool check(long long x){
    bool used[10];  // 创建一个长度为10的布尔数组，用于记录数字的每一位是否被使用过
    // 初始化
    for (int i = 0; i < 10; ++i) {
        used[i] = false;  // 这个循环的意思是：数字0-9的每一位都没有被使用过
     }

    // 逐位检查
    while (x > 0) {
        int d = x % 10; // 获取最后一位
        if (used[d]) {
            return false; // 数字有重复的，返回false
        }
        used[d] = true; // 标记数字的每一位已经使用过
        x /= 10;
    }
    return true; // 这个数x的各位数字都不重复，符合条件
}
int main()
{
    int n;
    cin >> n;
    while (n--){
       long long m;
       cin >> m;
       long long cnt = 0;
       // 遍历1到m，判断每个数字是否满足条件
        for (long long i = 1; i * i <=  m ; ++i) {
            long long x = i * i; // 计算平方,正整数
            if (check(x)) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}