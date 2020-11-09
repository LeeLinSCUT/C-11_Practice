#include<iostream>
int func()
{
    static int call_num = 0;
    return call_num++;    
}   
int main()
{
    // std::cout<<func()<<func()<<func()<<func()<<std::endl;   输出的是3210？？？ 应该是先调用了所有的func的返回值
    //调用顺序还是从后面往前的
    // std::cout<<func()<<std::endl; 
    for(int i = 0; i<5 ; i++)
    {
        std::cout<<func()<<std::endl;
    }
}