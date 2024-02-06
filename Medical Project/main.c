#include"medical.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	cls();
	StartUp();
//	Stock_Menu();
	time_t t= time(NULL);
	struct tm tm = *localtime(&t);
	int i,ch,ch1,ch2,ch3,ch4,ch5;
	FILE *fp;
	FILE *cfp;
	FILE *cpfp;
	FILE *rfp;
	FILE *ufp;
	fp=fopen ("medecines.dat","rb+") ;
	if (fp==NULL)
	{
		fp=fopen ("medecines.dat", "wb+") ;
		if (fp==NULL)
		{
			puts ("Error in opening file\n");
			exit(1);
		}
	}
	system("attrib +h medecines.dat");
//	Search_Stock(fp);
	cfp=fopen ("client.dat","rb+") ;
	if (cfp==NULL)
	{
		cfp=fopen ("client.dat", "wb+") ;
		if (cfp==NULL)
		{
			puts ("Error in opening file\n");
			exit(1);
		}
	}
	system("attrib +h client.dat");
	cpfp=fopen ("company.dat","rb+") ;
	if (cpfp==NULL)
	{
		cpfp=fopen ("company.dat", "wb+") ;
		if (cpfp==NULL)
		{
			puts ("Error in opening file\n");
			exit(1);
		}
	}
	system("attrib +h company.dat");

	rfp=fopen("report.dat","rb+");
	if (rfp==NULL)
	{
		rfp=fopen ("report.dat", "wb+") ;
		if (rfp==NULL)
		{
			puts ("Error in opening file\n");
			exit(1);
		}
		/*else
		{
			fclose(rfp);
			rfp=fopen("report.dat","rb+");
		}*/
	}
	system("attrib +h report.dat");
	unsigned int count=0;
	ufp=fopen("user.dat","rb+");
	if(ufp==NULL)
	{
		ufp=fopen("user.dat","wb+");
		if(ufp==NULL)
		{
			//Sign_Up();
			perror("\n Error in opening file : ");
			exit(0);
		}
	}
	system("attrib +h user.dat");
	rewind(ufp);
	while(fread(&sign,sizeof(sign),1,ufp)==1)
		count++;
	fclose(ufp);
	if(count==0)
	{
		Sign_Up();
	}
	
//	Search_Stock(fp);
//	Add_Client(cfp);
//	getch();
	
	ufp=fopen("user.dat","rb+");
	rewind(ufp);
	count=0;
	while(fread(&sign,sizeof(sign),1,ufp)==1)
		count++;
	if(count==0)
	{
		exit(0);
	}
	fclose(ufp);
	for(i=0;i<3;i++)
	{
		cls();
		if(Sign_In(i)==1)
		{
			while(1)
			{
				ch1=Menu();
				if(ch1>=1&&ch1<=7)
				{
					switch(ch1)
					{
						case 1:
							{
								int stop=1;
								while(stop)
								{
									ch2=Stock_Menu() ;
									fflush(stdin);
									if(ch2>=1&&ch2<=7)
									{
										switch(ch2)
										{
											case 1:
												{
													Add_Stock(fp,rfp);
													break;
												}
											case 2:
												{
													Update_Stock(fp);
													break;
												}
											case 3:
												{
													Delete_Stock(fp);
													break;
												}
											case 4:
												{
													cls();
													Search_Stock(fp);
													getch();
													break;
												}
											case 5:
												{
													Stock_List(fp);
													break;
												}
											case 6:
												{
													stop=0;
													break;
												}
											case 7:
												{
													Terminate();
													getch();
												}
										}/* End of switch*/
									}/* End of if*/
									else
										printf("\n Invalid choice\n");
								}
							}
							break;
						case 2:
							{
								Sell_Medecine(fp,cfp);
								break;
							}
						case 3:
							{
								int stop=1;
								while(stop)
								{
									ch3=Client_Menu();
									fflush(stdin);
									switch(ch3)
									{
										case 1:
											{
												Add_Client(cfp);
												break;
											}
										case 2:
											{
												Update_Client(cfp);
												//printf("\n UPDATE CLIENT IS COMMING SOON");
												break;
											}
										case 3:
											{
												Delete_Client(cfp);
												break;
											}
										case 4:
											{
												Client_List(cfp);
												break;
											}
										case 5:
											{
												stop=0;
												break;
											}
										case 6:
											{
												Terminate();
											}
									}/*end of case 3 switch */
								}
							 	break;
							}
						case 4:
							{
								int stop=1;
								while(stop)
								{
									ch=Report_Menu();
									switch(ch)
									{
										case 1:
											{
												Add_Report_List(rfp);
												//printf("\n\tCOMMING SOON \n");
												break;
											}
											break;
										case 2:
											{
												Sell_Report_List();
												//printf("\n\tSELL REPORT LIST IS COMMING SOON \n");
												fflush(stdin);
												//getch();
												break;
											}
											break;
										case 3:
											{
												stop=0;
												break;
											}
										case 4:
											{
												Terminate();
											}
										default :
											{
												printf("\n Invalid choice \n");
											}
									}
								}
								//printf("\n\tCOMMING SOON \n");
								break;
							}  /* End of case 4  */
						case 5:
							{
								int stop=1;
								while(stop)
								{
									ch4=User_Menu();
									fflush(stdin);
									switch(ch4)
									{
										case 1:
											{
												Sign_Up();						
											}
											break;
										case 2:
											{
												int del;
												del=Delete_User();
												if(del==1)
												{
													fclose(fp) ;
													fclose(cfp) ;
													fclose(cpfp) ;
													fclose(rfp);
													remove("medecines.dat");
													remove("client.dat");
													remove("user.dat");
													remove("sellreport.dat");
													remove("report.dat");
													remove("company.dat");
													exit(0);
												}
											}
											break;
										case 3:
											{
												User_List();
												//printf("\n\tCOMMING SOON \n");
												break;
											}
										case 4:
											{
												Change_Password();
												//printf("\n\tCOMMING SOON \n");
												break;
											}
										case 5:
											{
												stop=0;
												break;
											}
										case 6:
												Terminate();
									}/* End of switch   */
								}/* End of while   */
								break;
							} /* End of case 5   */
							break;
						case 6:
							{
								int stop=1;
								while(stop)
								{
									ch5=Company_Menu();
									fflush(stdin);
									switch(ch5)
									{
										case 1:
											{
												Add_Company(cpfp);
												break;
											}
										case 2:
											{
												Update_Company(cpfp);
												fflush(stdin);
												getch();
												break;
											}
										case 3:
											{
												Delete_Company(cpfp);
												break;
											}
										case 4:
											{
												Company_List(cpfp);
												break;
											}
										case 5:
											{
												stop=0;
												break;
											}
										case 6:
												Terminate();
									}/* End of switch   */
								} /* End of while  */
								break;
							}/* End of case 6   */
						case 7:
							{
								fclose(fp) ;
								fclose(cfp) ;
								fclose(cpfp) ;
								Terminate();
							}
						default:printf ("Wrong choice\n");

					}/*End of switch */
				}/* End of if*/
				else
				{
					printf(" Invalid choice  try again \n");
					sleep(1);
				}
			}/*End of while*/
		}
	}
		cls();
		fclose(fp) ;
		fclose(cfp) ;
		fclose(cpfp) ;
		printf("\n\n\n \t\t\tSorry \n\t\t\tYou Cross maximum limit of signin\n\n  ");
		printf("\n \t\t\tHaHaHaHaHa......... \n\n  ");
		//return 0;

}/*End of main( )*/

