#include<iostream>
#include<vector>
int print(std::vector<int> i_v,int index)
{
    if(index<i_v.size())
    {
        std::cout<<i_v[index++];
        print(i_v,index);
    }
}
int main()
{
    std::vector<int> i_v = {1,2,3,4,5,6,7};
    std::cout<<i_v.size()<<std::endl;
    print(i_v,0);
}