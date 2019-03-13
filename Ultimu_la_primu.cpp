#include <fstream>
using namespace std;
long long v[500000],a[500000];
int main()
{
    ifstream f ("something.in");
    ofstream g ("something.out");
    int n,i,ct,j;
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>v[i];
        a[i]=-500000;
    }
    for(j=1;j<=n;j++)
    {
        ct=0;
        for(i=n;i>0;i--)
        {
            if(v[i]>v[j])
                ct++;
        }
        a[ct+1]=v[j];
    }
    for(i=1;i<=n;i++)
    {
        g<<a[i]<<' ';
    }
}
