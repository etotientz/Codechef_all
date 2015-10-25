#include<stdio.h>

int main(){
    int t,n,i;

    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int flag=1;
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-2;i++){
            if(a[i]>a[i+2]){
                printf("NO\n");
                flag=0;
                break;
            }
        }
        if(flag) printf("YES\n");
    }

    return 0;
}
