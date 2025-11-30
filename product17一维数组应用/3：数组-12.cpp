#include "iostream"
using namespace std;
/*
 *
问题描述
输入m个数字，输出其中出现次数最多的数字（保证只会有一个数字出现次数最多，不存在并列第一多）
输入描述
一个正整数n，表示n组案例。
每组案例中，首先是一个正整数m，然后是m个整数。
输出描述
针对每组案例，输出这m个整数中，出现次数最多的数字（保证只有一个数字）。
每组案例输出完都要换行。
样例输入
1
5 1 2 3 1 4
样例输出
1
 */
int main()
{
    int n,b;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        int *a = new int [m];
        int *cnt = new int [m]; // 记录每个数字出现的次数

        // 初始化
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
            cnt[i] = 0;
        }

        // 计算每个数字出现的次数
        // 第一层循环：我要统计谁的次数
        for (int i = 0; i < m; ++i) {
            // 第二层循环：在整个数组里数一数这个“代表”出现了多少次。
            for (int j = 0; j < m; ++j) {
                if (a[i] == a[j]) {
                    cnt[i]++;   // 统计次数
                }
            }
        }

        int maxCnt = cnt[0]; // 最大次数初始化
        int pos = 0; // 最大次数对应的位置初始化
        for (int i = 1; i < m; ++i) {
            if (cnt[i] > maxCnt){
                maxCnt = cnt[i];
                pos = i;
            }
        }
        cout << a[pos] << endl; // 输出最大次数对应的数字
        delete [] a;
        delete [] cnt;
    }
    return 0;
}
