#include "sys.h"

// gcc *.c -o <output_file>
// Driver Code
int main()
{
	int i, a, b, choice;
	int passwordlength;
	
	clear();
	gotoxy(20, 3);

	// Creating a Main
	// menu for the user
	printf("WELCOME TO BANK ACCOUNT SYSTEM\n\n");
	gotoxy(18, 5);

	printf("**********************************");
	gotoxy(25, 7);

	printf("(:");

	gotoxy(20, 10);
	printf("1.... CREATE A BANK ACCOUNT");

	gotoxy(20, 12);
	printf("2.... ALREADY A USER? SIGN IN");
	gotoxy(20, 14);
	printf("3.... EXIT\n\n");

	printf("\n\nENTER YOUR CHOICE..");

	scanf("%d", &choice);

	switch (choice) {
	case 1:
		system("clear");
		printf("\n\n USERNAME 50 CHARACTERS MAX!!");
		printf("\n\n PASSWORD 50 CHARACTERS MAX!!");
		account();
		break;

	case 2:
		login();
		break;

	case 3:
		exit(0);
		break;

		getchar();
	}
}

