/*
 * @Descripttion:
 * @version:
 * @Author: KJ
 * @Date: 2022-04-07 16:21:02
 * @LastEditors: KJ
 * @LastEditTime: 2022-04-07 16:28:02
 */
#include <queue>
#include "PriorityQueueDemo.h"

void PriorityQueueDemo()
{
    priority_queue<int> p; // 变量声明.
    p.push(10);            // 插入 10 到队列, top=10
    p.push(30);            // 插入 30 到队列, top=30
    p.push(20);            // 插入 20 到队列, top=20
    cout << "可用元素的数量 到 'p' :" << p.size() << endl;
    while (!p.empty())
    {
        std::cout << p.top() << std::endl;
        p.pop();
    }
}