#ifndef SYS_H
#define SYS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <windows.h>
#include <unistd.h>


#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))


// Creating a structure to store
// data of the user
struct pass {
	char username[50];
	int date, month, year;
	char pnumber[15];
	char idnum[20];
	char fname[20];
	char lname[20];
	char fathname[20];
	char mothname[20];
	char address[50];
	char typeaccount[20];
};

// Structure to keep track
// of amount transfer
struct money {
	char usernameto[50];
	char userpersonfrom[50];
	long int money1;
};

struct userpass {
	char *password;
};

void checkbalance(char*);
void transfermoney(void);
void display(char*);
void person(char*);
void login(void);
void loginsu(void);
void account(void);
void accountcreated(void);
void afterlogin(void);
void logout(void);


#endif /*SYS_H*/
