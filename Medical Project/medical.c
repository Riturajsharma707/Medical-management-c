#include"medical.h"

void StartUp()
{
	cls();
	system("mode con:cols=80 lines=20");
//	system("mode con:cols=124 lines=31");
}

/*  ADT for Menu()
Purpose        : To Diaplay MainMenu 
Pre-Condition  : None
Input          : None
Output         : Choice(int)
Post-Condition : None
*/

void Welcome(char name[])
{
	cls();
	int i,j,k;
	printf("\033[1;31m");
	SetColor1(4);
	for(i=0;i<8;i++)
	{
		for(j=0;j<80;j++)
		{
			printf("\xb2");
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<20;j++)
		{
			printf("\xb2");
		}
		printf("\n");
	}
	k=9;
	for(i=0;i<5;i++)
	{
		gotoxy(60,k++);
		for(j=0;j<21;j++)
		{
			printf("\xb2");
		}
		printf("\n");
	}
	gotoxy(0,13);
	for(i=0;i<7;i++)
	{
		printf("\n");
		for(j=0;j<80;j++)
		{
			printf("\xb2");
		}
	}
	gotoxy(26,10);
	//printf("\033[1;33m");
	SetColor1(9);
	printf("   Mr. %s",name);
	printf("\n\t\t      Welcome To Medical Store Management      ");
	printf("\n\t\t\t    Press key to continue ");
	getch();
}

