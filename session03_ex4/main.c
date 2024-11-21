#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_s3_ex4\n");
    printf("diem trung binh\n");
    float toan,van,anh,diemTB;
    printf("diem toan:");
    scanf("%f",&toan);
    printf("diem van:");
    scanf("%f",&van);
    printf("diem anh:");
    scanf("%f",&anh);
    diemTB=(toan+van+anh)/3;
    printf("diem trung binh vua ban la: %.2f\n",diemTB);
    printf("Hello world!\n");
    return 0;
}
