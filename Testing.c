#include<stdio.h>
#include<math.h>
int main()
{   
    
    float pineapple = 0.1, cat, dog = 1;

    printf("Enter c :\n");
    scanf("%f", &cat);

    while (pineapple <= 9.1)
    {
        dog *= 5*cat + pow(pineapple,pineapple);
        pineapple++;
    }
    
    printf("Value = %.4f\n", dog);

    return 0;
}