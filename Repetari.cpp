#include <fstream>
using namespace std;
long long v[500000],a[500000];
int main()
{
    ifstream f ("something.in");
    ofstream g ("something.out");
    int n,i,ct,j,k=0,ct1;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>v[i];
        a[i]=-500000;
    }
    for(j=1;j<=n;j++)
    {
        ct=0;
        for(i=1;i<=n;i++)
        {
            if(v[i]<v[j])
                ct++;
        }
        ct1=ct;
        while(v[j]==a[ct+1])
            ct++;
        if(ct-ct1==n-1 && !k)
        {
            g<<"Toate numerele sunt identice deci sirul va arata mereu astfel:"<<endl;
        }
        a[ct+1]=v[j];
    }
    for(i=1;i<=n;i++)
    {
        g<<a[i]<<' ';
    }
}
