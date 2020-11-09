#include<iostream>
#include<string>
bool HasUpper(const std::string &s)
{
    for(auto i:s)
    {
        if(std::isupper(i))
            return true;
    }
    return false;
}

std::string SToLower(std::string &s)
{
    for(auto &i:s)
    {
        i = std::tolower(i);
    }
    return s;
}

int main()
{
    std::string s = "bigbangtheory";
    if(HasUpper(s))
    {
        std::cout<<"HASUPPER"<<std::endl;
    }
    SToLower(s);
    std::cout<<s<<std::endl;
}
