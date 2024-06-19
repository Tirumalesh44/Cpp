#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n==0||n==1)
        return 1;
    else
        return n*factorial(n-1);
}
int pascal_value(int n,int r)
{
    return factorial(n)/(factorial(n-r)*factorial(r));
}

int main()
{
    int n;
    cout<<"enter the no of rows in pascal triangle"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for (int space = 0; space <= n - i - 1; space++)
        {
            cout << " ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<pascal_value(i,j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}