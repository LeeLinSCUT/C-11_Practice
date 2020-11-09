#include<iostream>
int func(int val)
{
    static int z = 5; //这个变量虽然具有静态的存储类型，但是却只有局部的“视野”
    return z;
}
int main()
{
    int val = 5;
    std::cout<<func(5)<<std::endl;
    std::cout<<z<<std::endl;
}