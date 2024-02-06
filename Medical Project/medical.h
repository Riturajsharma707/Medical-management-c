//   ******************************************************************************
//   **************************       Header file       ***************************
//   ******************************************************************************

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#define SIZE 50
#define INT_SIZE 50
#define false 0
#define true 1
#define clear() printf("\033[H\033[J")
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))

//   ******************************************************************************
//   **************************       Structures        ***************************
//   ******************************************************************************
 

typedef struct TimeType
{
	int dd;
	int mm;
	int yyyy;
	int hour;
	int min;
	int sec;
}TimeType;


typedef struct DateType
{
	int dd;
	int mm;
	int yyyy;
}DateType;

DateType date;

typedef struct MedecineType
{
	char name [SIZE] ;
	char details[SIZE];
	int ncopies;
	float cost;
	float pcost;
	char company_name[SIZE];
	char location[SIZE];
	DateType date;
	TimeType Time;
}MedecineType;
MedecineType med;

typedef struct ClientType 
{
	char name[SIZE];
	char mob_no[SIZE];
	char address[SIZE];
	char city[SIZE];
}ClientType;
ClientType client;

typedef struct  CompanyType
{
	char name[SIZE];
	char address[SIZE];
	char contect_person[SIZE];
	char mob_no[SIZE];
}CompanyType;
CompanyType company;

typedef struct ForgotType
{
	char nickname[SIZE];
	DateType DOB;
	char School[SIZE];
}ForgotType;
typedef struct SignType
{
	char userid[SIZE];
	char password[SIZE]; 
	char name[SIZE];
	char number[SIZE];
	char city[SIZE];
	DateType dob;
	char gender;
	ForgotType forgot;
}SignType;

typedef struct SellType
{
	char clientname[SIZE];
	char medname [SIZE] ;
	char companyname[SIZE];
	int copies;
	float cost;
	DateType date;
	TimeType Time;
}SellType;
SellType sellreport;
SignType sign;

//   ******************************************************************************
//   **************************        Functions        ***************************
//   ******************************************************************************

void StartUp();
int ReadInt();
int Read_Num();
int Sign_In(int time);
void Sign_Up();
int Delete_User();
int Forgot(FILE *ufp,char uid[SIZE]);
void User_List();
void Change_Password();
int Search_User(FILE *ufp,char *name);
int Match_String(char *str1,char *str2);
void Welcome(char name[]);
int Menu();
int Stock_Menu();
int Client_Menu();
int Company_Menu();
int User_Menu();
int Report_Menu();

void Add_Stock(FILE *fp,FILE *rfp);
void Update_Stock(FILE *fp);
void Delete_Stock(FILE *fp);
void Search_Stock(FILE *fp);
void Stock_List( FILE *fp);
int Search(FILE *fp,char *name);

void Sell_Medecine(FILE *fp,FILE *cfp);

void Add_Client(FILE *cfp);
void Update_Client(FILE *cfp);
void Delete_Client(FILE *cfp);
void Client_List(FILE *cfp);
int Search_Client(FILE *cfp,char *name);
int Client_Status(FILE *cfp,char *name,char *num);

void Add_Company(FILE *cpfp);
void Update_Company(FILE *cpfp);
void Delete_Company(FILE *cpfp);
void Company_List(FILE *cpfp);
int Search_Company(FILE *cpfp,char *name);

void Add_Report_List(FILE *rfp);
void Sell_Report_List();

int Is_Leap(int yyyy);
int Is_Valid(int dd,int mm,int yyyy);
void Terminate();
void cls();
void SetColor1(int ForgC);
char Read_Number(char *num);
char Read_String(char *name);
//char Read_Float(char *num);
float Read_Float();
char Read_Password(char *pass);
//char Read_Ptrpassword(char **pass);
