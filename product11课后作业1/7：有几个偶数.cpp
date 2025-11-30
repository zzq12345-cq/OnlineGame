#include "iostream"
using namespace std;
/*
 * 问题描述
计算 a 到 b 之间（包含 a 和 b）有几个偶数。
输入描述
一个正整数 n，表示测试案例的数量。
每组案例由两个正整数 a 和 b 构成（1 ≤ a ≤ b ≤ 1000000000）
输出描述
针对每组案例，输出一个整数，表示 a 到 b 之间（包含 a 和 b）偶数的个数。
每组案例输出完都要换行。
样例输入
1
4 8
样例输出
3
提示说明
注意时间限制

 */
int main()
{
    int n;
    cin >> n;
    // 使用数学解法：偶数个数 = (从1到b的偶数个数) - (从1到 a-1 的偶数个数)
    while (n--)
    {
        long long a,b;
        cin >> a >> b;

        // 偶数个数 = (从1到b的偶数个数) - (从1到 a-1 的偶数个数)
        // 计算从1到b有多少个偶数
        long long count = b / 2;
        // 计算从1到 a-1 的偶数个数
        long long count1 = (a - 1) / 2;
        // 偶数个数 = (从1到b的偶数个数) - (从1到 a-1 的偶数个数)
        cout << count - count1 << endl;
    }
    return 0;
}