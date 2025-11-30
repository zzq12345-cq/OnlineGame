#include "iostream"
using namespace std;
/*
 * 输入一个正整数 n，然后输入 n 个整数存放在长度为 n 的数组 a 中，求其中的最小
值以及最小值对应的数组下标。（假设最小值只有一个，没有并列最小的情况）
分析：用 min 存放当前的最小值，minPos 存放最小值对应的数组下标
 */

int main()
{
    int n;
    cin >> n;
    int *a = new int [n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int min = a[0], minPos = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] < min) {
            min = a[i];
            minPos = i;
        }
    }
    cout << min << " " << minPos << endl;
    delete[]a;
    return 0;
}