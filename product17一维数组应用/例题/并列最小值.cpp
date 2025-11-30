#include "iostream"
using namespace std;
/*
 * 输入一个正整数 n，然后输入 n 个整数存放在长度为 n 的数组 a 中，输出其中的最
小值，换行，再输出最小值对应的数组下标。（并列最小的时候依次输出所有并列最小元素
的下标，每两个下标之间有一个空格）
 */
int main(){
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int min = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    cout << min << endl;
    bool first = true;
    for (int i = 0; i < n; ++i) {
        if (a[i] == min)
        {
            if (first){
                first = false;
            } else {
                cout << " ";
            }
            cout << i;
        }
    }
    delete []a;
    return 0;
}