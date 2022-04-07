/*
 * @Descripttion: 
 * @version: 
 * @Author: KJ
 * @Date: 2022-04-07 16:00:13
 * @LastEditors: KJ
 * @LastEditTime: 2022-04-07 16:07:20
 */
#include <list>
#include "ListDemo.h"

void ListDemo(){
    list<int> lis1{1,2,3,4};
    list<int> lis2 = {5,6,7,8};
    lis2.emplace(lis2.end(),9);
    lis1.merge(lis2);
    lis1.push_back(10);
    cout << endl;
}