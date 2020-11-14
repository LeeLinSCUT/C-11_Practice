#include<vector>
#include<iostream>
bool find(std::vector<int>::iterator begin,std::vector<int>::iterator end,int target)
{//迭代器是容器类作用域里的一类
    while(begin!=end)
    {
        if(*begin==target)
        {
            return true;
        }
        else
        {
            begin++;
        }
    }
    return false;
}
int main()
{
    std::vector<int> i = {1,2,3,4,5,6,7,8,9,10};
    std::cout<<find(i.begin(),i.end(),111)<<std::endl;
}