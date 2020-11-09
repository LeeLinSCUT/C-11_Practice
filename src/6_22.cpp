#include<iostream>
void SwapPointer(int *&p, int *&q)
{
    int* temp = p;
    p = q;    
    q = temp;
} //交换指针内容
int main()
{
    int val1 = 5;
    int val2 = 10;
    int *pval1 = &val1;
    int *pval2 = &val2;
    SwapPointer(pval1,pval2); //函数接收的是指针的引用，不可以传递 &val1, 只能传递pval1的整形指针。
    //但是如果是整形指针的参数的话，又可以传递 &val1来初始化。也就是不可以进行两次隐式转换？
    std::cout<<*pval1<<*pval2<<std::endl;
}