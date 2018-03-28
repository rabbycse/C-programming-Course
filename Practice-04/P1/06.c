#include <stdio.h>

int main(void)
{
    int area_code = 706;

    switch (area_code) {
        case 229: 
            printf("Dhaka");
            break;
        case 404: case 470: case 678: case 770:
            printf("Rajshahi");
            break;
        case 478:
            printf("Khulna");
            break;
        case 706: case 762:
            printf("Comilla");
            break;
        case 912:
            printf("Sylet");
            break;
        default:
            printf("Area code not recognized");
            break;
    }

    return 0;
}
