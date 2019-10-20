#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>

char nama[15][99];
char orang[15][100];
char alamat[15][100];
int p=0,u[100],t,r,o,i,point;
int jumlah[100];
int bulan[50];
char z;
int total[50],pajak[99],harganya[99];
int harga[10];
int hargacicil[100],bunga[100];
int pilm;

void gotoxy(int x,int y){
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void warna(int color)
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon,color);
}

void tulisbg()
{
	warna(267);
	gotoxy(35,4);printf("****** **   ** ******  ********* *******  ******  ***** **   ** ****** **      **");
	gotoxy(35,5);printf("****** **   ** ******  ********* **    ** ******  ***** **   ** ****** **      **");
	gotoxy(35,6);printf("  **   ******* **      **        **    ** **      **    ******* **  ** **  **  **");
	gotoxy(35,7);printf("  **   ******* ******  **  ***** ******** ******  ***** ******* **  ** **  **  **");
	gotoxy(35,8);printf("  **   **   ** **      **     ** ******   **         ** **   ** **  ** **  **  **");
	gotoxy(35,9);printf("  **   **   ** ******  ********* **   **  ******  ***** **   ** ****** **********");
	gotoxy(35,10);printf("  **   **   ** ******  ********* **    ** ******  ***** **   ** ****** **********");	
}

void tampilan()
{

	warna(268);
	gotoxy(32,2);printf("****************************************************************************************");
	gotoxy(31,3);printf("******************************************************************************************");
	gotoxy(30,4);printf("****");	gotoxy(118,4);printf("****");
	gotoxy(29,5);printf("****");	gotoxy(119,5);printf("****");
	gotoxy(28,6);printf("*****");	gotoxy(120,6);printf("****");
	gotoxy(1,7);printf("*********************************");	
	gotoxy(1,8);printf("**********************************");
	gotoxy(120,7);printf("*********************************");
	gotoxy(119,8);printf("**********************************");
	gotoxy(1,11);printf("********************************************************************************************************************************************************");
	gotoxy(1,12);printf("********************************************************************************************************************************************************");
	gotoxy(1,9);printf("***");gotoxy(1,10);printf("***");gotoxy(150,9);printf("***");gotoxy(150,10);printf("***");
	gotoxy(1,40);printf("********************************************************************************************************************************************************");
	gotoxy(1,41);printf("********************************************************************************************************************************************************");
	
	int y=13;
	for(int i=0;i<=27;i++)
	{
		gotoxy(1,y);printf("***");gotoxy(150,y);printf("***");
		y++;
	}
	tulisbg();
}


void tabel()
{
	warna(268);
	gotoxy(30,15);printf("___________________________________________________________________________________________");
	warna(267);
	gotoxy(32,16);printf("No.");gotoxy(41,16);printf("Merk");gotoxy(63,16);printf("Tipe");gotoxy(83,16);printf("Stock");gotoxy(102,16);printf("Harga");
	warna(268);
	gotoxy(30,17);printf("__________________________________________________________________________________________");
	warna(267);
	gotoxy(32,18);printf("1");
	gotoxy(32,22);printf("2");
	gotoxy(32,26);printf("3");
	warna(268);
	gotoxy(31,21);printf("__________________________________________________________________________________________");
	gotoxy(31,25);printf("__________________________________________________________________________________________");
	gotoxy(31,29);printf("__________________________________________________________________________________________");
	warna(267);
	gotoxy(40,19);printf("Honda");
	gotoxy(40,23);printf("Yamaha");
	gotoxy(39,27);printf("Suzuki");
	
	int y=16;
	for(int i=0;i<=13;i++)
	{
	warna(268);
	gotoxy(30,y);printf("|");
	gotoxy(35,y);printf("|");
	gotoxy(50,y);printf("|");
	gotoxy(80,y);printf("|");
	gotoxy(90,y);printf("|");
	gotoxy(120,y);printf("|");
	y++;
	}
}


int stock[50];

