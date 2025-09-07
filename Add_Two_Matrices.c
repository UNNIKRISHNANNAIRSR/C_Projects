#include<stdio.h>
int main()
{
    int p[3][2],q[3][2],r[3][2],a,b;
    printf("Enter The First Metrix Numbers:");
    for(a=0;a<3;a++){
        for(b=0;b<2;b++){
            scanf("%d",&p[a][b]);
        }
    }
    printf("Enter The Second Metrix Numbers:");
    for(a=0;a<3;a++){
        for(b=0;b<2;b++){
            scanf("%d",&q[a][b]);
        }
    }
    for(a=0;a<3;a++){
        for(b=0;b<2;b++){
            r[a][b]=p[a][b]+q[a][b];
        }
    }
    printf("The Sum Of Two matrices Is:\n" );
    for(a=0;a<3;a++){
        for(b=0;b<2;b++){
            printf("%d \t",r[a][b]);
            printf("\n");
        }
    }
    return 0;
}