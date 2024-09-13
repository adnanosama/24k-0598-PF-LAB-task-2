#include<stdio.h>
void main()
{
    float unit, perunit ,charge,chargex,surcharge;
    int ID;
    
    printf("enter customer ID: ");
    scanf("%d",&ID);
    printf("enter your unit: ");
    scanf("%f",&unit);
    if (unit<=199)
    {
        perunit=16.20;
        charge=unit*16.20;
        chargex=charge;
    }
    else if (unit>200 && unit<300)
    {
        perunit=20.10;
        charge= unit*20.10;
        chargex=charge;
    }
    else if (unit>300 && unit<500)
    {
        perunit=27.10;
        charge=unit*27.10;
        chargex=charge;
    }
    else
        perunit=35.90;
        charge=unit*35.90;
        chargex=charge;
    if (charge>18000)
    {
        surcharge=charge*0.15;
        chargex=charge+ (charge*0.15);
    }
    printf("customer ID: %d", ID);
    printf("\nunits cunsumed: %.0f", unit);
    printf("\nAmount Charges @Rs.%.2f per unit: %.0f", perunit, charge);
    printf("\nsurcharge amount: %.0f", surcharge);
    printf("\nNet Amount Paid by the Customer: %.2f", chargex);
}