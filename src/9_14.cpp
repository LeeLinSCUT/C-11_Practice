#include<list>
#include<vector>
#include<string>
#include<iostream>
int main()
{
    std::list<const char*> c_l = {"melodrama","for","ever"}; 
    //好像是把常量值转换成string再转换成const char *的。
    //如果使用char* 来接收初始化列表的话会报错？？
    std::vector<std::string> s_v;
    //const char*转换成的是string还是const string?
    s_v.assign(c_l.begin(),c_l.end());
    for(const auto mem : s_v)
    {
        std::cout<<mem<<std::endl;
    }
}