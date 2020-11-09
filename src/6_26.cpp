#include<iostream>
#include<vector>

int sum_all(std::initializer_list<int> il)
{
    int sum = 0;
    for(auto num : il)
    {
        sum +=num;
    }
    return sum;
}
int main()
{
    std::cout<<sum_all({1,2,3,4,5})<<std::endl;
}