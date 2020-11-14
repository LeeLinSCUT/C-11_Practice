#include<string>
#include<iostream>
#include<deque>
#include<list>
int main()
{
    std::list<int> i_l= {1,2,3,4,5,6,7,8,9};
    std::deque<int> deq_odd; 
    std::deque<int> deq_even;
    for(auto mem:i_l)
    {
        mem&1 == 0? deq_even.push_back(mem):deq_odd.push_back(mem);  //使用数据位最低位和1做与操作。
    }
    for(auto mem:deq_odd)
    {
        std::cout<<mem<<std::endl;
    }
    for(auto mem:deq_even)
    {
        std::cout<<mem<<std::endl;
    }
}