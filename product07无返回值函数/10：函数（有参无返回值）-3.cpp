#include "iostream"
using namespace std;
/*
 *
问题描述
定义一个函数f，有两个int类型的参数a和b，用于输出a行b列星号。在主函数中输入两个整数x和y，然后调用f函数输出x行y列星号。
输入描述
两个整数x和y
输出描述
x行y列星号，最后一行星号后面也要换行
样例输入
2  4
样例输出
****
****
 */

void print(int a,int b){
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cout << "*" ;
        }
        cout << endl;
    }
}

int main(){
    int x,y;
    cin >> x >> y;
    print(x,y);
    return 0;
}


