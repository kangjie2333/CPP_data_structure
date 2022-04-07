/*
 * @Descripttion: 
 * @version: 
 * @Author: KJ
 * @Date: 2022-04-07 15:00:12
 * @LastEditors: KJ
 * @LastEditTime: 2022-04-07 15:23:22
 */
#include<deque>
#include"DequeDemo.h"
#include <array>
void DequeDemo(){
    // 创建一个空deque
    deque<int> deq1;
    deque<int> deq2(10); // 默认为0；
    deque<int> deq3(10, 1); 
    // 拷贝赋值
    deque<int> deq4(deq2);
    // 区间赋值
    int arr[] = {1,2,3,4,5};
    deque<int> deq5(arr, arr+5);
    array<int, 5>arr1{6,7,8,9,10};
    deque<int> deq6(arr1.begin() + 2, arr1.end());
    deq5.resize(3);
    deq5.assign(2,2); // 两个数全为2
    deq5.insert(deq5.begin() + 1,1);
    cout << endl;
}