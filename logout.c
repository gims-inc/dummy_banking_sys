#include "sys.h"


// Logout function to bring
// user to the login screen
void logout(void)
{
	int i, j;
	//system("cls");
	clear();
	printf("please wait, logging out");

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 25000000; j++) {
			i++;
			i--;
		}
		printf(".");
	}

	gotoxy(30, 10);
	printf("Sign out successfully..\n");

	gotoxy(0, 20);
	printf("press any key to continue..");

	getchar();
}
