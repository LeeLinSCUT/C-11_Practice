#include<list>
#include<forward_list>
#include<iostream>
int func_list(std::list<int> l_i)
{
    //删除偶数元素，复制每个奇数元素
    for(std::list<int>::iterator iter = l_i.begin();iter != l_i.end();)
    {
        if(*iter % 2 ==0)
        {
            iter = l_i.erase(iter);
        }
        else
        {
            iter = l_i.insert(iter,*iter);
            iter ++; iter++;
        }        
    }
    // for(auto mem: l_i)
    // {
    //     std::cout<<mem<<std::endl;
    // }
}

int func_forwardlist(std::forward_list<int> fw_l)
{
     std::forward_list<int>::iterator prev = fw_l.before_begin();
     std::forward_list<int>::iterator iter = fw_l.begin();
     while(iter!=fw_l.end())
     {
        if(*iter%2 ==0)
        {
            iter = fw_l.erase_after(prev);
        }
        else
        {
             iter = fw_l.insert_after(prev,*iter);
             iter++;
             prev = iter++; //总是要让在前面的迭代器在前面
        }
     }
    for(auto mem: fw_l)
    {
        std::cout<<mem<<std::endl;
    }
}
int main()
{
    std::list<int> l_i = {0,1,2,3,4,5,6,7,8,9};
    std::forward_list<int> fwl_i = {0,1,2,3,4,5,6,7,8,9};
 //   func_list(l_i);
    func_forwardlist(fwl_i);
}