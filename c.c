#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
        int Subs_plan, customer_Id, digit;
        float  base_Rate, top_up_Rate, max_usage, consumed_Gb, extra_Gb, extra_consumed_rate, total_amount, tax_amount, 
        final_amount, tax_rate=0.13 ;
        char name[50];
    do
    {
        printf("Enter Your Plan: 1 for HomePlan or 2 for Corporate Plan \n");
        scanf("%d", &Subs_plan);
               if (Subs_plan == 1)
        {
            base_Rate = 1500;
            max_usage = 350 ;
            top_up_Rate = 3 ;
                    printf("\nEnter your Name: \n");
        scanf(" %[^\n]", name);
        printf("\nEnter your Id: \n");
        scanf("%d", &customer_Id);
        printf("\nEnter the GB consumed: \n");
        scanf("%f", &consumed_Gb);

        if (consumed_Gb > max_usage)
        {
            extra_Gb = consumed_Gb - max_usage;
            extra_consumed_rate = extra_Gb* top_up_Rate;
            total_amount = base_Rate + extra_consumed_rate;
            tax_amount = total_amount * tax_rate;
            final_amount = total_amount + tax_amount;
        }
        else
        {
            tax_amount = base_Rate * tax_rate;
            final_amount = base_Rate + tax_amount;
        }
        }
 else if (Subs_plan == 2)
        {
            base_Rate = 3500;
            max_usage = 1000;
             top_up_Rate = 1.5 ;
                     printf("\nEnter your Name: \n");
        scanf(" %[^\n]", name);
        printf("\nEnter your Id: \n");
        scanf("%d", &customer_Id);
        printf("\nEnter the GB consumed: \n");
        scanf("%f", &consumed_Gb);

        if (consumed_Gb > max_usage)
        {
            extra_Gb = consumed_Gb - max_usage;
            extra_consumed_rate = extra_Gb* top_up_Rate;
            total_amount = base_Rate + extra_consumed_rate;
            tax_amount = total_amount * tax_rate;
            final_amount = total_amount + tax_amount;
        }
        else
        {
            tax_amount = base_Rate * tax_rate;
            final_amount = base_Rate + tax_amount;
        }
        }
 else
        {
            printf("\n Invalid \n");
            printf("Enter Your Plan: 1 for HomePlan or 2 for Corporate Plan again \n");
            scanf("%d", &Subs_plan);
        }
 printf("\n\t\t\t Your Bill");
 printf("\n--------------------------------------------------------------\n");
        printf("\n\t Name= %s\n", name);
        printf("\n\t CustomerId= %d\n", customer_Id);
        printf("\n\t Total Gb consumed= %.2f\n", consumed_Gb);
        printf("\n\t Tax amount= %.2f\n",tax_amount);
        printf("\n\t Final amount= %.2f\n", final_amount);
        printf("\n If you want to create another bill then press: 1 or other press other digit: \n");
        scanf(" %d", &digit);
 } while (digit==1);

return 0;
}
