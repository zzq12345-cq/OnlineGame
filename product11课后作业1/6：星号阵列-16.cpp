#include "iostream"
using namespace std;
/*
 * 问题描述
由星号组成正方形，通过上下首尾相连，组成一个更大的图形。
例如当正方形的边长为4，个数为3时，组成的图形如下：

输入描述
只有一组案例，由两个正整数a和b组成，表示正方形的边长是a（a>=3），个数是b。
输出描述
输出由b个边长为a的正方形星号阵列组成的图形。最后一行星号后面也需要换行。
样例输入
4 3
样例输出

 */
int main()
{
    int a,b;
    cin >> a >> b;
    // 计算一共需要打印几行
    int total_rows = a + (b - 1) * (a - 1);

    // 循环打印每一行
    for (int r = 1; r <= total_rows ; ++r) {

        // 判断当前是全星号行还是空行
        if (r % (a - 1) == 1){
            for (int i = 0; i < a; ++i) {
                cout << "*";
            }
        } else {
            // 打印空心行
            cout << "*"; // 打印左边的星

            // 打印中间的2个星
            for (int i = 0; i < a - 2; ++i) {
                cout << " ";
            }

            cout << "*"; // 打印右边的星
        }
        cout << endl;
    }
    return 0;
}