#include <stdio.h>
#include<math.h>
int main()
{
    double total_amount,rate_of_interest,loan_amount,number_of_years,monthly_amount;

    printf("Enter the loan_amount:");
    scanf("%lf",&loan_amount);
    printf("Enter the rate_of_interest:");
    scanf("%lf",&rate_of_interest);
    printf("Enter the number_of_years:");
    scanf("%lf",&number_of_years);

    total_amount=(loan_amount+(loan_amount*rate_of_interest*number_of_years))/100;

    monthly_amount=total_amount/(number_of_years*12);

    printf("The Total amount is:.2%lf\n",total_amount);
    printf("The Monthly amount is:.2%lf\n",monthly_amount);

    return 0;
}
