///Bear and big borother:
#include<iostream>
using namespace std;
int main()
{
    int a,b,year=0;
    cin>>a>>b;
    while(a<=b)
    {
        a*=3;
        b*=2;
        year++;
    }

    cout<<year<<endl;
    return 0;
}

///soldier and banannas:
#include <iostream>
using namespace std;
int main() {
  int k, n, w,total_cost=0;
  cin>>k>>n>>w;
  for(int i=1;i<=w;i++)
  {
      total_cost+= i*k;
  }
  if (total_cost<=n){
    cout<<0<<endl;
  }
  else{
    cout<<total_cost-n<<endl;
  }
  return 0;
}

///Elephant:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,ans;
    cin>>x;
    if(x%5==0)
    {
        ans=x/5;
    }
    else
    {
        ans=(x/5)+1;
    }
    cout<<ans<<endl;

return 0;

}
