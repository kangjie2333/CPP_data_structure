/*
 * @Descripttion: 
 * @version: 
 * @Author: KJ
 * @Date: 2022-04-07 14:12:23
 * @LastEditors: KJ
 * @LastEditTime: 2022-04-07 14:46:23
 */
#include <array>
#include "ArrayDemo.h"
// 静态数组，大小固定，，无法动态扩展或收缩。大小必须是常量
void ArrayDemo(){
    cout << "array operate..." << endl;
    // 创建静态数组
    array<int, 5> arr1; // 各个元素值不确定
    for(auto num : arr1){
        cout << num << endl;
    }
    array<int, 10> arr2 {};
    array<int, 10> arr3 {10};
    array<int, 10> arr4 {1,2,3,4,5,2};
    cout << "array size is:" << arr4.size() << endl;
    cout << "array max_size is:" << arr4.max_size() << endl;
    if(arr4.empty()){
        cout << "arr4 no data" <<endl;
    }
    cout << arr4.at(5) << endl;
    cout << arr4.front() << endl;
    cout << arr4.back() << endl;
    cout << *arr4.data() << endl;
    arr4.fill(5);
    arr2.swap(arr4);
    cout << get<3>(arr2) << endl;
    if(!arr2.empty()){
        for(auto val = arr2.begin(); val < arr2.end(); val++){
            cout << *val << endl;
        }
    }
}