#include<iostream>
#include<list>
#include<vector>

int main()
{
    int ia[]={0,1,1,2,3,5,8,13,21,55,89};
    std::vector<int> i_v(ia,ia+11);
    std::list<int> i_l(ia,ia+11);
    for(std::vector<int>::iterator v_b = i_v.begin(); v_b != i_v.end(); )
    {
        (*v_b)% 2==0 ? v_b = i_v.erase(v_b):v_b++;
    }
    for(std::list<int>::iterator l_b = i_l.begin(); l_b != i_l.end(); )
    {
        (*l_b)% 2==1 ? l_b = i_l.erase(l_b):l_b++;
    }
    
    for(auto mem: i_v)
    {
        std::cout<<mem<<std::endl;
    }
    for(auto mem:i_l)
    {
        std::cout<<mem<<std::endl;
    }
}