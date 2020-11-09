#include<iostream>
#include<string>
int main(int argc, char **argv)
{
    std::string s1 = *(++argv);
    std::string s2 = *(++argv);
    std::cout<<s1+s2<<std::endl;
}