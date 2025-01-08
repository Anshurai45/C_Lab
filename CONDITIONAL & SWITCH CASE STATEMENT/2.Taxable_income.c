#include <stdio.h>

int main() {
    double income, tax = 0;

    // Input: Annual taxable income
    printf("Enter your annual taxable income: ");
    scanf("%lf", &income);

    // Tax Calculation based on the income ranges
    if (income <= 100000) {
        tax = 0; // No tax for income upto 1 lakh
    } else if (income <= 150000) {
        tax = 0.10 * (income - 100000); // 10% tax for income between 100001 and 150000
    } else if (income <= 250000) {
        tax = 5000 + 0.20 * (income - 150000); // Rs 5000 + 20% for income between 150001 and 250000
    } else {
        tax = 25000 + 0.30 * (income - 250000); // Rs 25000 + 30% for income above 250000
    }

    // Output: Tax to be paid
    printf("The tax to be paid is: Rs %.2lf\n", tax);

    return 0;
}
