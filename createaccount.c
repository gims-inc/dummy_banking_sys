#include "sys.h"



// Successful account creation
void accountcreated(void)
{
	int i;
	char ch;
	//system("cls");
	clear();
	printf(
		"PLEASE WAIT....\n\nYOUR DATA IS PROCESSING....");
	for (i = 0; i < 200000000; i++) {
		i++;
		i--;
	}

	gotoxy(30, 10);

	printf("ACCOUNT CREATED SUCCESSFULLY....");
	gotoxy(0, 20);

	printf("Press enter to login");

	getchar();
	login();
}
