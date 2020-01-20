#include <stdio.h>

int main(void)
{
	int pennies, nickels;
	int dimes, quarters;
	int halves, dollars;

	printf("Сколько у вас одноцентовых монет? ");
	scanf("%d", &pennies);

	printf("Сколько у вас пятицентовых монет монет? ");
	scanf("%d", &nickels);

	printf("Сколько у вас десятицентовых монет? ");
	scanf("%d", &dimes);

	printf("Сколько у вас двадцатипятицентовых монет? ");
	scanf("%d", &quarters);

	printf("Сколько у вас пятидесятицентовых монет? ");
	scanf("%d", &halves);

	printf("Сколько у вас долларовых монет? ");
	scanf("%d", &dollars);

	printf("Сумма ваших монет равна ");

	int total = pennies + nickels*5 + dimes*10 + quarters*25 
		    + halves*50 + dollars*100;

	if (total > 100)
		printf("%d долларов %d центов\n", total / 100,
			total % 100);
	else
		printf("%d центов\n", total);

	return 0;
}
