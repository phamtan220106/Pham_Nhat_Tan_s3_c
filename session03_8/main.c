#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_s3_ex8\n");
    printf("in so dao nghich\n");
    int x,sochuso=1,daonguoc=0;
    scanf("%d",&x);
    int y=x;
    while   (x!=0){
            daonguoc=daonguoc*10+x%10;
            x=x/10;
    }
    x=y;
    printf("so dao nguoc cua: %d",x);
    printf(" la: %d\n",daonguoc);
    return 0;
}