void tabelmobil()
{
	tabel();
	warna(267);
	gotoxy(51,18);printf("Honda Civic");gotoxy(85,18);printf("%d",stock[0]);gotoxy(100,18);printf("Rp 480000000");
	gotoxy(51,19);printf("Honda CRV");gotoxy(85,19);printf("%d",stock[1]);gotoxy(100,19);printf("Rp 432000000");
	gotoxy(51,20);printf("Honda Jazz");gotoxy(85,20);printf("%d",stock[2]);gotoxy(100,20);printf("Rp 236000000");
	
	gotoxy(51,22);printf("Yamaha Sienta");gotoxy(85,22);printf("%d",stock[3]);gotoxy(100,22);printf("Rp 131500000");
	gotoxy(51,23);printf("Yamaha Veloz");gotoxy(85,23);printf("%d",stock[4]);gotoxy(100,23);printf("Rp 230000000");
	gotoxy(51,24);printf("Yamaha Etios Valco");gotoxy(85,24);printf("%d",stock[5]);gotoxy(100,24);printf("Rp 294700000");
	
	gotoxy(51,26);printf("Suzuki Ignis");gotoxy(85,26);printf("%d",stock[6]);gotoxy(100,26);printf("Rp 139500000");
	gotoxy(51,27);printf("Suzuki Celerio");gotoxy(85,27);printf("%d",stock[7]);gotoxy(100,27);printf("Rp 168700000");
	gotoxy(51,28);printf("Suzuki Ertiga");gotoxy(85,28);printf("%d",stock[8]);gotoxy(100,28);printf("Rp 239500000");
	
}

int stockmo[50];

void tabelmotor()
{
	tabel();
	warna(267);
	gotoxy(51,18);printf("Honda Vario 150");gotoxy(85,18);printf("%d",stockmo[0]);gotoxy(100,18);printf("Rp 22600000");
	gotoxy(51,19);printf("Honda Beat");gotoxy(85,19);printf("%d",stockmo[1]);gotoxy(100,19);printf("Rp 15400000");
	gotoxy(51,20);printf("Honda CBR 150");gotoxy(85,20);printf("%d",stockmo[2]);gotoxy(100,20);printf("Rp 35700000");
	
	gotoxy(51,22);printf("Yamaha NMAX");gotoxy(85,22);printf("%d",stockmo[3]);gotoxy(100,22);printf("Rp 25000000");
	gotoxy(51,23);printf("Yamaha Vixion");gotoxy(85,23);printf("%d",stockmo[4]);gotoxy(100,23);printf("Rp 26000000");
	gotoxy(51,24);printf("Yamaha F1ZR");gotoxy(85,24);printf("%d",stockmo[5]);gotoxy(100,24);printf("Rp 13000000");
	
	gotoxy(51,26);printf("Suzuki NEX II");gotoxy(85,26);printf("%d",stockmo[6]);gotoxy(100,26);printf("Rp 14000000");
	gotoxy(51,27);printf("Suzuki GSX R150");gotoxy(85,27);printf("%d",stockmo[7]);gotoxy(100,27);printf("Rp 31700000");
	gotoxy(51,28);printf("Suzuki Satria F150");gotoxy(85,28);printf("%d",stockmo[8]);gotoxy(100,28);printf("Rp 22750000");
}

