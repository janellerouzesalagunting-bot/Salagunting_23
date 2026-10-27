#include <stdio.h>
int main(){
int n, i;
float sales, bonus, totalBonus = 0;
int highBonusCount = 0;

printf("How many employees? ");
scanf("%d", &n);

for (i = 1; i <= n; i++) {
    printf("Enter monthly sales for Employee %d: ", i);
    scanf("%f", &sales);

    if (sales >= 50000) {
       bonus = sales * 0.10;
       highBonusCount++;
    } else {
        bonus = sales * 0.05;
    }
totalBonus += bonus;
printf("-> Employee %d Bonus: P%.2f\n", i, bonus);
}

printf("\n--- Summary ---\n");
printf("Total Bonuses: P%.2f\n", totalBonus);
printf("Employees with 10% bonus: %d\n", highBonusCount);

return 0;

}