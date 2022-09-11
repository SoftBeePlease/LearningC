#include <stdio.h>

int main(void) {
	int exp;


	printf("Welcome to the experience equivalent program!\n");
	printf("How many times do you cook per week?\n");
	scanf_s("%d", &exp);

	if (exp <= 3) {
		printf("You're an amateur!\n");
		printf("Hint: Start with something easy, like eggs!\n");
	}
	else if (exp <= 5) {
		printf("You're a beginner!\n");
		printf("Hint: If you don't already, plan your meals for the week!");
	}
	else if (exp <= 7) {
		printf("You're an apprentice!\n");
		printf("Hint: Finding someone to cook with increases motivation!\n");
	}
	else if (exp <= 10) {
		printf("You're adept!\n");
		printf("Hint: Heard of the three seasonings rule? Don't use more than 3!\n");
	}
	else if (exp > 10) {
		printf("You're a master chef!\n");
		printf("Hint: Someone who practices more often learns much more!\n");
	}

	return 0;
}