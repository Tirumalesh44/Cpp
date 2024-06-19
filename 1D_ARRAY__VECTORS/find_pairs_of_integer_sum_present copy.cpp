//given an vector array sorted in increasing order and size of n and an integer x ,find if there is pair in the array whose sum is excatly x

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int m;
    cout<<"enter the size of vector"<<endl;
    cin>>m;
    cout<<"enter the values :"<<endl;
    for(int i=0;i<m;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"enter the integer u want to find pairs"<<endl;
    int x,count=0;
    cin>>x;
    int p=0,q=m-1;
    while(p<q)
    {
        if((v[p]+v[q])==14)
        {
            count++;
            cout<<"pair is found "<<v[p]<<" & "<<v[q] <<endl;
            p++,q--;
        }
        else if((v[p]+v[q])<14)
        {
            p++;
        }
        else
        {
            q--;
        }
    }
    if(count==0)
    {
        cout<<"no pairs found";
    }
    else{
        cout<<"total no of pairs : "<<count<<endl;
    }
    return 0;
}
