/*
 * @Descripttion: 
 * @version: 
 * @Author: KJ
 * @Date: 2022-04-06 22:11:40
 * @LastEditors: KJ
 * @LastEditTime: 2022-04-06 22:22:52
 */
#include "VectorDemo.h"
#include <vector>
#include <algorithm>

// 降序
bool Comp(const int& a, const int& b){
    return a > b;
}

// vector向量使用
void VectorDemo(){
    // 创建vector
    vector<int> vec1; // 创建一个空的vector
    vector<int> vec2(10); // 创建一个10元素的vector,初始为0
    vector<int> vec3(10, 1); // 创建一个10元素vector，初始为1
    vector<int> vec4(vec2); // 复制构造函数
    vector<int> vec5(vec3.begin(), vec3.begin() + 5); // 复制区间内数据进行构造
    // 增加元素
    vec5.push_back(2); // 末尾增加一个2
    // vector<int>::iterator it = vec5.begin();
    vec5.insert(vec5.begin(), 5); // 迭代器指向元素前增加一个5；
    vec5.insert(vec5.begin() + 1, 2, 2); // 迭代器指向元素前增加两个2；
    vec5.insert(vec5.begin(), vec3.begin(), vec3.begin() + 3); // 迭代器指向元素前增加另一个vec的区间内的数值；
    // 删除元素
    vec5.erase(vec5.begin() + 3); // 删除迭代器指向的元素
    vec5.erase(vec5.begin(), vec5.begin() + 3); // 删除区间内的元素
    vec5.pop_back(); // 删除末尾元素
    vec5.clear(); // 清空元素
    // 遍历元素
    for(int i = 0; i < 10; ++i){
        vec2[i] = i;
    }
    for(int i = 0; i < 10; ++i){
        cout << vec2.at(i) << endl; // 返回pos处的元素引用
    }
    cout << vec2.front() << endl; // 返回首元素
    cout << vec2.back() << endl; // 返回尾元素
    cout << *vec2.begin() << endl;
    cout << *vec2.end() << endl; // 指向最后一个元素的下一个位置的值
    cout << *vec2.rbegin() << endl;
    cout << *vec2.rend() << endl; // 反向迭代器，指向第一个元素之前的值
    // 判断
    cout << vec5.empty() << endl; // 判断vec是否为空
    // vec大小
    cout << vec2.size() << endl; // 元素个数
    cout << vec2.capacity() << endl; // 容量
    cout << vec2.max_size() << endl; // 返回最大可允许的vec元素数量最值
    vec2.push_back(5);
    cout << vec2.size() << endl; // 元素个数
    cout << vec2.capacity() << endl; // 容量
    cout << vec2.max_size() << endl; // 返回最大可允许的vec元素数量最值
    // 交换
    swap(vec2, vec5); // 交换两个同类型向量
    // 设值
    vec5.assign(2, 1); // 设置vec有两个数，都为1
    vec2.assign(vec3.begin(), vec3.begin()+5);
    // 翻转
    vector<int> vec6(10);
    for(int i = 0; i < 10; ++i){
        vec6[i] = i;
    }
    reverse(vec6.begin(), vec6.end());
    // 排序
    sort(vec6.begin(), vec6.end());
    sort(vec6.begin(), vec6.end(),Comp);
}