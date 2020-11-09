#include<string>
std::string (&func())[10];
typedef std::string arr[10];
arr& func1();
auto func2() -> std::string(&) [10];
std::string str[10];
decltype(str)& func3();