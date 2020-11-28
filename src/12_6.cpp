#include<memory>
#include<iostream>
#include<vector>

std::vector<int>* func()
{
    return (new std::vector<int>); //不可以带指针名字？？因为是传值操作，之后这个值也是初始化给一个临时参数的，所有指针名字也没什么用。
}
void fun2(std::vector<int>* i_v)
{
    int i = 0;
    while(std::cin>>i)
    {
        (*i_v).push_back(i);
    }
    std::cin.clear();
}

void fun3(std::vector<int>* i_v)
{
    for(auto mem: (*i_v))
    {
        std::cout<<mem<<std::endl;
    }
    delete i_v;
    i_v = nullptr; //释放了内存空间的指针赋予null
} 
int main()
{
    std::vector<int> *i_vp = func();
    fun2(i_vp);
    fun3(i_vp);
} 