#include<stdio.h>
#include<math.h>
float func(float);
int main()
{
float d,ans;
printf("Enter a no.");
scanf("%f",&d);
ans=func(d);
printf("Ans=%f",ans);
return 0;
}

    float func(float b)
    {
    float q;
    q=sqrt(b);
    return (q);
    }
