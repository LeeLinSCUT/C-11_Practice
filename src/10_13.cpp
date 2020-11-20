#include<algorithm>
#include<iostream>
#include<string>
bool islonger5(const std::string &str)
{
    return str.size()>=5;
}
int main()
{
    std::vector<std::string> s_v={"fivewords","one","two","moreand","noneof"};
    std::vector<std::string>::iterator iter = std::partition(s_v.begin(),s_v.end(),islonger5);
    for(auto beg=s_v.begin();beg!=iter;beg++)
    {
        std::cout<<*beg<<std::endl;
    }
}