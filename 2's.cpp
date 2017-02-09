#include<bits/stdc++.h>
using namespace std;\
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int i;
    for(i=l-1;i>=0;i--)
    {
        if(s[i]=='1')
            break;
    }
    if(i+1==0)
    {
      cout<<"1"<<s<<endl;

    }
    else
    {
      for(int k=i-1;k>=0;k--)
           {
               if(s[k]=='1')
                s[k]='0';
               else
                s[k]='1';
           }
    cout<<s<<endl;

    }



    return 0;

}
