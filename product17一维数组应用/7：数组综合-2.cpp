#include "iostream"
using namespace std;
/*
 * 问题描述
数组a中的an个元素是按照从小到大的顺序排列，即下标较小的元素值不会大于下标较大的元素值。
数组b中的bn个元素也是按照从小到大的顺序排列。
现在要求综合地考虑数组a和数组b中的所有元素，按从小到大的顺序依次输出所有an+bn个元素值。
输入描述
一个正整数n，表示有n组案例。
每组案例中，先是两个正整数an和bn，分别表示数组a的元素个数和数组b的元素个数；（an<=1000000, bn<=1000000）
然后是an个从小到大排序过的整数，表示a数组各元素的值；
最后是bn个从小到大排序过的整数，表示b数组各元素的值。
输出描述
针对每组案例，输出an+bn个数字，表示c数组里各元素的值，每个数字之间有一个空格，最后一个数字后面不要有空格。
每组案例输出完都要换行。
样例输入
1
5 3
2 4 6 8 10
1 4 9
样例输出
1 2 4 4 6 8 9 10
提示说明
不要用到排序
 */
int main()
{
    int n;
    cin >> n;
    while (n--){
        int m,k; // m,k表示数组a和b的长度
        cin >> m >> k;
        int *a = new int[m];
        int *b = new int[k]; // 创建两个数组
        // 读取数组a的元素
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }

        // 读取数组b的元素
        for (int i = 0; i < k; ++i) {
            cin >> b[i];
        }

        // 初始化2个指针，分别指向a和b的起始位置
        int i = 0;
        int j = 0;
        bool first = true;
        // 当2个数组都还有元素时，进行合并操作
        while (i < m && j < k){
            int min1;
            if (a[i] < b[j]){
                min1 = a[i];
                i++;
            } else {
                min1 = b[j];
                j++;
            }
            if (! first) cout << " ";
            cout << min1;
            first = false;
            }

        // 只剩a
        while(i < m) {
            if (! first) cout << " ";
            cout << a[i];
            first = false;
            i++;
        }

        // 只剩b
        while(j < k) {
            if (! first) cout << " ";
            cout << b[j];
            first = false;
            j++;
        }
        cout << endl;
        delete []a;
        delete []b;
        }
    return 0;
    }