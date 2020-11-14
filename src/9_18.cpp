#include<string>
#include<iostream>
#include<deque>
int main()
{
    std::deque<std::string> deq;
    std::string str;
    while(std::cin>>str)
    {
    //    deq.emplace_front(str);  //先进后出
    //    deq.emplace_back(str); 
        deq.emplace(deq.end(),str);
    }
    for(auto mem: deq)
    {
        std::cout<<mem<<std::endl; 
    }
}