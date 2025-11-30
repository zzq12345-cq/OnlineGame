#include "iostream"
using namespace std;
/*
 * 问题描述
输入 m 个正整数，输出其中出现次数最多的数字（可能有多个数字的出现次数并列第一多）
输入描述
第一行是一个正整数 n 表示测试用例的数量。
每组案例中，首先是一个正整数 m，然后是 m 个正整数，这些数字均不大于 1000。
输出描述
针对每组案例，输出这 m 个正整数中，出现次数最多的数字。
如果有多个数字出现次数并列最多，则按照从小到大的顺序输出这些数字，每个数字之间用一个空格间隔，最后一个数字之后没有空格。
每组案例输出完都要换行。
样例输入
1
5 1 2 4 1 4
样例输出
1 4
 */

int main()
{
    int n;
    cin >> n;
    while (n--){
        int m;
        cin >> m;
       int cnt[1001] = {0};

        // 输入
        for (int i = 0; i < m; ++i) {
            int x;
            cin >> x;
            cnt[x]++;
        }

       // 找出最大次数
       int maxCnt = 0;
        for (int i = 0; i <= 1000 ; ++i) {
            if (cnt[i] > maxCnt) {
                maxCnt = cnt[i];
            }
        }

        // 按从小到大输出所有“出现次数 == maxCnt”的数字
        bool first = true;
        for (int i = 0; i <= 1000 ; ++i) {
            if (cnt[i] == maxCnt){
                if (first){
                    first = false;
                } else {
                    cout << " ";
                }
                cout << i;
            }
        }
        cout << endl;
    }
    return 0;
}