#include<iostream>
#include<vector>

int sum_all(std::initializer_list<int> il)
{
    int sum = 0;
    for(auto num : il) //因为initializer_list里面都是常量值，所以推测到的auto应该是const int
    {
        sum +=num;
    }
    return sum;
}
int main()
{
    std::cout<<sum_all({1,2,3,4,5})<<std::endl;
}