#include <iostream>

float sqroot(float s)
{
    int psq=0;
    int N=0;
    for(int i=static_cast<int>(s);i>0;i--)
    {
        for(int j=1;j<i;j++)
        {
            if(j*j==i)
            {
                psq=i;
                N=j;
                break;

            }

        }
        if(psq>0)
           break;



    }
    float d= s-psq;
    float P= d/(2.0*N);
    float A= N+P;
    float sqrt_of_s= A-((P*P)/(2.0*A));
    return sqrt_of_s;
}

int main()
{
    float num;
    std::cout<<"enter a num:";
    std::cin>>num;
    float sqroot_of_num=sqroot(num);
    std::cout<<"sqrt("<<num<<")="<<sqroot_of_num<<std::endl;
    return 0;
}






