void kwitansi()
{
	fflush(stdin);
	int a;
		
    tampilan();
	gotoxy(12,13);printf("__________________________________________________________________________________________________________________________________");
	gotoxy(12,14);printf("|                                                                                                                                |");
	gotoxy(12,15);printf("|	      			                 PT. THE GREATEST SHOWROOM SAMARINDA                                                 |");
	gotoxy(12,16);printf("|					                 (MOBIL DAN MOTOR)                                                           |");
	gotoxy(12,17);printf("|================================================================================================================================|");
	gotoxy(12,18);printf("|FAKTUR KENDARAAN	 		  					                                                     |");
	gotoxy(12,19);printf("|================================================================================================================================|");
	gotoxy(12,20);printf("| No. |  ATAS NAMA   |      JENIS KENDARAAN      |JUMLAH|       HARGA       |     HARGA TOTAL    |  HARGA CICILAN  |WAKTU CICILAN|");
	gotoxy(12,21);printf("|================================================================================================================================|");

	int by=22;
	int n=1;
	int y1=22,y2=23,y3=24,y4=25,y5=26,y6=27;
	for(int q=0;q<p;q++)
	{		
		fflush(stdin);
		tampilan();
		gotoxy(15,by);printf("%d",n);
		gotoxy(20,by);printf("%s",orang[q]);
		gotoxy(35,by);printf("%s",nama[q]);fflush(stdin);
		gotoxy(65,by);printf("%d",jumlah[q]);fflush(stdin);
		gotoxy(73,by);printf("%d",harga[q]);fflush(stdin);
		gotoxy(95,by);printf("%d",total[q]);fflush(stdin);
		gotoxy(114,by);printf("%d",hargacicil[q]);
		gotoxy(130,by);printf("%d bulan",bulan[q]);
		gotoxy(12,by);printf("|");gotoxy(18,by);printf("|");gotoxy(33,by);printf("|");gotoxy(61,by);printf("|");gotoxy(68,by);printf("| Rp ");gotoxy(88,by);printf("|  Rp ");gotoxy(109,by);printf("| Rp");gotoxy(127,by);printf("|");gotoxy(141,by);printf("|");
		
		by++;y1++;y2++;y3++;y4++;y5++;y6++;
		n++;
	}
	
	gotoxy(12,y1);printf("|================================================================================================================================|");
	gotoxy(12,y2);printf("|Ketentuan :				                                                                                     |");
	gotoxy(12,y3);printf("| Pajak PPN    = 5%% harga kendaraan                                          ====================================================|");
	gotoxy(12,y4);printf("| Bunga kredit = 0.3%% harga kendaraan                                                                                            |");
	gotoxy(12,y5);printf("| Tidak menerima pemgembalian kendaraan                                      ====================================================|");
	gotoxy(12,y6);printf("|________________________________________________________________________________________________________________________________|");
	getch();
	system("cls");	
}

void metode(int hargi,char tipe[50])
{
	do
	{
	strcpy(nama[p],tipe);fflush(stdin);	
	loop1:fflush(stdin);
	tampilan();
	harga[p]=hargi;
	gotoxy(60,21);printf("Metode Pembayaran");
	gotoxy(60,22);printf("1.Cash");
	gotoxy(60,23);printf("2.Credit");
	gotoxy(60,25);printf("Pilihan = ");
	scanf("%d",&pilm);fflush(stdin);
	system("cls");
	if(pilm==1)
	{
		do
		{
		tampilan();warna(267);
		pajak[p] = 0.05*harga[p];
		harganya[p] = harga[p]+pajak[p];
		
		gotoxy(50,20);printf("%s",tipe);gotoxy(75,20);printf("Harga         = Rp %d",harga[p]);fflush(stdin);
		gotoxy(75,21);printf("Pajak         = Rp %d",pajak[p]);
		gotoxy(75,22);printf("Harga + Pajak = Rp %d",harganya[p]);
		gotoxy(50,24);printf("Masukkan Jumlah Kendaraan yang ingin di beli = ");fflush(stdin);

			scanf("%d",&jumlah[p]);fflush(stdin);
			if(jumlah[p]>5 || jumlah[p]==0)
			{
			gotoxy(50,25);printf("Mohon maaf, tidak di izinkan untuk membeli lebih dari 5");
			getch();system("cls");
			}
		}while(jumlah[p]>5 || jumlah[p]==0);
		total[p] = jumlah[p]*harganya[p];
		gotoxy(50,25);printf("Total Harga = Rp %d",total[p]);fflush(stdin);
		gotoxy(50,27);printf("Atas Nama  = ");scanf("%s",&orang[p]);fflush(stdin);

	}
	
	else if(pilm==2)
	{
		tampilan();warna(267);
		fflush(stdin);
		pajak[p]=0.05*harga[p];
		bunga[p]=0.003*harga[p];
		harganya[p]=harga[p]+pajak[p]+bunga[p];
		
		do
		{
		tampilan();warna(267);
		gotoxy(50,20);printf("%s",tipe);gotoxy(75,20);printf("Harga                  = Rp.%d",harga[p]);fflush(stdin);
		gotoxy(75,21);printf("Pajak                  = Rp %d",pajak[p]);
		gotoxy(75,22);printf("Bunga                  = Rp %d",bunga[p]);
		gotoxy(75,23);printf("Harga + Pajak + Bunga  = Rp %d ",harganya[p]);	
		gotoxy(50,25);printf("Masukkan Jumlah Kendaraan yang ingin di beli = ");

			scanf("%d",&jumlah[p]);fflush(stdin);
			if(jumlah[p]>5 || jumlah[p]==0)
			{
			gotoxy(40,26);printf("Mohon maaf, tidak di izinkan untuk membeli lebih dari 5");
			getch();system("cls");
			}
		}while(jumlah[p]>5 || jumlah[p]==0);
		
		total[p] = jumlah[p]*harganya[p];
		gotoxy(50,26);printf("Total Harga            = Rp %d",total[p]);
		gotoxy(50,27);printf("Waktu Cicilan (bulan)  = ");
		scanf("%d",&bulan[p]);fflush(stdin);
		hargacicil[p]=total[p]/bulan[p];
		gotoxy(50,28);printf("Pembayaran Perbulan \t = Rp %d",hargacicil[p]);
		gotoxy(50,29);printf("Atas Nama  = ");scanf("%s",&orang[p]);fflush(stdin);
	}
	}while(pilm>3 || pilm==0);
	
	p++;
	do
		{
		fflush(stdin);
		tampilan();
		gotoxy(50,30);printf("Ingin membeli kendaraan yang lain? (y/n)");fflush(stdin);
		gotoxy(50,31);printf("Pilihan = ");fflush(stdin);
		gotoxy(61,31);scanf("%c",&z);fflush(stdin);
		system("cls");
		}while(z!='y' && z!='n');
		
		if(z=='n')
		{
		tampilan();
		system("cls");
		kwitansi();
		}
	}

