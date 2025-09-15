#include <stdio.h>
#include <string.h>

int main(){
	char degree[2];
	char interview[1];
	printf("Please enter your qualification (BS/MS): \n");
	scanf("%s", degree);
	if (strcmp("MS", degree) == 0) {
		printf("Have you passed the interview? (y/n)\n");
		scanf("%s", interview);
		if (strcmp("y", interview) == 0) {
			printf("Congratulations! You're hired.\n");
		}
		else {
			printf("Sorry, you have not been hired.\n");
		}
	}
	else {
		printf("You are not qualified.\n");
	}
	return 0;
}
