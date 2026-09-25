#include <iostream>
using namespace std;

int main() {
    // 定义待排序的数组
    int arr[] = { 8, 3, 6, 2, 7, 1 };
    int n = sizeof(arr) / sizeof(arr[0]); // 获取数组长度

    // 冒泡排序核心逻辑
    for (int i = 0; i < n - 1; i++) {          // 外层循环：控制比较的轮数
        for (int j = 0; j < n - 1 - i; j++) {  // 内层循环：控制每轮比较的次数
            if (arr[j] > arr[j + 1]) {         // 如果前一个元素大于后一个元素
                // 交换两个元素的位置
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 输出排序后的结果
    cout << "从小到大排序后的结果为: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}