int pil;
char pil1[2];
int pil2;
int pil3;
int pil4;
char a;

main()
{
	stock[0]=55;stock[1]=78;stock[2]=85;stock[3]=55;stock[4]=98;stock[5]=15;stock[6]=31;stock[7]=90;stock[8]=47;
	stockmo[0]=180;stockmo[1]=236;stockmo[2]=105;stockmo[3]=355;stockmo[4]=198;stockmo[5]=415;stockmo[6]=231;stockmo[7]=190;stockmo[8]=147;

int a=0;int loop;
char user[10],pass[10];
	for (int b=0;b<3;b++) {
	warna(267);
	gotoxy(50,18);printf("\"--------------------LOGIN---------------------\"");
	gotoxy(50,26);printf("\"----------------------------------------------\"");
	gotoxy(53,20);printf("Masukkan Username Anda : ");
	scanf("%s",&user);
	gotoxy(53,22);printf("Masukkan Password Anda : ");
	scanf("%s",&pass);
	gotoxy(68,24);printf("Loading ");
	for (loop=0;loop<5;loop++) 
	{
	printf(".");
	Sleep(500);
    }
		  	if (strcmp(user,"TIB")==0 && strcmp(pass,"2018")==0) {
			system("cls");
			break;
			}
			else {
			gotoxy(55,27);printf("Maaf Username Atau Password Anda Salah");
			getch();system("cls");
			a=a+1;
			}
		}
		if (a<3) {
			system("cls");
		}
		else {
			gotoxy(50,18);printf("\"--------------------LOGIN---------------------\"");
			gotoxy(50,26);printf("\"----------------------------------------------\"");
			gotoxy(58,22);printf("Maaf Anda Tidak Mendapatkan Akses \n");
			getch();
			goto start1;
		}
	do
	{	
		looop:
		lp:
		fflush(stdin);
		tampilan();fflush(stdin);
		gotoxy(50,18);printf("Hello %s!",user);
		gotoxy(60,20);printf("1.Informasi Kendaraan");
		gotoxy(60,21);printf("2.Daftar Pembelian Kendaraan");
		gotoxy(60,22);printf("3.Pembelian Kendaraan");
		gotoxy(60,23);printf("4.Exit");
		gotoxy(60,25);printf("Pilihan = ");
		scanf("%d",&pil);
		system("cls");
		
		if(pil==1)
		{
			do
			{
				fflush(stdin);
				tampilan();
				gotoxy(60,20);printf("1. Informasi Mobil");
				gotoxy(60,21);printf("2. Informasi Motor");
				gotoxy(60,22);printf("3. Exit");
				gotoxy(60,25);printf("Pilihan = ");
				gets(pil1);fflush(stdin);
				system("cls");
				if(strcmp(pil1,"1")==0)
				{
					tampilan();
					tabelmobil();
					getch();
					system("cls");
				}
				else if(strcmp(pil1,"2")==0)
				{
					tampilan();
					tabelmotor();
					getch();
					system("cls");
				}
				else if(strcmp(pil1,"3")==0)
				{
					goto looop;
				}
			}while(pil1>"3");
		}
		else if(pil==2)
		{
			tampilan();
			kwitansi();
			system("cls");
			
		}
		else if(pil==3)
		{
			do
			{
				fflush(stdin);
				tampilan();
				gotoxy(60,20);printf("1. Pembelian Kendaraan Mobil");
				gotoxy(60,21);printf("2. Pembelian Kendaraan Motor");
				gotoxy(60,22);printf("3. Exit");
				gotoxy(60,25);printf("Pilihan = ");
				scanf("%d",&pil3);fflush(stdin);
				system("cls");
				if(pil3==1)
				{
					do
					{
						tampilan();
						gotoxy(60,20);printf("1.Honda");
						gotoxy(60,21);printf("2.Yamaha");
						gotoxy(60,22);printf("3.Suzuki");
						gotoxy(60,23);printf("4.Exit");
						gotoxy(60,25);printf("Pilihan = ");
						scanf("%d",&pil2);fflush(stdin);
						system("cls");
						if(pil2==1)
						{
							do
							{
								fflush(stdin);
								tampilan();
								gotoxy(60,20);printf("1.Honda Civic");
								gotoxy(60,21);printf("2.Honda CRV");
								gotoxy(60,22);printf("3.Honda Jazz");
								gotoxy(60,25);printf("Pilihan = ");
								scanf("%d",&pil4);fflush(stdin);
								system("cls");
								if(pil4==1)
								{
									tampilan();fflush(stdin);
									metode(480000000,"Mobil Honda Civic");
									u[o]=stock[0]-jumlah[o];
									stock[0]=u[o];
								}
								else if(pil4==2)
								{
									tampilan();
									metode(432000000,"Mobil Honda CRV");
									u[o]=stock[1]-jumlah[o];
									stock[1]=u[o];
								}
								else if(pil4==3)
								{
									tampilan();
									metode(236000000,"Mobil Honda Jazz");
									u[o]=stock[2]-jumlah[o];
									stock[2]=u[o];
								}
							}while(pil4>3 || pil4==0);
						}
						else if(pil2==2)
						{
							do
							{	fflush(stdin);
								tampilan();
								gotoxy(60,20);printf("1.Yamaha Sienta");
								gotoxy(60,21);printf("2.Yamaha Veloz");
								gotoxy(60,22);printf("3.Yamaha Etios Valco");
								gotoxy(60,25);printf("Pilihan = ");
								scanf("%d",&pil4);fflush(stdin);
								system("cls");
								if(pil4==1)
								{
									tampilan();
									metode(131500000,"Mobil Yamaha Sienta");
									u[o]=stock[3]-jumlah[o];
									stock[3]=u[o];
								}
								else if(pil4==2)
								{
									tampilan();
									metode(230000000,"Mobil Yamaha Veloz");
									u[o]=stock[4]-jumlah[o];
									stock[4]=u[o];
								}
								else if(pil4==3)
								{
									tampilan();
									metode(294700000,"Mobil Etios Valco");
									u[o]=stock[5]-jumlah[o];
									stock[5]=u[o];
								}
		
							}while(pil4>3 || pil4==0);
						}
						else if(pil2==3)
						{
							do
							{
								tampilan();
								gotoxy(60,20);printf("1.Suzuki Ignis");
								gotoxy(60,21);printf("2.Suzuki Celerion");
								gotoxy(60,22);printf("3.Suzuki Ertiga");
								gotoxy(60,25);printf("Pilihan = ");
								scanf("%d",&pil4);fflush(stdin);
								system("cls");
								if(pil4==1)
								{
									tampilan();
									metode(139500000,"Mobil Suzuki Ignis");
									u[o]=stock[6]-jumlah[o];
									stock[6]=u[o];
								}
								else if(pil4==2)
								{
									tampilan();
									metode(168700000,"Mobil Suzuki Celerion");
									u[o]=stock[7]-jumlah[o];
									stock[7]=u[o];
								}
								else if(pil4==3)
								{
									tampilan();
									metode(239500000,"Mobil suzuki Ertiga");
									u[o]=stock[8]-jumlah[o];
									stock[8]=u[o];
								}
		
							}while(pil4>3 || pil4==0);
						}
					}while(pil2>4 || pil2==0);
				}
				else if(pil3==2)
				{
					do
					{
						fflush(stdin);
						tampilan();
						gotoxy(60,20);printf("1.Honda");
						gotoxy(60,21);printf("2.Yamaha");
						gotoxy(60,22);printf("3.Suzuki");
						gotoxy(60,23);printf("4.Exit");
						gotoxy(60,25);printf("Pilihan = ");
						scanf("%d",&pil2);
						system("cls");
						if(pil2==1)
						{
							do
							{
								tampilan();
								gotoxy(60,20);printf("1.Honda Vario 150");
								gotoxy(60,21);printf("2.Honda Beat");
								gotoxy(60,22);printf("3.Honda CBR 150");
								gotoxy(60,25);printf("Pilihan = ");
								scanf("%d",&pil4);
								system("cls");
								if(pil4==1)
								{
									tampilan();
									metode(22600000,"Motor Honda Vario 150");
									u[o]=stockmo[0]-jumlah[o];
									stockmo[0]=u[o];
								}
								else if(pil4==2)
								{
									tampilan();
									metode(15400000,"Motor Honda Beat");
									u[o]=stockmo[1]-jumlah[o];
									stockmo[1]=u[o];
								}
								else if(pil4==3)
								{
									tampilan();
									metode(35700000,"Motor Honda CBR 150");
									u[o]=stockmo[2]-jumlah[o];
									stockmo[2]=u[o];
								}
		
							}while(pil4>3 || pil4==0);
						}
						else if(pil2==2)
						{
							do
							{
								tampilan();
								gotoxy(60,20);printf("1.Yamaha NMAX");
								gotoxy(60,21);printf("2.Yamaha Vixion");
								gotoxy(60,22);printf("3.Yamaha F1ZR");
								gotoxy(60,25);printf("Pilihan = ");
								scanf("%d",&pil4);
								system("cls");
								if(pil4==1)
								{
									tampilan();
									metode(25000000,"Motor Yamaha NMAx ");
									u[o]=stockmo[3]-jumlah[o];
									stockmo[3]=u[o];
								}
								else if(pil4==2)
								{
									tampilan();
									metode(26000000,"Motor Yamaha Vixion ");
									u[o]=stockmo[4]-jumlah[o];
									stockmo[4]=u[o];
								}
								else if(pil4==3)
								{
									tampilan();
									metode(13000000,"Motor Yamaha F1ZR ");
									u[o]=stockmo[5]-jumlah[o];
									stockmo[5]=u[o];
								}
			
							}while(pil4>3 || pil4==0);
						}
						else if(pil2==3)
						{
							do
							{
								tampilan();
								gotoxy(60,20);printf("1.Suzuki NEX II");
								gotoxy(60,21);printf("2.Suzuki GSX R150");
								gotoxy(60,22);printf("3.Suzuki Satria F150");
								gotoxy(60,25);printf("Pilihan = ");
								scanf("%d",&pil4);
								system("cls");
								if(pil4==1)
								{
									tampilan();
									metode(14000000,"Motor Suzuki NEX II");
									u[o]=stockmo[6]-jumlah[o];
									stockmo[6]=u[o];
								}
								else if(pil4==2)
								{
									tampilan();
									metode(31700000,"Motor Suzuki GSX R150");
									u[o]=stockmo[7]-jumlah[o];
									stockmo[7]=u[o];
								}
								else if(pil4==3)
								{
									tampilan();
									metode(22750000,"Motor Suzuki F150 ");
									u[o]=stockmo[8]-jumlah[o];
									stockmo[8]=u[o];
								}
			
							}while(pil4>3 || pil4==0);
						}
					}while(pil2>4 || pil2==0);
				}
				else if(pil3==3)
				{
					goto lp;
				}
			}while(pil3>3 || pil2==4 || pil3==0);
		}
		else if(pil==4)
		{
			tampilan();
			gotoxy(60,20);printf("TERIMA KASIH DAN SAMPAI JUMPA");
			gotoxy(61,21);printf("SEMOGA HARIMU MENYENANGKAN!");
			gotoxy(60,22);printf("==============================");
			system("pause");
			system("resume");
			goto start1;
		}
	}while(pil>4 || pil1=="1" || pil1=="2" || z=='y' || pil3==3 || pil==2 || z=='n' || pil==0 );

	start1:
	system("cls");
}
