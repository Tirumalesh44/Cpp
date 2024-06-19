#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> squares(vector<int> &v,int m,vector<int> &v1)
{
    
    int p=0,q=m-1,m1=m-1;
    while(p<=q)
    {
        if(abs(v[p])>abs(v[q]))
        {
            v1[m1--]=v[p]*v[p];
            p++;
        }
        else
        {
            v1[m1--]=v[q]*v[q];
            q--;
        }
    }
    return v1;

}
int main()
{
    
    int m;
    cout<<"enter the size of vector"<<endl;
    cin>>m;
    vector<int> v(m);
    cout<<"enter the values :"<<endl;
    for(int i=0;i<m;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    vector<int> v1(m);
    vector<int> v2 = squares(v, m,v1);
    for (int i = 0; i < m; i++)
    {
        cout << v2[i] << " ";
    }
    return 0;
}