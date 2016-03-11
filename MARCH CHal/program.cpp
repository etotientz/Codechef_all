#include<iostream>
//#include<conio.h>
#include<stdio.h>
#include<string>
using namespace std;
string s;
int main()
{
    int y;
    long long int t,c1=0,c2=0,f1=0,f2=0,i,j;
    int l,k1=0,k2=0;
    scanf("%lld",&t);

    for( i=0;i<t;i++)
    {
                        cin>>s;
                   l=s.length();
                 //   printf("%d\n",l);
                   if(l<=3||l%2==0)
                   {
                                   if(l==1)
                                   printf("NO\n");


                        else if(l==3)
                        {
                             if(s[0]==s[1]||s[1]==s[2]||s[0]==s[2])
                             printf("YES\n");
                             else
                             printf("NO\n");
                        }
                        else if(l%2==0)
                        {
                             int m=l/2;
                             for(y=0;y<m;y++)
                             {
                                               if(s[y]!=s[y+m])
                                               break;
                             }
                             if(y==m)
                             printf("YES\n");
                             else
                             printf("NO\n");
                        }


                   }
                   else
                   {

                       int mid=l/2;
                        j=mid;


                        k1=0,k2=0;
                       while(j<=l)
                       {
                                      //    printf("%c %c",s[k1],s[j]);
                                         if(s[k1]==s[j])
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
                      // printf("\n");
                    // printf("c1=%lld\n",c1);
                       j=mid+1;
                       while(k2<=mid)
                       {
                        //             printf("%c %c",s[k2],s[j]);
                                         if(s[k2]==s[j])
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
                       printf("YES\n");
                       else
                       printf("NO\n");
                       c1=c2=0;
                       f1=f2=0;
                 }
    }
    //getch();
    return 0;
}
