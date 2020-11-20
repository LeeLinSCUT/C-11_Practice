#include<vector> 
#include<iostream>
#include<algorithm>
#include<list>
#include<iterator>
int main()
{
    std::vector<int> i_v = {1,2,3,4,4,4,4,5,6,8,8};
    std::list<int> i_l;
    auto iter = std::unique_copy(i_v.begin(),i_v.end(),std::back_inserter(i_l)); //unique要求在原容器中
    //相邻存放，因此vector可以先排序。
    for(auto mem:i_l)
    {
        std::cout<<mem<<std::endl;
    }
}