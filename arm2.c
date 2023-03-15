#include <stdio.h> //a=b+log10(153)
#include <math.h>
// ARMSTRONG NUMBERS //
int main()
{
    int no;
    for (size_t i = 0; i < 100000; i++)
    {   
        no = i;
        int a = no;
        int i = 0;
        while (a > 0)
        {
            a = a / 10;
            i += 1;
        }
        int count = i;
        int b = no;
        int sum = 0;
        while (b > 0)
        {
            int c = b % 10;
            sum = sum + pow(c, count);
            b = b / 10;
        }
        if (sum == no)
        {
            printf("%d is Armstrong Number\n", no);
        }
        
    }

    return 0;
}
