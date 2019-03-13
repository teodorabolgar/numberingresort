#include<iostream>
using namespace std;
int main()
{
    int n,i,ok=1,t=0,m;
    cout<<"Numerele,te rog"<<endl;
    cin>>n;
    m=n
    float v[n+1],aux;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    while(ok)
    {
        ok=0;
        for(i=1;i<m;i++)
        {
            if(v[i]<v[i+1])
            {
                aux=v[i+1];
                v[i+1]=v[i]
                v[i]=aux
                ok=1

            }
            if(v[i]!=v[i+1])
                t=1;
               }
               m--;
        }
        if(!t)
        {

            cout<<"Toate numerele sunt identice"<<endl<<"Sirul va ramane mereu:"<<endl;
            for(i=1;i<=n;i++)
        {
            cout<<v[i]<<' ';
        }
        return o;
    }
    for(i=1;i<=n;i++)
    {
        cout<<v[i]<<' ';
    }
    return 0;
}

