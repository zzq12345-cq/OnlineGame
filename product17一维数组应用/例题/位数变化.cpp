#include "iostream"
using namespace std;
/*
 * 输入一个正整数 a，然后逐位调整 a 的值。如果 a 的某位数为偶数，则该位数保持
不变；如果 a 的某位数是奇数，则该位数减一，但当此位是最高位且为 1 时不要减。输出变
化后的 a 值。例如当 a 为 12701 时，应该把 a 改为 12600。
 */
int main(){
    int a, len = 0; // 保存a的位数
    int b[10] = {0};
    cin >> a;
    while (a > 0)
    {
        b[len] = a % 10; // 得到最低位a
        a = a / 10; // 去掉最低位
        len++;
    }
    // 依次记录所有位的值
    for (int i = len - 1; i >= 0 ; i--) {
        if (b[i] % 2 == 0 || i == len - 1 && b[i] == 1)
        {
            continue;
        }
        b[i]--;
    }
    // 输出结果
    a = 0;
    for (int i = len - 1; i >= 0 ; i--) {
        a = a * 10 + b[i];
    }
    cout << a << endl;
    return 0;
}