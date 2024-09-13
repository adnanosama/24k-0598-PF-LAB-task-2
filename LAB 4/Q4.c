#include<stdio.h>
void main()
{
    float cost ,saved ,afterdisc , min=500;
    printf("enter the cost of item: ");
    scanf("%f", &cost);
    if (cost<2000 && cost>=500)
    {
        saved=cost*0.053700;
        afterdisc=cost-saved;
        printf("actual cost: %.1f",cost);
        printf("\nsaved amount: %.1f", saved);
        printf("\namount after discount: %.1f", afterdisc);
    }
    else if (cost>=2000 && cost<=4000)
    {
        saved=cost*0.10;
        afterdisc=cost-saved;
        printf("actual cost: %.1f",cost);
        printf("\nsaved amount: %.1f", saved);
        printf("\namount after discount: %.1f", afterdisc);
    }
    else if (cost>=4000 && cost<=6000)
    {
        saved = cost * 0.2;
        afterdisc=cost-saved;
        printf("actual cost: %.1f",cost);
        printf("\nsaved amount: %.1f", saved);
        printf("\namount after discount: %.1f", afterdisc);
    }
    else if (cost>6000)
    {
        saved=cost*0.35;
        afterdisc=cost-saved;
        printf("actual cost: %.1f",cost);
        printf("\nsaved amount: %.1f", saved);
        printf("\namount after discount: %.1f", afterdisc);
    }
    

}