#include<vector>
#include<iostream>
int main()
{
    std::vector<int> i_v; 

    std::vector<int> i_v2={1,2,3,4,5,6};
    std::vector<int> i_v1=i_v2;

    std::vector<int> i_v3(i_v2.begin(),i_v2.end());

    std::vector<int> i_v4(10); //分配空间，对这些元素进行初始化，构造函数是explicit的。

    
}