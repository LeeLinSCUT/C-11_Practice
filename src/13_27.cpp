#include<vector>
#include<iostream>
#include<string>
class Hasptr
{
public:
    Hasptr():ps(new std::string()),count(new int(1)){print_count();} //默认构造函数
    Hasptr(const std::string s1, int ct=1):ps(new std::string(s1)),count(new int(ct)){print_count();} //普通构造函数
    Hasptr(Hasptr& r):ps(r.ps),count(r.count){(*count)++;print_count();}; //拷贝构造函数
    Hasptr& operator=(const Hasptr &); //拷贝赋值函数
    ~Hasptr(); //析构函数
private:
    void print_count(){std::cout<<"count:"<<*count<<std::endl;}
    void print_data(){std::cout<<*ps<<std::endl;}
    std::string *ps;
    int *count;
};
Hasptr& Hasptr::operator=(const Hasptr& rhs) //这个const是顶层const而非底层const
{
 //   std::string *temp = new std::string((*rhs.ps));
    (*rhs.count)++;
 //   delete ps;
    if(--(*count)==0)
    {
        delete ps;
        delete count;
    }
    ps = rhs.ps;
    count = rhs.count;
    print_count();
    return *this;
}
Hasptr::~Hasptr()
{
    if(--(*count)==0)
    {
        delete ps;
        delete count;
    }
    print_count();
}
Hasptr func(Hasptr h1, Hasptr h2)
{
    return h1;  //返回参数会调用拷贝构造函数
}
int main()
{
    Hasptr a1("test"); //1
    Hasptr a2 = a1; //2
    func(a1,a2); //3,4,5,4,3,2
    while(1);
}