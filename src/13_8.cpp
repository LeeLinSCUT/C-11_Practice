#include<string>
#include<iostream>
class Hasptr
{
public:
    Hasptr(const std::string &s = std::string()):ps(new std::string(s)),i(0){}
    Hasptr(Hasptr& );
    void operator=(Hasptr&);
    void print_mem() const
    {
        std::cout<<*ps<<std::endl;
    }
private:
    std::string *ps;
    int i;
};
Hasptr::Hasptr(Hasptr &ptr)
{
    ps = new std::string();
    *ps = *ptr.ps;
    i = ptr.i;
}
void Hasptr::operator=(Hasptr &ptr)  //如果返回类型从Hasptr&改为void会怎么样？ 结果：也还是可以运行。
{
    *ps = *ptr.ps; //需要相同的是指针指向的值，而不是指针本身的值。
    i = ptr.i;
}
int main()
{
    Hasptr str1("test");
    Hasptr str2 = str1;
    str2.print_mem();
    Hasptr str3("test1");
    str2 = str3;
    str2.print_mem();
}