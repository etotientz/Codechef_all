#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string a;
int main()
{
    ll t,c1=0,c2=0,f1=0,f2=0,i,j;
    int l,k1=0,k2=0;
    cin>>t;

    while(t--)
    {
                        cin>>a;
                   l=a.length();

                   if(l<=3)
                   {
                        if(l==2 &&a[0]==a[1])
                        cout<<"YES"<<endl;
                        else if(l==3)
                        {
                             if(a[0]==a[1]||a[1]==a[2]||a[0]==a[2])
                             cout<<"YES"<<endl;
                             else
                             cout<<"NO"<<endl;
                        }
                        else
                        cout<<"NO"<<endl;
                   }
                   else
                   {

                       int mid=l/2;
                        j=mid;


                        k1=0,k2=0;
                       while(j<=l)
                       {

                                         if(a[k1]==a[j])
                                         {
                                                       k1++;
                                                       j++;
                                         }
                                         else
                                         {
                                             c1++;
                                             j++;
                                         }

                                         if(c1>1)
                                         {
                                                       f1=1;
                                                       break;
                                         }
                                         else if(k1==mid&&j<=l)
                                         {
                                                            break;
                                         }
                                         else if(j==l)
                                         {
                                              f1=1;
                                              break;
                                         }

                       }

                       j=mid+1;
                       while(k2<=mid)
                       {

                                         if(a[k2]==a[j])
                                         {
                                                       k2++;
                                                       j++;
                                         }
                                         else
                                         {
                                             c2++;
                                             k2++;
                                         }
                                         if(c2>1)
                                         {
                                                       f2=1;
                                                       break;
                                         }
                                         else if(k2<=mid+1&&j==l)
                                         {
                                              break;
                                         }
                                         else if(k2==mid+1)
                                         {
                                              f2=1;
                                              break;
                                         }
                       }

                       if(f1==0||f2==0)
                       cout<<"YES"<<endl;
                       else
                      cout<<"NO"<<endl;
                       c1=c2=0;
                       f1=f2=0;
                 }
    }

}
