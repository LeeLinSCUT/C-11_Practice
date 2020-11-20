#include<map>
#include<string>
#include<iostream>
#include<vector>
void add_name(std::multimap<std::string,std::string> &,const std::string&,const std::string&);
int main()
{
    std::string l_n;
    std::string f_n;
    std::multimap<std::string,std::string> fml_chd;
    std::cout<<"Please input last name"<<std::endl;
    while(std::cin>>l_n)
    {
        std::cout<<"Please input chd's names"<<std::endl;
        std::cin>>f_n;
        add_name(fml_chd,f_n,l_n);
        std::cout<<"Please input last name"<<std::endl;
    }
    for(auto mem:fml_chd)
    {
        std::cout<<mem.first<<" "<<mem.second<<std::endl;
    }
}
void add_name(std::multimap<std::string,std::string> &fml,const std::string& f_n,const std::string& l_n)
{
    fml.emplace(l_n,f_n);//拿两个string初始化insert所需要的一个pair。
}