#include <stdio.h>

int main()
{
    int a[100][100]={1,1};
    int i, j, k;
    printf("Input target value!\n");
    scanf("%d", &k);
    printf("1\n");
    if(k!=1){
      printf("%d %d\n", a[0][0], a[0][1]);
    }
    
    for(i=1;i<=k-2;i++){
        for(j=0;j<=i+1;j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
