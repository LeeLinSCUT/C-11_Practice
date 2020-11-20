#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<list>

int main()
{
    std::cout<<"Please input numbers:"<<std::endl;
    int mem;
    std::vector<int> i_v;
    while(std::cin>>mem)
    {
        i_v.push_back(mem);
    }
    std::cin.clear();
    int val;
    std::cout<<"Please input the val:"<<std::endl;
    std::cin>>val;
    std::cout<<"times:"<<std::count(i_v.begin(),i_v.end(),val)<<std::endl;
}