int Menu()
{
	int i=0,j,k=3;
	cls();
	printf("\033[0m\033[1;35m");
	for(i=0;i<3;i++)
	{
		for(j=0;j<80;j++)
		{
			printf("\xb2");
		}
		printf("\n");
	}
	gotoxy(17,3);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\xb2\033[7;33m   PRESS 1 ===>> STOCK                  \033[0m\033[1;35m\xb2\xb2");
	gotoxy(17,5);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\xb2\033[7;33m   PRESS 2 ===>> SELL                   \033[0m\033[1;35m\xb2\xb2");
	gotoxy(17,7);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\xb2\033[7;33m   PRESS 3 ===>> CLIENTS                \033[0m\033[1;35m\xb2\xb2");
	gotoxy(17,9);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\xb2\033[7;33m   PRESS 4 ===>> REPORTS                \033[0m\033[1;35m\xb2\xb2");
	gotoxy(17,11);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\xb2\033[7;33m   PRESS 5 ===>> MANAGE USER            \033[0m\033[1;35m\xb2\xb2");
	gotoxy(17,13);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\xb2\033[7;33m   PRESS 6 ===>> COMPANY                \033[0m\033[1;35m\xb2\xb2");
	gotoxy(17,15);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\xb2\033[7;33m   PRESS 7 ===>> EXIT                   \033[0m\033[1;35m\xb2\xb2");
	gotoxy(17,17);
	for(i=0;i<44;i++)
		printf("\xb2");
	gotoxy(17,18);
	printf("\xb2\xb2\033[7;36m   Enter your choice ===>>              \033[0m\033[1;35m\xb2\xb2\n\t\t");
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n");
	for(i=0;i<80;i++)
		printf("\xb2");
	gotoxy(48,18);
	printf("\033[7;36m");
	//scanf("%d",&i);
	i=ReadInt();
	printf("\033[0m\n\n\n\n");
	return i;
	printf("\n");
}/* End of menu()*/

/*  ADT for Stock_Menu()
Purpose        : To Diaplay Stock menu 
Pre-Condition  : None
Input          : None
Output         : Choice(int)
Post-Condition : None
*/

int Stock_Menu()
{
	int i=0,j,k;
	cls();
	printf("\033[0m\033[1;35m");
	for(j=0;j<3;j++)
	{
		for(k=0;k<80;k++)
		{
			printf("\xb2");
		}
		printf("\n");
	}
	gotoxy(18,3);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t \xb2\xb2\033[7;33m   PRESS 1 ===>> ADD NEW STOCK          \033[0m\033[1;35m\xb2\xb2");
	gotoxy(18,5);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t \xb2\xb2\033[7;33m   PRESS 2 ===>> UPDATE STOCK           \033[0m\033[1;35m\xb2\xb2");
	gotoxy(18,7);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t \xb2\xb2\033[7;33m   PRESS 3 ===>> DELETE STOCK           \033[0m\033[1;35m\xb2\xb2");
	gotoxy(18,9);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t \xb2\xb2\033[7;33m   PRESS 4 ===>> SEARCH STOCK           \033[0m\033[1;35m\xb2\xb2");
	gotoxy(18,11);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t \xb2\xb2\033[7;33m   PRESS 5 ===>> VIEW ALL STOCK         \033[0m\033[1;35m\xb2\xb2");
	gotoxy(18,13);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t \xb2\xb2\033[7;33m   PRESS 6 ===>> BACK                   \033[0m\033[1;35m\xb2\xb2");
	gotoxy(18,15);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t \xb2\xb2\033[7;33m   PRESS 7 ===>> EXIT                   \033[0m\033[1;35m\xb2\xb2");
	gotoxy(18,17);
	for(i=0;i<44;i++)
		printf("\xb2");
	gotoxy(18,18);
	printf("\xb2\xb2\033[7;36m    Enter your choice ===>>             \033[0m\033[1;35m\xb2\xb2\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<80;j++)
		{
			printf("\xb2");
		}
		if(i!=1)
		printf("\n");
	}
	gotoxy(48,18);
	printf("\033[7;36m");
	i=ReadInt();
	printf("\033[0m\n\n\n\n");
	return i;
	printf("\n");	
} /* End of Stock_Menu() */



/*  ADT for Client_Menu()
Purpose        : To Diaplay MainMenu 
Pre-Condition  : None
Input          : None
Output         : Choice(int)
Post-Condition : None
*/

int Client_Menu()
{
	int i=0,j;
	cls();
	printf("\033[0m\033[1;35m");
	for(i=0;i<4;i++)
	{
		for(j=0;j<80;j++)
		{
			printf("\xb2");
		}
		printf("\n");
	}
	gotoxy(20,4);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 1 ===>> ADD NEW CLIENT         \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,6);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 2 ===>> UPDATE CLIENT          \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,8);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 3 ===>> DELETE CLIENT          \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,10);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 4 ===>> VIEW ALL CLIENT        \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,12);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 5 ===>> BACK                   \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,14);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 6 ===>> EXIT                   \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,16);
	for(i=0;i<44;i++)
		printf("\xb2");
	gotoxy(20,17);
	printf("\xb2\xb2\033[7;36m    Enter your choice ===>>             \033[0m\033[1;35m\xb2\xb2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<80;j++)
		{
			printf("\xb2");
		}
		if(i!=2)
		printf("\n");
	}
	/*for(i=0;i<78;i++)
		printf("\xb2");
	printf("\n");
	for(i=0;i<78;i++)
		printf("\xb2");
	for(i=0;i<78;i++)
		printf("\xb2");*/
	gotoxy(50,17);
	printf("\033[7;36m");
	i=ReadInt();
	printf("\033[0m\n\n\n\n");
	return i;
	printf("\n");
} /* End of client_Menu*/

/*  ADT for Report_Menu()
Purpose        : To Diaplay MainMenu 
Pre-Condition  : None
Input          : None
Output         : Choice(int)
Post-Condition : None
*/

int Report_Menu()
{
	int i=0,j;
	cls();
	printf("\033[0m\033[1;35m");
	for(i=0;i<6;i++)
	{
		for(j=0;j<80;j++)
		{
			printf("\xb2");
		}
		printf("\n");
	}
	gotoxy(20,6);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 1 ===>> VIEW ADD STOCK         \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,8);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 2 ===>> VIEW SELL STOCK        \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,10);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 3 ===>> BACK                   \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,12);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 4 ===>> EXIT                   \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,14);
	for(i=0;i<44;i++)
		printf("\xb2");
	gotoxy(20,15);
	printf("\xb2\xb2\033[7;36m    Enter your choice ===>>             \033[0m\033[1;35m\xb2\xb2\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<80;j++)
		{
			printf("\xb2");
		}
		if(i!=4)
		printf("\n");
	}
	gotoxy(50,15);
	printf("\033[7;36m");
	i=ReadInt();
	printf("\033[0m\n\n\n\n");
	return i;
	printf("\n");
} /* End of Report_Menu() */

/*  ADT for User_Menu()
Purpose        : To Diaplay MainMenu 
Pre-Condition  : None
Input          : None
Output         : Choice(int)
Post-Condition : None
*/

int User_Menu()
{
	int i=0,j;
	cls();
	printf("\033[0m\033[1;35m");
	for(i=0;i<5;i++)
	{
		for(j=0;j<80;j++)
		{
			printf("\xb2");
		}
		printf("\n");
	}
	gotoxy(20,5);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 1 ===>> ADD NEW USER           \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,7);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 2 ===>> DELETE A USER          \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,9);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 3 ===>> VIEW USERS             \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,11);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 4 ===>> CHANGE PASSWORD        \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,13);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 5 ===>> BACK                   \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,15);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 6 ===>> EXIT                   \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,17);
	for(i=0;i<44;i++)
		printf("\xb2");
	gotoxy(20,18);
	printf("\xb2\xb2\033[7;36m    Enter your choice ===>>             \033[0m\033[1;35m\xb2\xb2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<80;j++)
		{
			printf("\xb2");
		}
		if(i!=2)
		printf("\n");
	}
	gotoxy(50,17);
	printf("\033[7;36m");
	i=ReadInt();
	printf("\033[0m\n\n\n\n");
	return i;
	printf("\n");
} /* End of User_Menu() */

/*  ADT for Company_Menu()
Purpose        : To Diaplay MainMenu 
Pre-Condition  : None
Input          : None
Output         : Choice(int)
Post-Condition : None
*/

int Company_Menu()
{
	int i=0,j;
	cls();
	printf("\033[0m\033[1;35m");
	for(i=0;i<4;i++)
	{
		for(j=0;j<80;j++)
		{
			printf("\xb2");
		}
		printf("\n");
	}
	gotoxy(20,4);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 1 ===>> ADD NEW COMPANY        \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,6);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 2 ===>> UPDATE COMPANY         \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,8);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 3 ===>> DELETE COMPANY         \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,10);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 4 ===>> VIEW COMPANY           \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,12);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 5 ===>> BACK                   \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,14);
	for(i=0;i<44;i++)
		printf("\xb2");
	printf("\n\t\t   \xb2\xb2\033[7;33m   PRESS 6 ===>> EXIT                   \033[0m\033[1;35m\xb2\xb2  ");
	gotoxy(20,16);
	for(i=0;i<44;i++)
		printf("\xb2");
	gotoxy(20,17);
	printf("\xb2\xb2\033[7;36m    Enter your choice ===>>             \033[0m\033[1;35m\xb2\xb2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<80;j++)
		{
			printf("\xb2");
		}
		if(i!=2)
		printf("\n");
	}
	gotoxy(50,17);
	printf("\033[7;36m");
	i=ReadInt();
	printf("\033[0m\n\n\n\n");
	return i;
	printf("\n");
}/* End of company_menu()*/

/*  ADT for Add_Stock(FILE *fp,FILE *rfp)
Purpose        : To Add medecine into file  
Pre-Condition  : File must be open
Input          : fp(FILE)  rfp(FILE)
Output         : None
Post-Condition : Medecine added
*/
void Add_Stock(FILE *fp,FILE *rfp)
{
	printf("\033[0m");
	cls();
	int i,j,k=9;
	char ch;
	time_t t= time(NULL);
	struct tm tm = *localtime(&t);
	printf("\033[0m");
	do
	{
		cls();
		SetColor1(k);
		for(i=0;i<3;i++)
		{
			for(j=0;j<80;j++)
				printf("\xb2");
		}
		fseek(fp,0,2) ;
		fseek(rfp,0,2) ;
		gotoxy(17,3);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2\033[1;33m Enter medecine name    :\033[0m   \t\t");
		gotoxy(17,5);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2\033[1;33m Enter medecine details :\033[0m  \t\t ");
		gotoxy(17,7);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2\033[1;33m Enter number of copies :\033[0m \t\t\t");
		gotoxy(17,9);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2\033[1;33m Enter selling cost     :\033[0m \t\t  ");
		gotoxy(17,11);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2\033[1;33m Enter purchase cost    :\033[0m \t\t   ");
		gotoxy(17,13);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2\033[1;33m Enter company name     : \033[0m \t\t ");
		gotoxy(17,15);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2\033[1;33m Enter company location :\033[0m");
		gotoxy(17,17);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2\033[1;33m Enter expiry  (dd/mm/yyyy):\033[0m");
		gotoxy(17,19);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n");
		for(j=0;j<80;j++)
			printf("\xb2");
		i=2;
		for(j=0;j<8;j++)
		{
			gotoxy(65,i+=2);
			printf("\xb2\xb2");
		}
		printf("\033[0m");
		char medname[SIZE];
		gotoxy(44,4);
		Read_String(medname);
		if(Search(fp,medname)==1)
		{
			cls();
			printf("\n\n\n\n\t\t");
			for(i=0;i<25;i++)
			printf("\xb2\xb2");
			printf("\n\t\t\xb2\xb2  Medecine already exist\t\t\t\xb2\xb2 \n\t\t\xb2\xb2  You can modify medecine\t\t\t\xb2\xb2\n\t\t");
			for(i=0;i<25;i++)
			printf("\xb2\xb2");
			getch();
			return;
		}
		strcpy(med.name,medname);
		fflush(stdin);
		gotoxy(44,6);
		Read_String(med.details);
		fflush(stdin);
		gotoxy(44,8);
		med.ncopies=Read_Num();
		fflush(stdin);
		gotoxy(44,10);
		scanf("%f",&med.cost) ;
		fflush(stdin);
		gotoxy(44,12);
		scanf("%f",&med.pcost);
		fflush(stdin);
		gotoxy(44,14);
		Read_String(med.company_name);
		fflush(stdin);
		gotoxy(44,16);
		Read_String(med.location);
		fflush(stdin);
		gotoxy(50,18);
		while(1)
		{
			fflush(stdin);
			med.date.dd=Read_Num();
			med.date.mm=Read_Num();
			med.date.yyyy=Read_Num();
			if(Is_Valid(med.date.dd,med.date.mm,med.date.yyyy)==0)
			{
				gotoxy(50,18);
				printf("               ");
				gotoxy(50,18);
				continue;
			}
			else
				break;
		}/* End of while(1)*/
		fflush(stdin);
		//getch();
		med.Time.dd=tm.tm_mday;
		med.Time.mm=((tm.tm_mon)+1);
		med.Time.yyyy=((tm.tm_year)+1900);
		med.Time.hour=tm.tm_hour;
		med.Time.min=tm.tm_min;
		med.Time.sec=tm.tm_sec;
		fwrite(&med,sizeof(med),1,rfp);
		fwrite(&med,sizeof(med),1,fp);
		cls();
		SetColor1(5);
		printf("\n\n\n\n\n\n\n\t\t");
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2 Medecine successfully added \t\t\t \xb2\n\t\t");
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2 Do you want to add medecine again(y/n) : \t \xb2\n\t\t");
		for(j=0;j<50;j++)
			printf("\xb2");
		fflush(stdin);
		gotoxy(60,11);
		ch=getche();
	}while(ch=='y'||ch=='Y');
}

/*  ADT for Update_Stock(FILE *fp)
Purpose        : To update Existing medecine   
Pre-Condition  : File must be open and medecine available
Input          : fp(FILE)
Output         : None
Post-Condition : Medecine modified
*/

void Update_Stock(FILE *fp)
{
	cls();
	int i,k=3,j;
	char name [50 ];
	long size=sizeof(med) ;
	printf("\n\n\t\t\033[1;31m");
	for(i=0;i<46;i++)
		printf("\xb2");
		printf("\n\t\t\xb2\033[2;47m               UPDATE STOCK                 \033[0m\033[1;31m\xb2\n\t\t");
		for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");
	printf("\n\n\t  ");
	SetColor1(7);
	for(i=0;i<60;i++)
		printf("\xb2");
	printf(" \n\t  \xb2\xb2 Enter the medecine name to modify :   \t\t    \xb2\xb2\n\t  ");
	for(i=0;i<60;i++)
		printf("\xb2");
	gotoxy(49,8);
	Read_String(name);
	if(Search(fp,name)==1)
	{
		cls();
		printf("\t\t\033[1;31m");
		for(i=0;i<50;i++)
			printf("\xb2");
		printf("\n\t\t\xb2\033[2;47m                 ENTER NEW DATA                 \033[0m\033[1;31m\xb2\n\t\t");
		for(i=0;i<50;i++)
			printf("\xb2");
		gotoxy(17,4);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2\033[1;33m Enter medecine name    : \033[0m");
		gotoxy(17,6);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2\033[1;33m Enter medecine details :  \033[0m ");
		gotoxy(17,8);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2\033[1;33m Enter number of copies : \033[0m");
		gotoxy(17,10);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2\033[1;33m Enter selling cost     : \033[0m  ");
		gotoxy(17,12);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2\033[1;33m Enter purchase cost    : \033[0m   ");
		gotoxy(17,14);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2\033[1;33m Enter company name     :  \033[0m ");
		gotoxy(17,16);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2\033[1;33m Enter company location :\033[0m");
		gotoxy(17,18);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2  \033[1;33m Enter expiry  (dd/mm/yyyy) :\033[0m");
		gotoxy(17,20);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		i=3;
		for(j=0;j<8;j++)
		{
			gotoxy(65,i+=2);
			printf("\xb2\xb2");
		}
		gotoxy(44,5);
		fflush(stdin);
		Read_String(med.name);
		fflush(stdin);
		gotoxy(44,7);
		Read_String(med.details);
		fflush(stdin);
		gotoxy(44,9);
		med.ncopies=Read_Num();
		fflush(stdin);
		gotoxy(44,11);
		scanf("%f",&med.cost) ;
		fflush(stdin);
		gotoxy(44,13);
		scanf("%f",&med.pcost);
		fflush(stdin);
		gotoxy(44,15);
		Read_String(med.company_name);
		fflush(stdin);
		gotoxy(44,17);
		Read_String(med.location);
		fflush(stdin);
		gotoxy(50,19);
		while(1)
		{
			fflush(stdin);
			med.date.dd=Read_Num();
			med.date.mm=Read_Num();
			med.date.yyyy=Read_Num();
			if(Is_Valid(med.date.dd,med.date.mm,med.date.yyyy)==0)
			{
				gotoxy(50,19);
				printf("               ");
				gotoxy(50,19);
				continue;
			}
			else
				break;
		}/* End of while(1)*/
		fseek(fp,-size,1);
		fwrite(&med,sizeof(med) ,1,fp);
		cls();
		gotoxy(1,8);
		printf("\n\t\t\033[1;31m");
		for(i=0;i<50;i++)
			printf("\xb2");
		printf("\n\t\t\xb2\033[2;47m        Record successfully modified            \033[1;31m\xb2\n\t\t");
		for(i=0;i<50;i++)
			printf("\xb2");
		
	}
	else
	{
		cls();
		printf("\n\n\n\n\n\n\t\t");
		for(i=0;i<55;i++)
			printf("\xb2");
		printf("\n\t\t\xb2\tMedecine not available \t\t\t      \xb2\n");
		printf("\t\t");
		for(i=0;i<55;i++)
			printf("\xb2");
		printf("\n\t\t\xb2      Press any key to continue...............       \xb2\n\t\t");
		for(i=0;i<55;i++)
			printf("\xb2");
	}
	fflush(stdin);
	printf("\033[0m");
	getch();

}

/*  ADT for Delete_Stock(FILE *fp)
Purpose        : To delete Existing medecine from file  
Pre-Condition  : File must be open and medecine available
Input          : fp(FILE) 
Output         : None
Post-Condition : Medecine mshould be deleted
*/

void Delete_Stock(FILE *fp)
{
	int i;
	FILE *fptmp;
	char ch;
	char name[20] ;
	cls();
	printf("\n\n\t\t\033[1;31m");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\033[2;47m                DELETE STOCK                \033[0m\033[1;31m\xb2\n\t\t");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");
	SetColor1(7);
	printf("\n\n\t");
	for(i=0;i<68;i++)
		printf("\xb2");
	printf ("\n\t\xb2\xb2 Enter item to deleted from database: \t\t\t  \xb2\xb2\n\t" ) ;
	for(i=0;i<68;i++)
		printf("\xb2");
	gotoxy(50,8);
	Read_String(name);
	if(Search(fp,name)==0)
	{
		printf("\n\n\t\xb2\xb2  Mesecine %s is not available.........         \n\t",name);
		for(i=0;i<68;i++)
			printf("\xb2");
		printf("\n\t\xb2\xb2  Press any key to continue..............\t\t\t  \xb2\xb2\n\t");
		for(i=0;i<68;i++)
			printf("\xb2");
		gotoxy(75,10);
		printf("\xb2\xb2");
		fflush(stdin);
		getch();
		return;
	}

		fptmp=fopen( "tempfile.dat", "wb");
		rewind(fp);
		while(fread(&med, sizeof(med) ,1, fp) ==1)
		{
			if (strcmp(name,med.name) !=0)
				fwrite(&med,sizeof(med) ,1,fptmp);
		}
		fclose(fp) ;
		fclose(fptmp) ;
		remove("medecines.dat") ;
		rename("tempfile.dat", "medecines.dat");
		printf("\n\n\t\xb2\xb2 Record successfully deleted...............\t\t\t  \xb2\xb2\n\t");
		for(i=0;i<68;i++)
			printf("\xb2");
		printf("\n\t\xb2\xb2 press any key to continue..............   \t\t\t  \xb2\xb2\n\t");
		for(i=0;i<68;i++)
			printf("\xb2");
		fp=fopen ("medecines.dat","rb+") ;
		fflush(stdin);
		getch();
}/*End of delete_Stock( )*/

/*  ADT for Search_List(FILE *fp)
Purpose        : To search a medecine available or not  
Pre-Condition  : File must be open
Input          : medecine_name(char)
Output         : None
Post-Condition : None
*/
void Search_Stock(FILE *fp)
{
	cls();
	int status=0,i=0;
	char item[SIZE];
	printf("\n\n\t\t\033[1;31m");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\033[2;47m                SEARCH STOCK                \033[0m\033[1;31m\xb2\n\t\t");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");
	SetColor1(7);
	printf("\n\n\t");
	for(i=0;i<65;i++)
		printf("\xb2");
	printf ("\n\t\xb2\xb2  Enter item to search : \t\t\t\t       \xb2\xb2\n\t" ) ;
	for(i=0;i<65;i++)
		printf("\xb2");
	gotoxy(36,8);
	Read_String(item);
	rewind(fp);
	while(fread(&med,sizeof(med),1,fp)==1)
	{
		if(Match_String(item,med.name)==1)
		{
			status=1;
			printf("\n\n\t\xb2\xb2 Name \t\xb3 Copies \xb3 Cost   \xb3 Company    \xb3 Expiry_Date   \xb2\xb2\n\t");
			for(i=0;i<65;i++)
				printf("\xb2");
			gotoxy(9,12);
			printf("\xb2\xb2 %s",med.name);
			gotoxy(25,12);
			printf("\xb3 %d",med.ncopies);
			gotoxy(34,12);
			printf("\xb3 %.2f",med.cost);
			gotoxy(43,12);
			printf("\xb3 %s",med.company_name);
			gotoxy(56,12);
			printf("\xb3 %d/%d/%d",med.date.dd,med.date.mm,med.date.yyyy);
			gotoxy(72,12);
			printf("\xb2\xb2");
			printf("\n\t");
			for(i=0;i<65;i++)
				printf("\xb2");
		}
	}
	if(status==0)
	{
		printf("\n\t");
		for(i=0;i<65;i++)
		printf("\xb2");
		printf("\n\t\xb2\xb2  Medecine not found\t\t\t\t\t      \xb2\xb2\n\t");
		for(i=0;i<65;i++)
		printf("\xb2");
	}
}

void Stock_List(FILE *fp)
{
	int i;
	rewind ( fp) ;
	cls();
	printf("\n\n\t\t\033[0m\033[6;35m");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\033[2;47m                  STOCK LIST                \033[0m\033[6;35m\xb2\n\t\t");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");
	SetColor1(7);
	printf("\n\n \033[1;31m");
	for(i=0;i<77;i++)
		printf("\xb2");
		int p=10;
	printf("\n \xb2\033[7;44m   NAME               COPIES   COST    COMPANY_NAME         EXPIRY_DATE    \033[0m\033[1;31m\xb2\033[0m\n ");
	for(i=0;i<77;i++)
		printf("\xb2");
	printf("\033[1;35m");
	while(fread(&med,sizeof(med) ,1,fp)!=0)
	{
		printf("\n \xb2   \033[1;37m%-20s",med.name) ;
		printf ("%d\t ",med.ncopies);
		printf("%.2f\t",med.cost) ;
		printf(" %-10s\t\t",med.company_name);
		printf("%d/%d/%d\033[1;35m",med.date.dd,med.date.mm,med.date.yyyy);// \n\t\t\t
		gotoxy(78,p);
		printf("\xb2\n ");
		p+=2;
		fflush(stdin);
		for(i=0;i<77;i++)
			printf("\xb2");
	}
	printf (" \n\033[0m");
	fflush(stdin);
	getch();
} /* End of Stock_List(FILE *fp) */

/*  ADT for Sell_Medecine(FILE *fp,FILE *cfp)
Purpose        : To Sell  medecine  
Pre-Condition  : medecine and client must available
Input          : fp(FILE)  cfp(FILE)
Output         : None
Post-Condition : Medecine should be sold
*/

void Sell_Medecine(FILE *fp,FILE *cfp)
{
	//int size=sizeof(med);
	time_t t= time(NULL);
	struct tm tm = *localtime(&t);
	FILE *tmp;
	FILE *srfp;
	int n,k;
	char ch;
	char clientname[30];
	char name [50 ];
	long size=sizeof(med);
	srfp=fopen ("sellreport.dat","rb+") ;
	if (srfp==NULL)
	{
		srfp=fopen ("sellreport.dat", "wb+") ;
		if (srfp==NULL)
		{
			puts ("Error in opening file\n");
			exit(1);
		}
	}
	system("attrib +h sellreport.dat");
	cls();
	int i;
	fflush(stdin);
	SetColor1(7);
	printf("\n\n\n\t");
	for(i=0;i<64;i++)
		printf("\xb2");
	printf("\n\t\xb2 Enter the name of client whom you sell tab :                 \xb2\n\t");
	for(i=0;i<64;i++)
		printf("\xb2");
	gotoxy(56,5);
	scanf("%[^\n]s",clientname);
	if(Search_Client(cfp,clientname)==0)
	{
		cls();
		SetColor1(7);
		printf("\n\n\n\n\n\n\n\t\t");
		for(i=0;i<55;i++)
			printf("\xb2");
		printf("\n\t\t\xb2\tInvalid Client \t\t\t\t      \xb2\n\t\t");
			//printf("\t\t\t");
		for(i=0;i<55;i++)
			printf("\xb2");
		printf("\n\t\t\xb2 Do you want to add this client(y/n) :      \t      \xb2\n\t\t");
		for(i=0;i<55;i++)
				printf("\xb2");
		fflush(stdin);
		gotoxy(56,11);
		ch=getche();
		if(ch=='y'||ch=='Y')
			Add_Client(cfp);
	}
	else
	{
		fflush(stdin);
		printf ("\n\t\xb2 Enter the name of the tablet to be sold : \t\t       \xb2\n\t");
		for(i=0;i<64;i++)
			printf("\xb2");
		gotoxy(53,7);
		scanf("%s",name);
		//printf("\n");
		if(Search(fp,name)==1)
		{
			fflush(stdin);
			printf("\n\t\xb2 How many tablets you want to sold :   \t\t       \xb2\n\t");
			for(i=0;i<64;i++)
			printf("\xb2");
			gotoxy(50,9);
			n=Read_Num();
			fread(&med,sizeof(med) ,1,fp);
			if(med.ncopies>=n)
			{
				printf("\n\n\t\xb2  NAME\t\tCOPIES\t  COST\t COMPANY_NAME\tEXPIRY_DATE    \xb2\n\t");
				{
					Search(fp,name);
					printf("\xb2  %-10s\t",med.name) ;
					printf ("%d\t  ",med.ncopies);
					printf("%.2f  ",med.cost) ;
					printf(" %-10s\t",med.company_name);
					printf("%d/%d/%d     ",med.date.dd,med.date.mm,med.date.yyyy);
					gotoxy(72,12);
					printf("\xb2\n\t");
					fflush(stdin);
					for(i=0;i<64;i++)
						printf("\xb2");
					fflush(stdin);
					printf("\n\t\xb2\tTotal ammount=%.2f\t\t\t\t       \xb2\n\t",(med.cost)*n);
					for(i=0;i<64;i++)
						printf("\xb2");
					printf("\n");
				}
			}
			else
			{
				printf("\n\n\t\xb2 \tdo not have sufficient medecine  \t\t       \xb2\n\t");
				for(i=0;i<64;i++)
					printf("\xb2");
				printf("\n\t\xb2\tTotal medecine  ===>>  %d \t\t\t       \xb2\n\t",med.ncopies);
				for(i=0;i<64;i++)
					printf("\xb2");
				getch();
				return;
			}
			printf("\t\xb2 \tYou want to sell(y/n) : \t\t\t       \xb2\n\t");
			for(i=0;i<64;i++)
				printf("\xb2");
			gotoxy(40,16);
			fflush(stdin);
			ch = getche();
			if(ch=='y'||ch=='Y')
			{
				{
					fseek(srfp,0,2);
					int k;
					fflush(stdin);
					strcpy(sellreport.clientname,clientname);
					fflush(stdin);
					strcpy(sellreport.medname,med.name);
					fflush(stdin);
					strcpy(sellreport.companyname,med.company_name);
					sellreport.copies=n;
					sellreport.cost=med.cost;
					sellreport.date.dd=med.date.dd;
					sellreport.date.mm=med.date.mm;
					sellreport.date.yyyy=med.date.yyyy;
					sellreport.Time.dd=tm.tm_mday;
					sellreport.Time.mm=((tm.tm_mon)+1);
					sellreport.Time.yyyy=((tm.tm_year)+1900);
					sellreport.Time.hour=tm.tm_hour;
					sellreport.Time.min=tm.tm_min;
					sellreport.Time.sec=tm.tm_sec;
					fwrite(&sellreport,sizeof(sellreport),1,srfp);
				}
				if(med.ncopies>=n)
				{
					med.ncopies=med.ncopies-n;
					fseek(fp,-size,1);
					fwrite(&med,sizeof(med) ,1,fp);
					printf ( "\n\n\t\xb2 \t%d Madecine sold                 \t\t       \xb2\n\t",n);
					for(i=0;i<64;i++)
						printf("\xb2");
					printf ("\n\t\xb2  \tNow number of copies %d \n\t" , med. ncopies);
					for(i=0;i<64;i++)
						printf("\xb2");
					gotoxy(72,19);
					printf("\xb2");
					
				}
			}
		}
		else
		{
			cls();
			printf("\n\n\n\n\n\t\t");
			for(i=0;i<55;i++)
				printf("\xb2");
			printf("\n\t\t\xb2\tMedecine not available \t\t\t      \xb2\n");
			printf("\t\t");
			for(i=0;i<55;i++)
				printf("\xb2");
			printf("\n\t\t\xb2      Press any key to continue...............       \xb2\n\t\t");
			for(i=0;i<55;i++)
				printf("\xb2");
		}
	}
	fclose(srfp);
	remove("sell.dat");
	fflush(stdin);
	getch();
}

/*  ADT for Add_Client(FILE *cfp)
Purpose        : To Add Client into file  
Pre-Condition  : File must be open
Input          : cfp(FILE)
Output         : None
Post-Condition : client should be added
*/

void Add_Client(FILE *cfp)
{
	char ch;
	printf("\033[0m");
	cls();
	int i,j,k=3;
	time_t t= time(NULL);
	struct tm tm = *localtime(&t);
	printf("\033[0m");
	do
	{
		cls();
		fseek(cfp,0,2) ;
		gotoxy(20,6);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t   \xb2\xb2\033[1;33m  Enter client name  : \033[0m  ");
		gotoxy(20,8);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t   \xb2\xb2\033[1;33m  Enter mobile no.   : \033[0m \n");
		gotoxy(20,10);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t   \xb2\xb2 \033[1;33m Enter address      : \033[0m \n");
		gotoxy(20,12);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t   \xb2\xb2 \033[1;33m Enter city         :  \033[0m   \n");
		gotoxy(20,14);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		i=5;
		for(j=0;j<4;j++)
		{
			gotoxy(68,i+=2);
			printf("\xb2\xb2");
		}
		printf("\033[0m");
		gotoxy(45,7);
		char cname[SIZE],cnum[SIZE];
		fflush(stdin);
		Read_String(cname);
		gotoxy(45,9);
		fflush(stdin);
		Read_Number(cnum);
//		printf("  %d",Client_Status(cfp,cname,cnum));
		if(Client_Status(cfp,cname,cnum)==1)
		{
			cls();
			printf("\n\n\n\n\t\t");
			for(i=0;i<25;i++)
			printf("\xb2\xb2");
			printf("\n\t\t\xb2\xb2 \t      Client already exist \t\t\xb2\xb2\n\t\t");
			for(i=0;i<25;i++)
			printf("\xb2\xb2");
			getch();
			return;
		}
		strcpy(client.name,cname);
		strcpy(client.mob_no,cnum);
		gotoxy(45,11);
		fflush(stdin);
		Read_String(client.address);
		gotoxy(45,13);
		fflush(stdin);
		Read_String(client.city);
		fwrite(&client,sizeof(client) ,1,cfp);
		cls();
		SetColor1(5);
		printf("\n\n\n\n\n\n\n\t\t");
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2 Client successfully added \t\t\t \xb2\n\t\t");
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2 Do you want to add client again(y/n) : \t \xb2\n\t\t");
		for(j=0;j<50;j++)
			printf("\xb2");
		fflush(stdin);
		gotoxy(58,11);
		ch=getche();
	}while(ch=='y'||ch=='Y');
}/* End of Add_client() */

/*  ADT for Update_Client(FILE *cfp)
Purpose        : To update Client details   
Pre-Condition  : File must be open and client available 
Input          : cfp(FILE)
Output         : None
Post-Condition : client should be modified
*/

void Update_Client(FILE *cfp)
{
	cls();
	int i,k=3,j;
	char name [50 ];
	long size=sizeof(client) ;
	printf("\n\n\t\t  \033[1;31m");
	for(i=0;i<46;i++)
		printf("\xb2");
		printf("\n\t\t  \xb2\033[2;47m               UPDATE CLIENT                \033[0m\033[1;31m\xb2\n\t\t  ");
		for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");
	printf("\n\n\t");
	SetColor1(7);
	for(i=0;i<63;i++)
		printf("\xb2");
	printf(" \n\t\xb2 Enter the name of client to be modified :                   \xb2\n\t");
	for(i=0;i<63;i++)
		printf("\xb2");
	gotoxy(52,8);
	scanf("%s",name) ;
	if(Search_Client(cfp,name)==1)
	{
		cls();
		printf("\033[1;31m");
		printf("\n\t\t   ");
		for(i=0;i<50;i++)
			printf("\xb2");
		printf("\n\t\t   \xb2\033[2;47m                 ENTER NEW DATA                 \033[0m\033[1;31m\xb2\n\t\t   ");
		for(i=0;i<50;i++)
			printf("\xb2");
		printf("\033[0m");
		gotoxy(10,4);
		gotoxy(20,8);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t   \xb2\xb2\033[1;33m    Enter client name  : \033[0m\n\t\t   ");
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t   \xb2\xb2\033[1;33m    Enter mobile no.   :  \033[0m\n\t\t   ");
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t   \xb2\xb2 \033[1;33m   Enter address      :  \033[0m\n\t\t   ");
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t   \xb2\xb2  \033[1;33m  Enter city         :  \033[0m\n\t\t   ");
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		i=7;
		for(j=0;j<4;j++)
		{
			gotoxy(68,i+=2);
			printf("\xb2\xb2");
		}
		printf("\033[0m");
		gotoxy(46,9);
		Read_String(client.name);
		fflush(stdin);
		gotoxy(46,11);
		fflush(stdin);
		Read_Number(client.mob_no);
		fflush(stdin);
		gotoxy(46,13);
		fflush(stdin);
		Read_String(client.address);
		gotoxy(46,15);
		fflush(stdin);
		Read_String(client.city);
		fseek(cfp,-size,1);
		fwrite(&client,sizeof(client) ,1,cfp);
		cls();
		gotoxy(1,8);
		printf("\n\t\t\033[1;31m");
		for(i=0;i<50;i++)
			printf("\xb2");
		printf("\n\t\t\xb2\033[2;47m        Record successfully modified            \033[0m\033[1;31m\xb2\n\t\t");
		for(i=0;i<50;i++)
			printf("\xb2");
		
	}
	else
	{
		cls();
		printf("\n\n\n\n\n\n\t\t");
		for(i=0;i<55;i++)
			printf("\xb2");
		printf("\n\t\t\xb2\tClient not available \t\t\t      \xb2\n");
		printf("\t\t");
		for(i=0;i<55;i++)
			printf("\xb2");
		printf("\n\t\t\xb2       Press any key to continue...............      \xb2\n\t\t");
		for(i=0;i<55;i++)
			printf("\xb2");
	}
	fflush(stdin);
	printf("\033[0m");
	getch();

}/*End of Update_Client(FILE *cfp) */

/*  ADT for Delete_Client(FILE *cfp)
Purpose        : To delete Client from file  
Pre-Condition  : File must be open and client available
Input          : cfp(FILE)
Output         : None
Post-Condition : client shpould removed from file
*/

void Delete_Client(FILE *cfp)
{
	int i;
	FILE *fptmp;
	char ch;
	char name[20] ;
	cls();
	printf("\n\n\t\t\033[1;31m");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\033[2;47m                DELETE CLIENT               \033[0m\033[1;31m\xb2\n\t\t");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");
	SetColor1(7);
	printf("\n\n\t");
	for(i=0;i<67;i++)
		printf("\xb2");
	printf ("\n\t\xb2 Enter the name of client to be deleted from database :          \xb2\n\t" ) ;
	for(i=0;i<67;i++)
		printf("\xb2");
	gotoxy(65,8);
	Read_String(name);
	if(Search_Client(cfp,name)==0)
	{
		printf("\n\t\t\xb2 client %s is not available...........         \n\t\t",name);
		for(i=0;i<50;i++)
			printf("\xb2");
		printf("\n\t\t\xb2 press any key to continue..............        \xb2\n\t\t");
		for(i=0;i<50;i++)
			printf("\xb2");
		gotoxy(66,10);
		printf("\xb2");
		fflush(stdin);
		getch();
		return;
	}

	fptmp=fopen( "tempfile.dat", "wb");
	rewind(cfp);
	while(fread(&client, sizeof(client) ,1, cfp) ==1)
	{
		if (strcmp(name,client.name) !=0)
			fwrite(&client,sizeof(client) ,1,fptmp);
	}
	fclose(cfp) ;
	fclose(fptmp) ;
	remove("client.dat") ;
	rename("tempfile.dat", "client.dat");
	printf("\n\t\t\xb2 Record successfully deleted...............     \xb2\n\t\t");
	for(i=0;i<50;i++)
		printf("\xb2");
	printf("\n\t\t\xb2 press any key to continue..............        \xb2\n\t\t");
	for(i=0;i<50;i++)
		printf("\xb2");
	cfp=fopen ("client.dat","rb+") ;
	fflush(stdin);
	getch();
}/*End of delete_client( )*/

/*  ADT for Client_List(FILE *cfp)
Purpose        : To List all client 
Pre-Condition  : File must be open
Input          : cfp(FILE)
Output         : None
Post-Condition : None
*/

void Client_List(FILE *cfp)
{
	int i;
	rewind (cfp) ;
	cls();
	printf("\n\n\t\t\033[0m\033[6;35m");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\033[2;47m                 CLIENT LIST                \033[0m\033[6;35m\xb2\n\t\t");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");
	SetColor1(7);
	printf("\n\n  \033[1;31m");
	for(i=0;i<75;i++)
		printf("\xb2");
		int p=10;
	printf("\n  \xb2\033[7;44m   NAME                MOB NO.          ADDRESS         CITY             \033[0m\033[1;31m\xb2\033[0m\n  ");
	for(i=0;i<75;i++)
		printf("\xb2");
	printf("\033[1;35m");
	while(fread(&client,sizeof(client) ,1,cfp)!=0)
	{
		printf("\n  \xb2  \033[1;37m%-20s",client.name) ;
		printf("%-10s\t   ",client.mob_no);
		printf("%-16s",client.address) ;
		printf("%s\033[1;35m",client.city);
		gotoxy(77,p);
		printf("\xb2\n  ");
		p+=2;
		fflush(stdin);
		for(i=0;i<75;i++)
			printf("\xb2");
	}
	printf (" \n");
	fflush(stdin);
	getch();
	
}/* End of client_List(FILE *fp) */

/*  ADT for Add_Report_List(FILE *cfp)
Purpose        : To Display all added medecine with date 
Pre-Condition  : File must be open
Input          : cfp(FILE)
Output         : None
Post-Condition : None
*/

void Add_Report_List(FILE *rfp)
{
	int i;
	rewind (rfp) ;
	cls();
	printf("\n\n\t\t\033[1;31m");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\033[2;47m           ADD MEDECINE REPORT              \033[0m\033[1;31m\xb2\n\t\t");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");
	SetColor1(7);
	printf("\n\n\033[1;31m");
	for(i=0;i<78;i++)
		printf("\xb2");
		int p=10;
	printf("\n\xb2\033[7;44m NAME       COPIES   COST     COMPANY_NAME   EXPIRY_DATE    INSERTION TIME  \033[0m\033[1;31m\xb2\033[0m\n");
	for(i=0;i<78;i++)
		printf("\xb2");
	printf("\033[1;35m");
	while(fread(&med,sizeof(med) ,1,rfp)!=0)
	{
		printf("\n\xb2\033[1;37m%-12s",med.name) ;
		printf ("%-8d",med.ncopies);
		printf("%.2f\t",med.cost) ;
		printf(" %-12s",med.company_name);
		printf("%d/%d/%-8d",med.date.dd,med.date.mm,med.date.yyyy);
		printf(" %d/%d/%d::%d:%d\033[1;35m",med.Time.dd,med.Time.mm,med.Time.yyyy,med.Time.hour,med.Time.min);
		fflush(stdin);
		gotoxy(78,p);
		printf("\xb2\n");
		p+=2;
		fflush(stdin);
		for(i=0;i<78;i++)
			printf("\xb2");
	}
	printf (" \n");
	fflush(stdin);
	getch();
}  /* End of Add_Report_Menu()  */

/*  ADT for Sell_Roport_List(FILE *cfp)
Purpose        : To Display all Sell meecines
Pre-Condition  : File must be open
Input          : cfp(FILE)
Output         : None
Post-Condition : None
*/

void Sell_Report_List()
{
	int i;
	cls();
	FILE *srfp;
	printf("\033[0m");
	cls();
	srfp=fopen("sellreport.dat","r");
	rewind (srfp) ;
	cls();
	printf("\n\n\t\t\033[1;31m");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\033[2;47m           SELL MEDECINE REPORT             \033[0m\033[1;31m\xb2\n\t\t");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");
	SetColor1(7);
	printf("\n\n\033[1;31m");
	for(i=0;i<78;i++)
		printf("\xb2");
	printf("\n\xb2\033[7;44m CLIENT         TABLET   COPIES COST    EXPIRY_DATE     SELLING DATE/TIME   \033[0m\033[1;31m\xb2\033[0m\n");
	for(i=0;i<78;i++)
		printf("\xb2");
	printf("\033[1;35m");
	int p=10;
	while(fread(&sellreport,sizeof(sellreport) ,1,srfp)!=0)
	{
		printf("\n\xb2 \033[1;37m%-15s",sellreport.clientname) ;
		printf ("%-10s",sellreport.medname);
		printf("%d\t",sellreport.copies) ;
		printf(" %.2f\t",sellreport.cost);
		printf("%d/%d/%d\t",sellreport.date.dd,sellreport.date.mm,sellreport.date.yyyy);
		printf(" %d/%d/%d::%d:%d:%d\033[1;35m",sellreport.Time.dd,sellreport.Time.mm,sellreport.Time.yyyy,sellreport.Time.hour,sellreport.Time.min,sellreport.Time.sec);
		fflush(stdin);
		gotoxy(78,p);
		printf("\xb2\n");
		p+=2;
		fflush(stdin);
		for(i=0;i<78;i++)
			printf("\xb2");
	}
	printf (" \n");
	fflush(stdin);
	getch();
}

/*  ADT for Add_Company(FILE *cpfp)
Purpose        : To Add Company into file  
Pre-Condition  : File must be open
Input          : cpfp(FILE)
Output         : None
Post-Condition : Company should be added
*/

void Add_Company(FILE *cpfp)
{
	char ch;
	printf("\033[0m");
	cls();
	cls();
	cls();
	cls();
	int i,j,k=3;
	printf("\033[0m");
	do
	{
		cls();
		fseek(cpfp,0,2) ;
		printf("\n\n\n\n\n\t\t");
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2  \033[1;33mEnter company name    : \033[0m\n\t\t");
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2  \033[1;33mEnter company address : \033[0m\n\t\t");
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2  \033[1;33mEnter contect person  : \033[0m\n\t\t");
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2\xb2  \033[1;33mEnter contect number  :\033[0m \n\t\t");
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		i=5;
		for(j=0;j<4;j++)
		{
			gotoxy(65,i+=2);
			printf("\xb2\xb2");	
		}
		printf("\033[0m");
		gotoxy(44,7);
		fflush(stdin);
		Read_String(company.name);
		gotoxy(44,9);
		fflush(stdin);
		Read_String(company.address);
		gotoxy(44,11);
		fflush(stdin);
		Read_String(company.contect_person);
		gotoxy(44,13);
		fflush(stdin);
		Read_Number(company.mob_no);
		fwrite(&company,sizeof(company),1,cpfp);
		cls();
		SetColor1(7);
		printf("\n\n\n\n\n\n\n\t\t");
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2 company successfully added \t\t\t \xb2\n\t\t");
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\xb2 Do you want to add company again(y/n) : \t \xb2\n\t\t");
		for(j=0;j<50;j++)
			printf("\xb2");
		fflush(stdin);
		gotoxy(60,11);
		ch=getche();
	}while(ch=='y'||ch=='Y');
}/* end of add_company()*/

/*  ADT for Delete_Company(FILE *cpfp)
Purpose        : To Delete existing  Company from file  
Pre-Condition  : File must be open and company available
Input          : cpfp(FILE)
Output         : None
Post-Condition : Company should be Deleted
*/

void Delete_Company(FILE *cpfp)
{
	int i;
	FILE *fptmp;
	char ch;
	char name[20] ;
	cls();
	printf("\n\n\t\t\033[1;31m");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\033[2;47m                DELETE COMPANY              \033[0m\033[1;31m\xb2\n\t\t");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");
	SetColor1(7);
	printf("\n\n\n\n   ");
	for(i=0;i<72;i++)
		printf("\xb2");
	printf ("\n   \xb2\xb2 Enter company name to delete from database :      \t\t \xb2\xb2\n   " ) ;
	for(i=0;i<72;i++)
		printf("\xb2");
	gotoxy(52,10);
	Read_String(name);
	if(Search_Company(cpfp,name)==0)
	{
		printf("\n   \xb2\xb2 Client %s is not available...............         \n   ",name);
		for(i=0;i<72;i++)
			printf("\xb2");
		printf("\n   \xb2\xb2 Press any key to continue..............       \t\t\t \xb2\xb2\n   ");
		for(i=0;i<72;i++)
			printf("\xb2");
		gotoxy(74,12);
		printf("\xb2\xb2");
		fflush(stdin);
		getch();
		return;
	}

	fptmp=fopen( "tempfile.dat", "wb");
	rewind(cpfp);
	while(fread(&company, sizeof(company) ,1, cpfp) ==1)
	{
		if (strcmp(name,company.name) !=0)
			fwrite(&company,sizeof(company) ,1,fptmp);
	}
	fclose(cpfp) ;
	fclose(fptmp) ;
	remove("company.dat") ;
	rename("tempfile.dat", "company.dat");
	printf("\n   \xb2\xb2 Record successfully deleted...............       \t\t\t \xb2\xb2\n   ");
	for(i=0;i<72;i++)
		printf("\xb2");
	printf("\n   \xb2\xb2 press any key to continue..............        \t\t         \xb2\xb2\n   ");
	for(i=0;i<72;i++)
		printf("\xb2");
	cpfp=fopen ("company.dat","rb+") ;
	fflush(stdin);
	getch();
}/*End of delete_company() )*/

/*  ADT for Update_Company(FILE *cpfp)
Purpose        : To Update existing Company
Pre-Condition  : File must be open
Input          : cpfp(FILE)
Output         : None
Post-Condition : Cpmpany should be Updated
*/

void Update_Company(FILE *cpfp)
{
	cls();
	int i,k=3,j;
	char name [50 ];
	long size=sizeof(company) ;
	printf("\n\n\t\t\033[1;31m");
	for(i=0;i<46;i++)
		printf("\xb2");
		printf("\n\t\t\xb2\033[2;47m            UPDATE COMPANY                  \033[0m\033[1;31m\xb2\n\t\t");
		for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");
	printf("\n\n\t");
	SetColor1(7);
	for(i=0;i<63;i++)
		printf("\xb2");
	printf(" \n\t\xb2 Enter the name of the company to be modified :              \xb2\n\t");
	for(i=0;i<63;i++)
		printf("\xb2");
	gotoxy(57,8);
	scanf("%s",name) ;
	if(Search_Company(cpfp,name)==1)
	{
		cls();
		printf("\n\t\t\033[1;31m");
		for(i=0;i<50;i++)
			printf("\xb2");
		printf("\n\t\t\xb2\033[2;47m                 ENTER NEW DATA                 \033[0m\033[1;31m\xb2\n\t\t");
		for(i=0;i<50;i++)
			printf("\xb2");
		printf("\n\n\n\t     ");
		SetColor1(k);
		for(j=0;j<56;j++)
			printf("\xb2");
		printf("\n\t     \xb2\xb2\033[1;33m  Enter company name    : \033[0m \n\t     ");
		SetColor1(k);
		for(j=0;j<56;j++)
			printf("\xb2");
		printf("\n\t     \xb2\xb2 \033[1;33m Enter company address : \033[0m \n\t     ");
		SetColor1(k);
		for(j=0;j<56;j++)
			printf("\xb2");
		printf("\n\t     \xb2\xb2 \033[1;33m Enter contect person  :\033[0m  \n\t     ");
		SetColor1(k);
		for(j=0;j<56;j++)
			printf("\xb2");
		printf("\n\t     \xb2\xb2\033[1;33m  Enter contect number  :\033[0m  \n\t     ");
		SetColor1(k);
		for(j=0;j<56;j++)
			printf("\xb2");
		i=6;
		for(j=0;j<4;j++)
		{
			gotoxy(68,i+=2);
			printf("\xb2\xb2");
		}
		printf("\033[0m");
		gotoxy(42,8);
		fflush(stdin);
		Read_String(company.name);
		gotoxy(42,10);
		fflush(stdin);
		Read_String(company.address);
		gotoxy(42,12);
		fflush(stdin);
		Read_String(company.contect_person);
		gotoxy(42,14);
		fflush(stdin);
		Read_Number(company.mob_no);
		fseek(cpfp,-size,1);
		fwrite(&company,sizeof(company),1,cpfp);
		cls();
		gotoxy(1,8);
		printf("\n\t\t\033[1;31m");
		for(i=0;i<50;i++)
			printf("\xb2");
		printf("\n\t\t\xb2\033[2;47m        Record successfully modified            \033[0m\033[1;31m\xb2\n\t\t");
		for(i=0;i<50;i++)
			printf("\xb2");
		
	}
	else
	{
		printf("\n\t\xb2   Company not available .............\t\t\t      \xb2\n");
		printf("\t");
		for(i=0;i<63;i++)
			printf("\xb2");
		printf("\n\t\xb2   Press any key to continue...............\t\t      \xb2\n\t");
		for(i=0;i<63;i++)
			printf("\xb2");
	}
	fflush(stdin);
	printf("\033[0m");
	getch();

}/*End of Update_Client(FILE *cfp) */

/*  ADT for Company_List(FILE *cpfp)
Purpose        : To List all company  
Pre-Condition  : File must be open
Input          : cpfp(FILE)
Output         : None
Post-Condition : None
*/

void Company_List(FILE *cpfp)
{
	int i;
	rewind (cpfp) ;
	cls();
	printf("\n\n\t\t\033[1;31m");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\033[2;47m                 COMPANY DETAILS            \033[0m\033[1;31m\xb2\n\t\t");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");
	SetColor1(7);
	printf("\n\n  \033[1;31m");
	for(i=0;i<75;i++)
		printf("\xb2");
		int p=10;
	printf("\n  \xb2\033[7;44m  COMPANY_NAME       LOCATION        CONTECT PERSON        NUMBER        \033[0m\033[1;31m\xb2\033[0m\n  ");
	for(i=0;i<75;i++)
		printf("\xb2");
	printf("\033[1;35m");
	while(fread(&company,sizeof(company) ,1,cpfp)==1)
	{
		printf("\n  \xb2\xb2  \033[1;37m%-20s",company.name);
		printf("%-15s",company.address);
		printf("%-20s",company.contect_person);
		printf("%-10s\033[1;35m",company.mob_no);
		gotoxy(76,p);
		printf("\xb2\xb2\n  ");
		p+=2;
		fflush(stdin);
		for(i=0;i<75;i++)
			printf("\xb2");
	}
	printf (" \n");
	fflush(stdin);
	getch();

} /*End of company_1ist( )*/

/*  ADT for Search(FILE *fp)
Purpose        : To Search a medecine is available or not
Pre-Condition  : File must be open
Input          : fp(FILE)
Output         : flag
Post-Condition : none
*/

int Search(FILE *fp,char *name)
{
	unsigned flag=0;
	rewind (fp) ;
	while(fread(&med,sizeof(med) ,1,fp)==1)
	{
		if(Match_String(name,med.name)==1)
		{
			flag=1;
			break;
		}
	}
	return flag;
}	/*End of search( )*/

/*  ADT for Search_Client(FILE *cfp , char *name)
Purpose        : To Search a client is available or not
Pre-Condition  : File must be open
Input          : cfp(FILE) , name (char)
Output         : flag
Post-Condition : None
*/

int Search_Client(FILE *cfp,char *name)
{
	unsigned flag=0;
	rewind (cfp) ;
	while(fread(&client,sizeof(client) ,1,cfp)==1)
	{
		if(Match_String(name,client.name)==1)
		{
			flag=1;
			break;
		}
	}
	return flag;
}	/*End of search_client( )*/

int Client_Status(FILE *cfp,char *name,char *num)
{
	unsigned flag=0;
	rewind (cfp) ;
	while(fread(&client,sizeof(client) ,1,cfp)==1)
	{
		if(Match_String(name,client.name)==1)
		{
			if(Match_String(num,client.mob_no)==1){
				flag=1;
			}
			else
				printf("0");
			break;
		}
	}
	return flag;
}	/*End of search1( )*/

/*  ADT for Search_Company(FILE *cpfp , char *name)
Purpose        : To Search a Company is available or not
Pre-Condition  : File must be open
Input          : cpfp(FILE)
Output         : flag
Post-Condition : None
*/

int Search_Company(FILE *cpfp,char *name)
{
	unsigned flag=0;
	rewind (cpfp) ;
	while(fread(&company,sizeof(company) ,1,cpfp)==1)
	{
		if(Match_String(name,company.name)==1)
		{
			return 1;
			break;
		}
	}
	return flag;
}	/*End of search_company( )*/

/*  ADT for Is_Valid( int dd , int mm , int yyyy)
Purpose        : TO Check a date is valid or not
Pre-Condition  : None
Input          : dd/mm/yyyy(date)
Output         : status flag
Post-Condition : None
*/

int Is_Valid(int dd,int mm,int yyyy)
{
	int flag=0;
	if(yyyy>0)
	{
		if(Is_Leap(yyyy)==1)
		{
			if(mm>=1&&mm<=12)
			{
				if(mm==2)
				{
					if(dd>=1&&dd<=29)
					flag=1;
				}
				else if(mm==4||mm==6||mm==9||mm==11)
				{
					if(dd>=1&&dd<=30)
					flag=1;
				}
				else
				if(dd>=1&&dd<=31)
				flag=1;
			}/* End of if*/
		}/* End of if*/
		if(Is_Leap(yyyy)==0)
		{
			if(mm>=1&&mm<=12)
			{
				if(mm==2)
				{
					if(dd>=1&&dd<=28)
					flag=1;
				}
				else if(mm==4||mm==6||mm==9||mm==11)
				{
					if(dd>=1&&dd<=30)
					flag=1;
				}
				else
				if(dd>=1&&dd<=31)
				flag=1;
			}
		}
	}
	printf("\n");
	return flag;
}/* End of is_valid(int dd,int mm,int yyyy)*/

/*  ADT for Is_Leap(int yyyy)
Purpose        : To check a year is leap or not
Pre-Condition  : None
Input          : yyyy(int)
Output         : Status flag
Post-Condition : None
*/

int Is_Leap(int yyyy)
{
	 int flag=0;
	if(yyyy==1752)
	{
		if(yyyy%4==0)
		{
			flag=1;
		}
	}
	if(yyyy%100==0)
	{
		if(yyyy%400==0)
		{
			flag=1;
		}
	}
	else
	{
		if(yyyy%4==0)
		{
			flag=1;
		}
	}
	return flag;
}/* End of is_leap(int yyyy) */

/*  ADT for Sign_In(int time)
Purpose        : TO Sign in 
Pre-Condition  : User id and password must valid
Input          : time (int)
Output         : status (flag)
Post-Condition : all menu  will be display
*/

int Sign_In(int time)
{
	int count,i,j;
	printf("\033[0m");
	SetColor1(1);
	for(count=0;count<80;count++)
		printf("\xb2");
	printf("\n");	
	for(count=0;count<80;count++)
		printf("\xb2");
	printf("\n");
	SetColor1(3);
	for(count=0;count<29;count++)
		printf("\xb2");
	printf("********************");
	for(count=0;count<31;count++)
		printf("\xb2");
		printf("\n");
	for(count=0;count<29;count++)
		printf("\xb2");
	printf("*\033[7;37mWELCOME TO SIGN IN\033[0m");
	SetColor1(3);
	printf("*");
	for(count=0;count<31;count++)
		printf("\xb2");
	printf("\n");
	for(count=0;count<29;count++)
		printf("\xb2");
	printf("********************");
	for(count=0;count<31;count++)
		printf("\xb2");
	SetColor1(13);
	for(count=0;count<80;count++)
		printf("\xb2");
	printf("\n");
	for(count=0;count<80;count++)
		printf("\xb2");
	for(i=0;i<10;i++)
	{
		for(j=0;j<12;j++)
		{
			printf("\xb2");
		}
		printf("\n");
	}
	int k=7;
	for(i=0;i<10;i++)
	{
		k++;
		gotoxy(69,k);
		for(j=0;j<12;j++)
		{
			printf("\xb2");
		}
		printf("\n");
	}
	gotoxy(0,18);
	SetColor1(13);
	for(count=0;count<80;count++)
		printf("\xb2");
	for(count=0;count<80;count++)
		printf("\xb2");
	for(count=0;count<80;count++)
		printf("\xb2");
	FILE *ufp;
	int flag=0;
	i=0;
	char userID[SIZE],password[SIZE],ch;
	ufp=fopen("user.dat","rb+");
	if(ufp==NULL)
	{
		printf("\n\n\n\t\t\t\t file is not found");
		exit(1);
	}
	fflush(stdin);
	gotoxy(35,8);
	printf("\n\t\t\t\t\033[6;31m  -------------------------------\n\t\tEnter user id --> |\t\t\t\t|\n\t\t\t\t  -------------------------------\033[0m");
	gotoxy(36,10);
	//scanf("%[^\n]s",userID);
	Read_String(userID);
	
	while(fread(&sign,sizeof(sign),1,ufp)==1)
	{
		if(strcmp(sign.userid,userID)==0)
		{
			//flag=1;
			fflush(stdin);
			gotoxy(38,12);
			printf("\n\t\t\t\t\033[6;31m   ------------------------------\n\t\tEnter password --> |\t\t\t\t|\n\t\t\t\t   ------------------------------\033[0m");
			gotoxy(37,14);
			Read_Password(password);
			if(strcmp(password,sign.password)==0)
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	{
		system("loginsuccess.vbs");
		Welcome(sign.name);
	}
	if(flag==0&&time==2)
	{
		cls();
		char  forgot;
		printf("\n\n\n\n\n\n\t\t\033[6;37m");
		for(i=0;i<18;i++)
			printf("\xb2\xb2\xb2");
		printf("\n\t\t\xb2\033[1;32m Do you want to forget password (y/n)  :            \033[0m\033[6;37m\xb2\n\t\t");
		for(i=0;i<18;i++)
			printf("\xb2\xb2\xb2");
		gotoxy(60,8);
		fflush(stdin);
		forgot = getche();
		if(forgot=='y'||forgot=='Y')
		{
			flag=Forgot(ufp,userID);
		}
	}
	fclose(ufp);
	return flag;

}/* End od Sign_In() */

/*  ADT for Sign_Up()
Purpose        : To Sign up a user 
Pre-Condition  : None
Input          : None
Output         : Status(user added or not)
Post-Condition : user added
*/

void Sign_Up()
{
	int i,j,k=3;
	cls();
	char password[SIZE],ch;
	printf("\t\t\033[1;31m");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\033[2;47m           WELCOME TO SIGN UP               \033[0m\033[1;31m\xb2\n\t\t");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");	FILE *ufp;
	ufp=fopen("user.dat","rb+");
	if(ufp==NULL)
	{
		ufp=fopen("user.dat","wb+");
		if(ufp==NULL)
		{
			printf("\n\t\t\t\t file is not found");
			exit(1);
		}
	}
	fflush(stdin);
	fseek(ufp,0,2);
	printf("\n\t ");
	SetColor1(k);
	for(j=0;j<58;j++)
		printf("\xb2");
	printf("\n\t \xb2\xb2\033[1;33m    Enter new user id     :\033[0m \n\t ");
	SetColor1(k);
	for(j=0;j<58;j++)
		printf("\xb2");
	printf("\n\t \xb2\xb2\033[1;33m    Enter password        :\033[0m  \n\t ");
	SetColor1(k);
	for(j=0;j<58;j++)
		printf("\xb2");
	printf("\n\t \xb2\xb2\033[1;33m    Confirm password      :\033[0m \n\t ");
	SetColor1(k);
	for(j=0;j<58;j++)
		printf("\xb2");
	printf("\n\t \xb2\xb2\033[1;33m    Enter your name       :\033[0m \n\t ");
	SetColor1(k);
	for(j=0;j<58;j++)
		printf("\xb2");
	printf("\n\t \xb2\xb2\033[1;33m    Enter mobile number   :\033[0m \n\t ");
	SetColor1(k);
	for(j=0;j<58;j++)
		printf("\xb2");
	printf("\n\t \xb2\xb2\033[1;33m    Enter city            :\033[0m \n\t ");
	SetColor1(k);
	for(j=0;j<58;j++)
		printf("\xb2");
	printf("\n\t \xb2\xb2\033[1;33m    Enter DOB(dd/mm/yyyy) :\033[0m \n\t ");
	SetColor1(k);
	for(j=0;j<58;j++)
		printf("\xb2");
	printf("\n\t \xb2\xb2\033[1;33m    Enter Gender (M/F/O)  :\033[0m \n\t ");
	SetColor1(k);
	for(j=0;j<58;j++)
		printf("\xb2");
	i=3;
	for(j=0;j<8;j++)
	{
		gotoxy(66,i+=2);
		printf("\xb2\xb2");
	}
	printf("\033[0m");
	char uid[SIZE];
	gotoxy(40,5);
	Read_String(uid);
	if(Search_User(ufp,uid)==1)
	{
		cls();
		printf("\n\n\n\n\t\t");
		for(i=0;i<25;i++)
		printf("\xb2\xb2");
		printf("\n\t\t\xb2\xb2 \t       User already exist \t\t\xb2\xb2\n\t\t");
		for(i=0;i<25;i++)
		printf("\xb2\xb2");
		getch();
		return;
	}
	strcpy(sign.userid,uid);
	for(i=0;i<=2;i++)
	{
		int l=0;
		int back=0;
		fflush(stdin);
		gotoxy(40,7);
		Read_Password(password);
		for(j=0;j<3;j++)
		{
			int l=0;
			fflush(stdin);
			gotoxy(40,9);
			Read_Password(sign.password);
			if(strcmp(sign.password,password)==0)
			{
				back=1;
				break;
			}
			else
			{
				gotoxy(40,9);
				printf("                       ");
			}
		}
		if(back==0&&i==2)
		{
			cls();
			SetColor1(7);
			int i;
			printf("\n\n\n\n\t\t\t\033[0m");
			for(i=0;i<41;i++)
			printf("\xb2");
			printf("\n\t\t\t\xb2\033[6;37m Your password is not matchihng \033[0m\t\xb2\n\t\t\t");
			for(i=0;i<41;i++)
			printf("\xb2");
			printf("\n\t\t\t\xb2\033[6;37m Make sure your password and try again\033[0m\t\xb2\n\t\t\t");
			for(i=0;i<41;i++)
			printf("\xb2");
			fflush(stdin);
			getch();
			return;
		}
		if(j==3)
		{
			gotoxy(40,7);
			printf("                       ");
		}
		if(back==1)
		{
			break;
		}
	}
	fflush(stdin);
	gotoxy(40,11);
	Read_String(sign.name);
	fflush(stdin);
	gotoxy(40,13);
	Read_Number(sign.number);
	fflush(stdin);
	gotoxy(40,15);
	Read_String(sign.city);
	while(1)
	{
		gotoxy(40,17);
		sign.dob.dd=Read_Num();
		sign.dob.mm=Read_Num();
		sign.dob.yyyy=Read_Num();
		if(Is_Valid(sign.dob.dd,sign.dob.mm,sign.dob.yyyy)!=1)
		{
			gotoxy(40,17);
			printf("                       ");
			continue;
		}	
		else
			break;
	}
	fflush(stdin);
	gotoxy(40,19);
	//Read_String(sign.gender);
	sign.gender=getch();
	printf("%c",sign.gender);
	getch();
//							PASSWORD FORFOT OPTION

	cls();
	printf("\n\n\t\t    \033[0m\033[6;35m");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\n\t\t    \xb2\033[2;47m      QUESTIONS FOR PASSWORD FORGOT         \033[0m\033[6;35m\xb2\n\t\t    ");
	for(i=0;i<46;i++)
		printf("\xb2");
		
	printf("\033[0m");
	gotoxy(17,8);
	SetColor1(k);
	for(j=0;j<53;j++)
		printf("\xb2");
	printf("\n\t\t\xb2\xb2\033[1;33m  Enter your nickname    : \033[0m\n\t\t");
	SetColor1(k);
	for(j=0;j<53;j++)
		printf("\xb2");
	printf("\n\t\t\xb2\xb2\033[1;33m  Enter DOB(dd/mm/yyyy)  :\033[0m\n\t\t");
	SetColor1(k);
	for(j=0;j<53;j++)
		printf("\xb2");
	printf("\n\t\t\xb2\xb2\033[1;33m  Enter your school name :\033[0m\n\t\t");
	SetColor1(k);
	for(j=0;j<53;j++)
		printf("\xb2");
	gotoxy(68,9);
		printf("\xb2\xb2");
	gotoxy(68,11);
		printf("\xb2\xb2");
	gotoxy(68,13);
		printf("\xb2\xb2");
	printf("\033[0m");
	gotoxy(45,9);
	fflush(stdin);
	Read_String(sign.forgot.nickname);
	fflush(stdin);
	while(1)
	{
		gotoxy(45,11);
		sign.forgot.DOB.dd=Read_Num();
		sign.forgot.DOB.mm=Read_Num();
		sign.forgot.DOB.yyyy=Read_Num();
		if(Is_Valid(sign.forgot.DOB.dd,sign.forgot.DOB.mm,sign.forgot.DOB.yyyy)!=1)
		{
			gotoxy(45,11);
			printf("                      ");
			continue;
		}	
		else
			break;
	}
	gotoxy(45,13);
	fflush(stdin);
	Read_String(sign.forgot.School);
	fseek(ufp,0,2);
	fwrite(&sign,sizeof(sign),1,ufp);
	cls();
	SetColor1(5);
	printf("\n\n\n\n\n\n\n\t\t");
	for(j=0;j<50;j++)
		printf("\xb2");
	printf("\n\t\t\xb2 Sign up successful \t\t\t\t \xb2\n\t\t");
	for(j=0;j<50;j++)
		printf("\xb2");
	printf("\n\t\t\xb2 press any key to continue .................... \xb2\n\t\t");
	for(j=0;j<50;j++)
		printf("\xb2");
	fflush(stdin);
	getch();
	fclose(ufp);
} /* End of sign_Up()*/

int Forgot(FILE *ufp,char uid[SIZE])
{
	int i,j,k=3;
	char nickname[SIZE],school[SIZE],password[SIZE],ch;
	DateType dob;
	int size=sizeof(sign);
	rewind(ufp);
	fread(&sign,sizeof(sign),1,ufp);
	if(Search_User(ufp,uid)==1)
	{
		cls();
		printf("\n\n\t\t\t    \033[0m\033[6;35m");
		for(i=0;i<46;i++)
			printf("\xb2");
		printf("\n\t\t\t    \xb2\033[2;47m              PASSWORD FORGOT               \033[0m\033[6;35m\xb2\n\t\t\t    ");
		for(i=0;i<46;i++)
			printf("\xb2");
		printf("\033[0m");
		printf("\n\n\n\t\t\t\033[10;41m******************************************************\033[0m");
		printf("\n\t\t\t\033[10;41m*\033[0m\033[7;34m****************************************************\033[0m\033[10;41m*");
		printf("\n\t\t\t\033[10;41m*\033[0m\033[7;34m*\033[0m\t\t\t\t\t\t    \033[7;34m*\033[0m\033[10;41m*");
		gotoxy(27,10);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\t\033[10;41m*\033[0m\033[7;34m*\033[0m\033[0m\033[1;33m    Enter your nickname    : \033[0m\t\t\t    \033[7;34m*\033[0m\033[10;41m*");
		printf("\n\t\t\t\033[10;41m*\033[0m\033[7;34m*\033[0m\t\t\t\t\t\t    \033[7;34m*\033[0m\033[10;41m*");
		gotoxy(27,12);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\t\033[10;41m*\033[0m\033[7;34m*\033[0m\033[0m\033[1;33m    Enter DOB(dd/mm/yyyy)  :\033[0m\t\t\t    \033[7;34m*\033[0m\033[10;41m*\n");
		printf("\t\t\t\033[10;41m*\033[0m\033[7;34m*\033[0m\t\t\t\t\t\t    \033[7;34m*\033[0m\033[10;41m*");
		gotoxy(27,14);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\t\033[10;41m*\033[0m\033[7;34m*\033[0m\033[0m\033[1;33m    Enter your school      :\033[0m\t\t\t    \033[7;34m*\033[0m\033[10;41m*\n");
		printf("\t\t\t\033[10;41m*\033[0m\033[7;34m*\033[0m\t\t\t\t\t\t    \033[7;34m*\033[0m\033[10;41m*");
		gotoxy(27,16);
		SetColor1(k);
		for(j=0;j<50;j++)
			printf("\xb2");
		printf("\n\t\t\t\033[10;41m*\033[0m\033[7;34m****************************************************\033[0m\033[10;41m*");
		printf("\n\t\t\t\033[10;41m******************************************************\033[0m");
		printf("\033[0m");
		gotoxy(55,11);
		fflush(stdin);
		Read_String(nickname);
		fflush(stdin);
		while(1)
		{
			gotoxy(55,13);
			dob.dd=Read_Num();
			dob.mm=Read_Num();
			dob.yyyy=Read_Num();
			if(Is_Valid(dob.dd,dob.mm,dob.yyyy)!=1)
			{
				gotoxy(55,13);
				printf("                      ");
				continue;
			}	
			else
				break;
		}
		gotoxy(55,15);
		fflush(stdin);
		Read_String(school);
		if(strcmp(sign.forgot.nickname,nickname)==0&&sign.dob.dd==dob.dd&&sign.dob.mm==dob.mm&&sign.dob.yyyy==dob.yyyy&&strcmp(sign.forgot.School,school)==0)
		{
			cls();
			printf("\n\n\n\t\t\t\033[6;37m");
			for(i=0;i<15;i++)
				printf("\xb2\xb2\xb2");
			printf("\n\t\t\t\xb2\033[1;32m Enter new password  :                     \033[0m\033[6;37m\xb2\n\t\t\t");
			for(i=0;i<15;i++)
				printf("\xb2\xb2\xb2");
			printf("\n\t\t\t\xb2\033[1;32m Confirm password    :                     \033[0m\033[6;37m\xb2\n\t\t\t");
			for(i=0;i<15;i++)
				printf("\xb2\xb2\xb2");
			for(i=0;i<=2;i++)
			{
				int l=0;
				int back=0;
				fflush(stdin);
				gotoxy(50,5);
				Read_Password(password);
				for(j=0;j<3;j++)
				{
					int l=0;
					fflush(stdin);
					gotoxy(50,7);
					Read_Password(sign.password);
					if(strcmp(sign.password,password)==0)
					{
						back=1;
						break;
					}
					else
					{
						gotoxy(50,7);
						printf("                       ");
					}
				}
				if(back==0&&i==2)
				{
					cls();
					SetColor1(7);
					int i;
					printf("\n\n\n\n\t\t\t\033[0m");
					for(i=0;i<41;i++)
					printf("\xb2");
					printf("\n\t\t\t\xb2\033[6;37m Your password is not matchihng \033[0m\t\xb2\n\t\t\t");
					for(i=0;i<41;i++)
					printf("\xb2");
					printf("\n\t\t\t\xb2\033[6;37m Make sure your password and try again\033[0m\t\xb2\n\t\t\t");
					for(i=0;i<41;i++)
					printf("\xb2");
					fflush(stdin);
					getch();
					return;
				}
				if(j==3)
				{
					gotoxy(50,5);
					printf("                       ");
				}
				if(back==1)
				{
					break;
				}
			}
			fseek(ufp,-size,1);
			fwrite(&sign,sizeof(sign),1,ufp);
			fflush(stdin);
			getch();
			return 1;
		}
		else
		{
			printf("Information not match");
		}
	}
	else
	{
		cls();
		printf("\n\n\n\t\t\t\033[6;37m");
		for(i=0;i<10;i++)
			printf("\xb2\xb2\xb2");
		printf("\n\t\t\t\xb2\033[1;32m       Invalid user id      \033[0m\033[6;37m\xb2\n\t\t\t");
		for(i=0;i<10;i++)
			printf("\xb2\xb2\xb2");
	}
	return 0;
}

int Delete_User()
{
	cls();
	FILE *ufp;
	FILE *fptmp;
	char uid[SIZE],ch;
	int i=0,j=0,flag=0;
	ufp=fopen("user.dat","rb+");
	if(ufp==NULL)
	{
		perror("\n Error in opening file ");
		return;
	}
	rewind(ufp);
	while(fread(&sign,sizeof(sign),1,ufp)==1)
	{
		j++;
	}
	printf("\n\n\t\t\033[1;31m");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\033[2;47m               DELETE USER                  \033[0m\033[1;31m\xb2\n\t\t");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");
	SetColor1(7);
	printf("\n\n   ");
	for(i=0;i<72;i++)
		printf("\xb2");
	printf ("\n   \xb2 Enter the user id to delete from database :                          \xb2 \n   " );
	for(i=0;i<72;i++)
		printf("\xb2");
	gotoxy(50,8);
	fflush(stdin);
	Read_String(uid);
	//scanf("%s",uid) ;
	if(Search_User(ufp,uid)!=1)
	{
		printf("\n\n\t\xb2 User Id %s not available...............         \n\t",uid);
		for(i=0;i<63;i++)
			printf("\xb2");
		printf("\n\t     \xb2 press any key to continue..............           \xb2\n\t     ");
		for(i=0;i<53;i++)
			printf("\xb2");
		gotoxy(71,10);
		printf("\xb2");
		fflush(stdin);
		getch();
		return;
	}
	
	if(j==1)
	{
		printf("\n\n   \xb2 WARNING\tWARNING\t\tWARNING..................\t\t  \xb2\n   ");
		for(i=0;i<72;i++)
			printf("\xb2");
		printf("\n   \xb2 you have only one user id  \t\t\t\t\t  \xb2\n   ");
		for(i=0;i<72;i++)
			printf("\xb2");
		printf("\n   \xb2 If you delete this user id then all dete will be delete\t\t  \xb2\n   ");
		for(i=0;i<72;i++)
			printf("\xb2");
		printf(" \n   \xb2 Are you sure do you want to delete(y/n) : \t\t\t\t  \xb2\n   ");
		for(i=0;i<72;i++)
			printf("\xb2");
		fflush(stdin);
		gotoxy(55,16);
		ch=getch();
		if(ch=='y'||ch=='Y')
		{
			flag=1;
		}
		else
		{
			return;
		}
	}
	fptmp=fopen( "tempfile.dat", "wb");
	rewind(ufp);
	while(fread(&sign, sizeof(sign) ,1, ufp) ==1)
	{
		if (strcmp(uid,sign.userid)!=0)
		{
			fwrite(&sign,sizeof(sign),1,fptmp);
		}
	}
	fclose(ufp);
	fclose(fptmp);
	remove("user.dat");
	remove("user.dat");
	rename("tempfile.dat","user.dat");
	cls();
	printf("\n\n\n\n\n\t\t");
	for(i=0;i<56;i++)
		printf("\xb2");
	printf("\n\t\t\xb2 Record successfully deleted...............           \xb2\n\t\t");
	for(i=0;i<56;i++)
		printf("\xb2");
	printf("\n\t\t\xb2 press any key to continue..............              \xb2\n\t\t");
	for(i=0;i<56;i++)
		printf("\xb2");
	gotoxy(60,10);
	printf("\xb2");
	fflush(stdin);
	getch();
	return flag;
}
/* End of delete_user() */

void User_List()
{
	int i;
	FILE *ufp;
	ufp=fopen("user.dat","rb+");
	if(ufp==NULL)
	{
		perror("\n error in opening file ");
		//exit(0);
	}
	rewind(ufp);
	cls();
	printf("\n\n\t\t\033[9m\033[1;35m");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\n\t\t\xb2\033[2;47m           WELCOME TO USER LIST             \033[0m\033[1;35m\xb2\n\t\t");
	for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");
	SetColor1(7);
	printf("\n\n  \033[1;31m");
	for(i=0;i<75;i++)
		printf("\xb2");
		int p=10;
	printf("\n  \xb2\033[7;44m  NAME               CITY            USER ID              PASSWORD       \033[0m\033[1;31m\xb2\033[0m\n  ");
	for(i=0;i<75;i++)
		printf("\xb2");
	printf("\033[1;35m");
	while(fread(&sign,sizeof(sign) ,1,ufp)!=0)
	{
		printf("\n  \xb2 \033[1;37m%-20s",sign.name);
		printf("%-10s\t",sign.city);
		printf("%-20s",sign.userid);
		printf("**************\n\t\033[1;35m");
		//printf("%-10s\n\t\t\t",sign.password);
		gotoxy(77,p);
		printf("\xb2\n  ");
		p+=2;
		fflush(stdin);
		for(i=0;i<75;i++)
			printf("\xb2");
	}
	fclose(ufp);
	printf (" \n");
	fflush(stdin);
	getch();
}/*  End of User_List() */

void Change_Password()
{
	cls();
	int i,j;
	FILE *ufp;
	char uid[SIZE];
	char password[SIZE],ch;
	int size=sizeof(sign);
	ufp=fopen("user.dat","rb+");
	if(ufp==NULL)
	{
		perror("\n\t\t Error in opening file ");
		return;
	}
	//rewind(ufp);
	rewind(ufp);
	printf("\n\n\n\n\n\t\033[6;37m");
	for(i=0;i<63;i++)
		printf("\xb2");
	printf(" \n\t\xb2\033[1;36m Enter the User id to change password :                      \033[6;37m\xb2\n\t");
	for(i=0;i<63;i++)
		printf("\xb2");
	printf(" \n\t\xb2\033[0m\033[1;36m Enter old password                   :                      \033[6;37m\xb2\n\t");
	for(i=0;i<63;i++)
		printf("\xb2");
	//printf("\n\t\t Enter the User id to change password : ");
	gotoxy(50,7);
	fflush(stdin);
	Read_String(uid);
	//scanf("%[^\n]s",uid);
	gotoxy(50,9);
	fflush(stdin);
	Read_String(password);
	//scanf("%[^\n]s",password);
	fflush(stdin);
	if((Search_User(ufp,uid)==1)&&(strcmp(password,sign.password)==0))
	{
		cls();
		printf("\n\n\n\n\n\t\t\033[6;37m");
		for(i=0;i<54;i++)
			printf("\xb2");
		printf(" \n\t\t\xb2\033[0m\033[1;36m Enter new password   :                             \033[6;37m\xb2\n\t\t");
		for(i=0;i<54;i++)
			printf("\xb2");
		printf(" \n\t\t\xb2\033[0m\033[1;36m Confirm password     :                             \033[6;37m\xb2\n\t\t");
		for(i=0;i<54;i++)
			printf("\xb2");
		
		for(i=0;i<2;i++)
		{
			int l=0;
			int back=0;
			fflush(stdin);
			gotoxy(42,7);
			Read_Password(password);
			for(j=0;j<3;j++)
			{
				gotoxy(42,9);
				Read_Password(sign.password);
				if(strcmp(sign.password,password)==0)
				{
					back=1;
					break;
				}
				else
				{
					gotoxy(42,9);
					printf("                          ");
				}
			}
			if(back==0&&i==2)
			{
				cls();
				SetColor1(7);
				int i;
				printf("\n\n\n\n\t\033[0m");
				for(i=0;i<41;i++)
				printf("\xb2");
				printf("\n\t\xb2\033[6;37m Your password is not matchihng \033[0m\t\xb2\n\t");
				for(i=0;i<41;i++)
				printf("\xb2");
				printf("\n\t\xb2\033[6;37m Make sure your password and try again\033[0m\t\xb2\n\t");
				for(i=0;i<41;i++)
				printf("\xb2");
				fflush(stdin);
				getch();
				return;
			}
			if(j==3)
			{
				gotoxy(42,7);
				printf("                          ");
			}
			if(back==1)
			{
				break;
			}
		}
		fseek(ufp,-size,1);
		fwrite(&sign,sizeof(sign),1,ufp);
		printf("\n\n\t\t\xb2  \033[1;36mPassword Successfully changed \033[6;37m\n\t\t");
		for(i=0;i<54;i++)
			printf("\xb2");
		gotoxy(70,11);
			printf("\xb2");
	}
	else
	{
		printf("\n\n\t\xb2\033[2;36m \tInvalid userid and paassword \t\t\t      \033[2;37m\xb2\n\t");
		for(i=0;i<63;i++)
		{
			printf("\xb2");
		}
	}
	fclose(ufp);
	fflush(stdin);
	getch();

}/* End of change_Password() */

int Search_User(FILE *ufp,char *uid)
{
	unsigned flag=0;
	rewind (ufp) ;
	while(fread(&sign,sizeof(sign) ,1,ufp)==1)
	{
		printf(" while ");
		printf(" %d ",Match_String(uid,sign.userid));
		if(Match_String(uid,sign.userid)==1)
		{
			flag=1;
			break;
		}
	}
	return flag;
}	/*End of search( )*/

void Terminate()
{
	cls();
	char ch;
	int i;
	SetColor1(7);
	printf("\n\n\n\n\n\n\t\t\033[1;31m");
	for(i=0;i<46;i++)
		printf("\xb2");
		printf("\n\t\t\xb2\033[2;47m Are you sure do you want to exit(y/n) :    \033[0m\033[1;31m\xb2\n\t\t");
		for(i=0;i<46;i++)
		printf("\xb2");
	printf("\033[0m");
	gotoxy(59,8);
	printf("\033[0m");
	fflush(stdin);
	ch=getche();
	fflush(stdin);
	cls();
	if(ch=='y'||ch=='Y')
	{
		SetColor1(7);
		int i;
		printf("\n\n\n\n\n\n\t\t\033[1;33m");
		for(i=0;i<41;i++)
		printf("\xb2");
		printf("\n\t\t\xb2 Thank you for using my programme\t\xb2\n\t\t");
		for(i=0;i<41;i++)
		printf("\xb2");
		printf("\n\t\t\xb2 Visit Again\t\t\t\t\xb2\n\t\t");
		for(i=0;i<41;i++)
		printf("\xb2");
		SetColor1(0);
		printf("\033[2;34m");
		system("Terminate.vbs");
		exit(1);
	}
}/* End of Terminate() */

int Match_String(char *str1,char *str2)
{
	int status=1,len,i;
	len=strlen(str1);
	char ch1,ch2;
	if(strlen(str1)==strlen(str2))
	{
		for(i=0;i<len;i++)
		{
			if(toupper(str1[i])!=toupper(str2[i])){
				status=0;
				break;
			}
		}
	}
	else
		status=0;
	return status;
}

void cls()
{
	system("cls");
}

void SetColor1(int ForgC)
 {
	WORD wColor;

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	                       //We use csbi for the wAttributes word.
	if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
	 {
	                 //Mask out all but the background attribute, and add in the forgournd color
		wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
	    SetConsoleTextAttribute(hStdOut, wColor);
	 }
	return;
}

int ReadInt()
{
	char numstr[INT_SIZE];
	int i=0, num;
	char ch;
	while(1)
	{
		ch=getch();
				
		if(ch==8 && i>0)
		{
			//if(i!=0)
			{
				printf("\b \b");
				i--;
			}
			
		}
		if(ch==13&&i==1)
		{
			break;
		}
		if(i==1)
			continue;
		if(ch>'0' && ch<'8' )
		{
			printf("%c",ch);
			numstr[i]=ch;
			i++;
		}
		
		
	}
	numstr[i]='\0';
	num= atoi(numstr)	;
	return num;
}/*  End of Read_int*/

int Read_Num()
{
	char numstr[INT_SIZE];
	int i=0 ,num;
	char ch;
	while(1)
	{
		ch=getch();
				
		if(ch==8 && i>0)
		{
			//if(i!=0)
			{
				printf("\b \b");
				i--;
			}
			
		}
		if((ch==13||ch==47)&&i>=1)
		{
			if(ch==47)
			printf("/");
			break;
		}
		if(i>7)
			continue;
		if(ch>='0' && ch<='9' )
		{
			printf("%c",ch);
			numstr[i]=ch;
			i++;
		}
		
		
	}
	numstr[i]='\0';
	num= atoi(numstr)	;
	return num;
}

char Read_Number(char *num)
{
	int i=0;
	char n;
	while(1)
	{
		n=getch();
		if(n==13&&i==10)
		{
			break;
		}
		if(n==8&&i>0)
		{
			//if(i>0){
			printf("\b \b");
			i--;
		}
		if(n>='0'&&n<='9'&&i<10)
		{
			printf("%c",n);
			num[i++]=n;
		}
		//printf("i=%d",i);
	}
	num[i]='\0';
}

char Read_String(char *name)
{
	int i=0;
	char n;
	while(1)
	{
		fflush(stdin);
		n=getch();
		if(n==13)
		{
			if(i<3)
				continue;
			break;
		}
		if(n==8&&i>0)
		{
			//if(i>0){
			printf("\b \b");
			i--;
		}
		if(i>=0&&i<20&&n!=8)
		{
			printf("%c",n);
			name[i++]=n;
		}
		//printf("i=%d",i);
	}
	name[i]='\0';
}


char Read_Password(char *pass)
{
	int i=0;
	char n;
	while(1)
	{
		fflush(stdin);
		n=getch();
		if(n==13)
		{
			if(i<8)
				continue;
			break;
		}
		if(n==8&&i>0)
		{
			//if(i>0){
			printf("\b \b");
			i--;
		}
		if(i>=0&&i<15&&n!=8)
		{
			printf("*");
			pass[i++]=n;
		}
		//printf("i=%d",i);
	}
	pass[i]='\0';
}

float Read_Float()
{
	char numstr[INT_SIZE];
	int i=0 ;
	float num;
	char ch;
	while(1)
	{
		ch=getch();
			
		if(ch==8 && i>0)
		{
			{
				printf("\b \b");
				i--;
			}
		}
		if((ch==13||ch==47)&&i>=1)
		{
			if(ch==47)
			printf("/");
			break;
		}
		if(i>7)
			continue;
		if((ch>='0' && ch<='9' )||ch==46)
		{
			printf("%c",ch);
			numstr[i]=ch;
			i++;
		}
		
		
	}
	numstr[i]='\0';
	num= atoi(numstr)	;
	return num;
}
