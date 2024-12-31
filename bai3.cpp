#include <stdio.h>

int main() 
{
    int a, b;
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);

    if (a < b) 
	{
        printf("So be hon là: %d\n", a);
    }
	 else if (a > b) 
	{
        printf("So be hon là: %d\n", b);
    }
    return 0;
}

