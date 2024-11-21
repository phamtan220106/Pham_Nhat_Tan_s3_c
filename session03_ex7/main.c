#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_s3_ex7\n");
    printf("nhap vao so co 4 chu so ;\n");
    int number,tong=0;
    scanf("%d",&number);
    int x=number;
    for(int i=1 ; i<=4 ;i++)
    {
        tong=tong+(number%10);
        number=(number-(number%10))/10;
    }
    printf("tong cac chu so cua: %d",x);
    printf(" la %d\n",tong);
    printf("Hello world!\n");
    return 0;
}
