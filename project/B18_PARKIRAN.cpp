#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

using namespace std;

string name,password,inName,inPassword;
string dt[100], dt2[100];
int index=0;
fstream f;
fstream pesan;
string pesan1[100];
string g1[100],g2[100];
string a,h, pil,jenis,registrasi[100];
int b,tempat,hargam,hargamo,total;
int lama;
int n,j;
int menu(char);
void map();
int utama();
string carinama,caripass;

void tukar(int a, int b)
{
	string t,t1,t2,t3,t4,t5,t6;
	t = pesan1[a];
	t1 = pesan1[a+1];
	t2 = pesan1[a+2];
	t3 = pesan1[a+3]; 
	t4 = pesan1[a+4]; 
	t5 = pesan1[a+5];
	t6 = pesan1[a+6];    
	pesan1[a] = pesan1[b];
	pesan1[a+1] = pesan1[b+1];
	pesan1[a+2] = pesan1[b+2];
	pesan1[a+3] = pesan1[b+3];
	pesan1[a+4] = pesan1[b+4];
	pesan1[a+5] = pesan1[b+5];
	pesan1[a+6] = pesan1[b+6];
	pesan1[b] = t;
	pesan1[b+1] = t1;
	pesan1[b+2] = t2;
	pesan1[b+3] = t3;
	pesan1[b+4] = t4;
	pesan1[b+5] = t5;
	pesan1[b+6] = t6;
	
	
	
		
}

void bubble_sort(int ni)
{
	cout <<ni;
	for(int i=0; i<=ni; i+=7)
 		{
  			for(int j=0; j<=ni-14; j+=7)
  			{
   				if(pesan1[j]>pesan1[j+7]){
   					
   					tukar(j,j+7);
   					
				   }	
  			}
 		}
}

struct bio{
	string registerName;
	string registerPassword;
	string namaLengkap;
	string no_hp;
	string alamat;
	string ttl;
	string inName;
	string inPassword;
}data;


struct psn{
	string nama;
	string nohp;
	string merk;
	string jam;
	string plat;
}pengguna[100];

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

string parkir(string h){
	int k=1;
	int z=0,x=0,a=0,b=0,c=0,d=0;
	loop:
	int f=1;
	fflush(stdin);
	for (int f;f<2;f++){
		if(f==1){
			map();
			for (int l =1;l<=18;l++){
				if(l>=1 && l<=9){
					gotoxy(60+z,7);cout <<l;
					z+=7;
				}
				else if(l>=10 && l<=18) {
					gotoxy(52+x,15);cout<<l;
					x+=7;
				}
			}
			cout<<endl<<endl<<endl<<endl;
			cout<<"Ingin di Lantai ini?"<<endl<<"y or n"<<" : ";
			cin>>h;
			if (h=="y") {
				return h;
			}
			else if (h=="n") {
				f++;
				system("cls");
			}
		}
	}
	for (int f=2;f<3;f++) {
		if(f==2) {
			map();
			for (int l =19;l<=36;l++){
				if(l>=19 && l<=27){
				gotoxy(60+a,7);cout <<l;
				a+=7;
				}
				else if(l>=28 && l<=36) {
				gotoxy(52+b,15);cout<<l;
				b+=7;
				}				
			}
			cout<<endl<<endl<<endl<<endl;
			cout<<"Ingin di Lantai ini?"<<endl<<"y or n"<<" : ";
			cin>>h;
			if (h=="y") {
				return h;
			}
			else if (h=="n") {
				f++;
				system("cls");
			}
		}
	for (int f=3;f<4;f++) {
		map();
		if(f==3) {
			for (int l =37;l<=54;l++){
				if(l>=37 && l<=45){
				gotoxy(60+c,7);cout <<l;
				c+=7;
				}
				else if(l>=46 && l<=54) {
				gotoxy(52+d,15);cout<<l;
				d+=7;
				}				
			}	
			cout<<endl<<endl<<endl<<endl;
			cout<<"Ingin di Lantai ini?"<<endl<<"y or n"<<" : ";
			cin>>h;
			if (h=="y") {
				return h;
			}
			else if (h=="n") {
				f++;
				system("cls");
			}
		}
	}
}
f++;
return h;
}
int area(string q) {
	int tempat;
	int x = 1,y=1;
	string pil;
	while(x<=3){
	system("cls");
	cout<<" Press Any Character To Continue ";
	cin>>pil;
	string h = parkir(pil);
	if(h=="y"){
		gotoxy(60,20);cout<<"Berapa tempat yang ingin anda pesan : ";
		cin>>tempat;
		psn pengguna[tempat];
		gotoxy(60,22);cout<<"Berapa lama waktu pemesanan (jam)\t:";cin>>lama;
		if (q=="1"){
			if (lama>4) {
				hargam = (lama*2000);
				gotoxy(65,24);cout<<" Harga			: Rp."<<hargam<<endl;
				total = hargam*tempat;
				gotoxy(65,25);cout<<" Total pembayaran	: Rp. "<<total<<endl;
			}
			else if (lama <= 4) {
				hargam = (lama*4000);
				gotoxy(65,24);cout<<" Harga			: Rp."<<hargam<<endl;
				total = hargam*tempat;
				gotoxy(65,25);cout<<" Total pembayaran	: Rp. "<<total<<endl;
			}
		}
		else if (q=="2") {
			if (lama>4) {
			hargamo = (lama*1000);
			gotoxy(65,24);cout<<" Harga			: Rp."<<hargamo<<endl;
			total = hargamo*tempat;
			gotoxy(65,25);cout<<" Total pembayaran	: Rp. "<<total<<endl;
			}
			else if (lama <= 4) {
			hargamo = (lama*3000);
			gotoxy(65,24);cout<<" Harga			: Rp."<<hargamo<<endl;
			total = hargamo*tempat;
			gotoxy(65,25);cout<<" Total pembayaran	: Rp. "<<total<<endl;
			}
		}
		
		fstream pesan;
		pesan.open("pesan.txt", ios::app | ios::in | ios::out); 
		
		for(int i=0;i<tempat;i++){fflush(stdin);
			cout<<"Lokasi ke- "; getline(cin,dt[i]); pesan << dt[i]<<endl; fflush(stdin); 
			cout<<"Nama		: "; getline(cin,pengguna[i].nama); pesan << pengguna[i].nama<<endl;
			cout<<"Merk		: "; getline(cin,pengguna[i].merk); pesan << pengguna[i].merk<<endl;
			cout<<"Plat Kndaraan	: "; getline(cin,pengguna[i].plat); pesan << pengguna[i].plat<<endl;
			cout<<"Pukul	: "; getline(cin,pengguna[i].jam); pesan << pengguna[i].jam<<endl;
			
		}
		pesan.close();
		system("cls");
		break;
}

	
	else if(h=="n"){
		menu(n);
		y++;
	}x++;
}
		cout<<endl;
}



int pilihanMap1(string x){
	gotoxy(60,1);cout<<"==============================================="<<endl;
	gotoxy(60,2);cout<<"|                                             |"<<endl;
	gotoxy(60,3);cout<<"==============================================="<<endl;
	gotoxy(60,4);cout<<"|                                             |"<<endl;
	gotoxy(60,5);cout<<"|                                             |"<<endl;
	gotoxy(60,6);cout<<"|                                             |"<<endl;
	gotoxy(60,7);cout<<"==============================================="<<endl;
	gotoxy(78,2);cout<<"KETERANGAN";
	gotoxy(62,4);cout<<" Mobil\t:"<<endl;
	gotoxy(62,5);cout<<" Harga per jam : Rp.4000"<<endl;
	gotoxy(62,6);cout<<" Harga pemesanan lebih dari 4 jam : Rp.2000"<<endl;
	gotoxy(62,8);cout<<" Press Enter !!";
	getch();
	system("cls");
	area(x);
}
int pilihanMap2(string x) {
	gotoxy(60,1);cout<<"==============================================="<<endl;
	gotoxy(60,2);cout<<"|                                             |"<<endl;
	gotoxy(60,3);cout<<"==============================================="<<endl;
	gotoxy(60,4);cout<<"|                                             |"<<endl;
	gotoxy(60,5);cout<<"|                                             |"<<endl;
	gotoxy(60,6);cout<<"|                                             |"<<endl;
	gotoxy(60,7);cout<<"==============================================="<<endl;
	gotoxy(78,2);cout<<"KETERANGAN";
	gotoxy(62,4);cout<<" Motor\t:"<<endl;
	gotoxy(62,5);cout<<" Harga per jam : Rp.3000"<<endl;
	gotoxy(62,6);cout<<" Harga pemesanan lebih dari 4 jam : Rp.1000";
	gotoxy(62,8);cout<<" Press Enter !!";
	getch();
	system("cls");
	area(x);
}

void jeniskendaraan(){
	system("cls");
	gotoxy(60,1);cout<<"========================================"<<endl;
	gotoxy(60,2);cout<<"|                                      |"<<endl;
	gotoxy(60,3);cout<<"========================================"<<endl;
	gotoxy(60,4);cout<<"|                                      |"<<endl;
	gotoxy(60,5);cout<<"|                                      |"<<endl;
	gotoxy(60,6);cout<<"========================================"<<endl;
	gotoxy(60,7);cout<<"|                                      |"<<endl;
	gotoxy(60,8);cout<<"========================================"<<endl;
	gotoxy(68,2);cout<<"Masukkan Jenis Kendaraan";
	gotoxy(62,4);cout<<"1.Mobil";
	gotoxy(62,5);cout<<"2.Motor";
	gotoxy(75,7);cout<<"Pilihan = "; cin>>jenis;
	system("cls");
	if (jenis=="1"){
		pilihanMap1(jenis);
	}
	else if (jenis=="2") {
		pilihanMap2(jenis);
	}
}

int menu(char n){
	string pilihan;
	loop:
	system("cls");
	gotoxy(60,1);cout<<"========================================"<<endl;
	gotoxy(60,2);cout<<"|                                      |"<<endl;
	gotoxy(60,3);cout<<"========================================"<<endl;
	gotoxy(60,4);cout<<"|                                      |"<<endl;
	gotoxy(60,5);cout<<"|                                      |"<<endl;
	gotoxy(60,6);cout<<"|                                      |"<<endl;
	gotoxy(60,7);cout<<"|                                      |"<<endl;
	gotoxy(60,8);cout<<"|                                      |"<<endl;
	gotoxy(60,9);cout<<"========================================"<<endl;
	gotoxy(60,10);cout<<"|                                      |"<<endl;
	gotoxy(60,11);cout<<"========================================"<<endl;
	gotoxy(68,2);cout<<"MENU UTAMA"<<endl;
	gotoxy(62,4);cout<<"1. Pesan Tempat";
	gotoxy(62,5);cout<<"2. Lihat Map";
	gotoxy(62,7);cout<<"3. Profil";
	gotoxy(62,8);cout<<"4. Log Out";
	gotoxy(62,10);cout<<"Pilihan = "; cin>>pilihan;
	if(pilihan == "3"){
		system("cls");
		gotoxy(60,1);cout<<"========================================"<<endl;
		gotoxy(60,2);cout<<"|                                      |"<<endl;
		gotoxy(60,3);cout<<"========================================"<<endl;
		gotoxy(60,4);cout<<"|                                      |"<<endl;
		gotoxy(60,5);cout<<"|                                      |"<<endl;
		gotoxy(60,6);cout<<"|                                      |"<<endl;
		gotoxy(60,7);cout<<"|                                      |"<<endl;
		gotoxy(60,8);cout<<"|                                      |"<<endl;
		gotoxy(60,9);cout<<"|                                      |"<<endl;
		gotoxy(60,10);cout<<"========================================"<<endl;
		gotoxy(75,2);cout<<"Menu Profil"<<endl;
		fstream g("registration.txt",ios::in | ios::out);
		index=0;
		while(!g.eof()){

			g >> g1[index];
			index++;
		}
		
		g.close();
		for(int i=0;i<=index-1;i+=8){
			if(g1[i+1]==carinama && g1[i+2]==caripass){
				gotoxy(61,4);cout<<"Nama	: "<<g1[i]<<endl;
				gotoxy(61,5);cout<<"Username	: "<<g1[i+1]<<endl;
				gotoxy(61,6);cout<<"Password	: "<<g1[i+2]<<endl;
				gotoxy(61,7);cout<<"TTL	: "<<g1[i+3]<<" "<<g1[i+4]<<" "<<g1[i+5]<<endl;
				gotoxy(61,8);cout<<"Alamat 	: "<<g1[i+6]<<endl;
				gotoxy(61,9);cout<<"No Hp 	: "<<g1[i+7]<<endl;
			}
		}
		getch();
		goto loop;

	}else if(pilihan == "1"){
		jeniskendaraan();
	}
	else if(pilihan == "2"){
		parkir(a);
		system("cls");
		goto loop;
	}
	else if(pilihan == "4"){
		system("cls");
		utama();
	}
}

void menuAdmin(){
	string bla,bli;
	gotoxy(60,1);cout <<"=========Selamat Datang Admin=========="<<endl;
	lip:
	cout << "Menu Admin "<<endl;
	cout << "1. Data User Parkir"<<endl<<"2. Kembali"<<endl;
	cout << "Pilihan "; cin>>bla;
	system("cls");
	if(bla=="1"){
		lup:
		cout <<"1. Lihat Data"<<endl;
		//cout <<"2. Hapus Data"<<endl;
		//cout <<"2. Tambah Data"<<endl;
		cout <<"3. Kembali "<<endl;
		cout <<"Pilihan = ";cin>>bli;
		if(bli=="1"){
			pesan.open("pesan.txt", ios::in | ios::out);
			while(!pesan.eof() ){
			
			pesan >> pesan1[index];
			index++;
			
		}
			pesan.close();
			
			bubble_sort(index);
			pesan.open("pesan.txt",ios::in | ios::out);
		
			
			for(int i=0;i<index-1;i+=7){
				
			cout<<"Lokasi ke- "<<pesan1[i]<<endl;
			cout<<"Nama		: "<<pesan1[i+1]<<endl;
			cout<<"Merk		: "<<pesan1[i+2]<<endl;
			cout<<"Plat Knd.		:"<<" "<<pesan1[i+3]<<" "<<pesan1[i+4]<<" "<<pesan1[i+5]<<endl;
			cout<<"Pukul			: "<<pesan1[i+6]<<endl;
			}
			pesan.close();
			
			getch();
			system("cls");
			goto lup;
			
		}else if(bli=="3"){
			system("cls");
			goto lip;
		}	
	}
	else if(bla=="2"){
		utama();
	}
}

void struk () {
		fstream pesan("pesan.txt",ios::in | ios::out);
		index=0;
		while(!pesan.eof()){

			pesan >> g2[index];
			index++;
		}
		
		pesan.close();
		
        gotoxy(60,1);cout<<"============================================"<<endl;
		gotoxy(60,2);cout<<"|                                          |"<<endl;
		gotoxy(60,3);cout<<"============================================"<<endl;
		gotoxy(60,4);cout<<"|                                          |"<<endl;
		gotoxy(60,5);cout<<"|                                          |"<<endl;
		gotoxy(60,6);cout<<"|                                          |"<<endl;
		gotoxy(60,7);cout<<"|                                          |"<<endl;
		gotoxy(60,8);cout<<"============================================"<<endl;
		gotoxy(60,9);cout<<"|                                          |"<<endl;
		gotoxy(60,10);cout<<"|                                          |"<<endl;
		gotoxy(60,11);cout<<"|                                          |"<<endl;
		gotoxy(60,12);cout<<"============================================"<<endl;
		gotoxy(75,2);cout<<"Struck Pembayaran"<<endl;
		for(int i=0;i<index;i+=7){
			gotoxy(62,4);cout<<"Nama		: "<<g2[i+1]<<endl;
			gotoxy(62,5);cout<<"Merk		: "<<g2[i+2]<<endl;
			gotoxy(62,6);cout<<"Plat Kndr	:"<<g2[i+3]<<" "<<g2[i+4]<<" "<<g2[i+5]<<endl;
			gotoxy(62,7);cout<<"Pukul		: "<<g2[i+6]<<endl;
			
		}
		gotoxy(62,10);cout<<"Total Pembayaran : Rp. "<<total;
		getch();
		system("cls");
		gotoxy(74,10);cout<<"Terima Kasih Telah Memesan";
		
}
void loginAdmin()
{
	int banyak = 0,salah=0;
	char user[10], pass[10];
	while(banyak<3){
		gotoxy(70,1);cout<<"=======LOGIN ADMIN=======";
		gotoxy(70,3);cout<<"Enter Username : ";
		cin>>user;
		gotoxy(70,4);cout<<"Enter Password : ";
		cin>>pass;
	
		if (strcmp(user,"admin")==0 && strcmp(pass,"admin")==0) {
			cout<<"Berhasil Masuk Sebagai Admin";
			getch();
			break;
		}	
		else {
			cout<<"\nUsername dan Password tidak cocok!"<<endl;
			getch();
			salah++;
			if (salah==3) {
				cout<<"Akses ditolak!"<<endl;
				break;
			}
		}
		banyak++;
	}
}
void map() {
	gotoxy(60,1);cout<<"|                            MAP                                |";
	gotoxy(60,3);cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	gotoxy(59,4);cout<<"++     ++     ++     ++     ++     ++     ++     ++     ++     ++";
	gotoxy(58,5);cout<<"++     ++     ++     ++     ++     ++     ++     ++     ++     ++";
	gotoxy(57,6);cout<<"++     ++     ++     ++     ++     ++     ++     ++     ++     ++"; 
	gotoxy(56,7);cout<<"++     ++     ++     ++     ++     ++     ++     ++     ++     ++";
	gotoxy(55,8);cout<<"++     ++     ++     ++     ++     ++     ++     ++     ++     ++";
	gotoxy(54,9);cout<<"++     ++     ++     ++     ++     ++     ++     ++     ++     ++";
	gotoxy(53,10);cout<<"++     ++     ++     ++     ++     ++     ++     ++     ++     ++";
	cout<<endl;
	gotoxy(52,11);cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	gotoxy(51,12);cout<<"++     ++     ++     ++     ++     ++     ++     ++     ++     ++";
	gotoxy(50,13);cout<<"++     ++     ++     ++     ++     ++     ++     ++     ++     ++";
	gotoxy(49,14);cout<<"++     ++     ++     ++     ++     ++     ++     ++     ++     ++"; 
	gotoxy(48,15);cout<<"++     ++     ++     ++     ++     ++     ++     ++     ++     ++";
	gotoxy(47,16);cout<<"++     ++     ++     ++     ++     ++     ++     ++     ++     ++";
	gotoxy(46,17);cout<<"++     ++     ++     ++     ++     ++     ++     ++     ++     ++";
	gotoxy(45,18);cout<<"++     ++     ++     ++     ++     ++     ++     ++     ++     ++";
	cout<<endl;
}

int metode(int b) {
	m:
	string pil2;

	
		cout<<" Total Pembayaran\t: Rp."<<b<<endl;
		cout<<" Apakah anda yakin? y/n";cin>>pil2;
		if (pil2 == "y") {
			
		}
		else if (pil2== "n") {
			system("cls");
			metode(total);
			return 0;
		}
}
void tampilan(){
	
	gotoxy(4,15);cout<<" .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .-----------------.";
	gotoxy(4,16);cout<<"| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |";
	gotoxy(4,17);cout<<"| |   ______     | || |      __      | || |  _______     | || |  ___  ____   | || |     _____    | || |  _______     | || |     _____    | || | ____  _____  | |";
	gotoxy(4,18);cout<<"| |  |_   __ \\   | || |     /  \\     | || | |_   __ \\    | || | |_  ||_  _|  | || |    |_   _|   | || | |_   __ \\    | || |    |_   _|   | || ||_   \\|_   _| | |";
	gotoxy(4,19);cout<<"| |    | |__) |  | || |    / /\\ \\    | || |   | |__) |   | || |   | |_/ /    | || |      | |     | || |   | |__) |   | || |      | |     | || |  |   \\ | |   | |";
	gotoxy(4,20);cout<<"| |    |  ___/   | || |   / ____ \\   | || |   |  __ /    | || |   |  __'.    | || |      | |     | || |   |  __ /    | || |      | |     | || |  | |\\ \\| |   | |";
	gotoxy(4,21);cout<<"| |   _| |_      | || | _/ /    \\ \\_ | || |  _| |  \\ \\_  | || |  _| |  \\ \\_  | || |     _| |_    | || |  _| |  \\ \\_  | || |     _| |_    | || | _| |_\\   |_  | |";
	gotoxy(4,22);cout<<"| |  |_____|     | || ||____|  |____|| || | |____| |___| | || | |____||____| | || |    |_____|   | || | |____| |___| | || |    |_____|   | || ||_____|\\____| | |";
	gotoxy(4,23);cout<<"| |              | || |              | || |              | || |              | || |              | || |              | || |              | || |              | |";
	gotoxy(4,24);cout<<"| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |";
	gotoxy(4,25);cout<<" '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------' ";
	getch();
	system("cls");
	
gotoxy(20,1);cout<<"  /$$$$$$            /$$                                     /$$                 /$$             /$$                                  ";
gotoxy(20,2);cout<<" /$$__  $$          | $$                                    | $$                | $$            | $$                                  ";
gotoxy(20,3);cout<<"| $$  \\__/  /$$$$$$ | $$  /$$$$$$  /$$$$$$/$$$$   /$$$$$$  /$$$$$$          /$$$$$$$  /$$$$$$  /$$$$$$    /$$$$$$  /$$$$$$$   /$$$$$$ ";
gotoxy(20,4);cout<<"|  $$$$$$  /$$__  $$| $$ |____  $$| $$_  $$_  $$ |____  $$|_  $$_/         /$$__  $$ |____  $$|_  $$_/   |____  $$| $$__  $$ /$$__  $$";
gotoxy(20,5);cout<<" \\____  $$| $$$$$$$$| $$  /$$$$$$$| $$ \\ $$ \\ $$  /$$$$$$$  | $$          | $$  | $$  /$$$$$$$  | $$      /$$$$$$$| $$  \\ $$| $$  \\ $$";
gotoxy(20,6);cout<<" /$$  \\ $$| $$_____/| $$ /$$__  $$| $$ | $$ | $$ /$$__  $$  | $$ /$$      | $$  | $$ /$$__  $$  | $$ /$$ /$$__  $$| $$  | $$| $$  | $$";
gotoxy(20,7);cout<<"|  $$$$$$/|  $$$$$$$| $$|  $$$$$$$| $$ | $$ | $$|  $$$$$$$  |  $$$$/      |  $$$$$$$|  $$$$$$$  |  $$$$/|  $$$$$$$| $$  | $$|  $$$$$$$";
gotoxy(20,8);cout<<" \\______/  \\_______/|__/ \\_______/|__/ |__/ |__/ \\_______/   \\___/         \\_______/\\_______/   \\___/   \\_______/|__/  |__/ \\____  $$";
gotoxy(20,9);cout<<"                                                                                                                             /$$  \\ $$";
gotoxy(20,10);cout<<"                                                                                                                            |  $$$$$$/";
gotoxy(20,11);cout<<"                                                                                                                             \\______/ ";
gotoxy(65,15);cout<<"                Press Enter !!!                    "<<endl;	

	getch();
	system("cls");
}

int utama(){
	int n = 0, m = 0; int z=0;
	bio data;
    string pilih,command2,registerName,registerPassword; 
    awal:
    tampilan();
   	gotoxy(55,16);cout<<"==================================================="<<endl;
   	gotoxy(55,17);cout<<"|                                                 |"<<endl;
   	gotoxy(55,18);cout<<"|                                                 |"<<endl;
   	gotoxy(55,19);cout<<"|                                                 |"<<endl;
   	gotoxy(55,20);cout<<"|                                                 |"<<endl;
   	gotoxy(55,21);cout<<"==================================================="<<endl;
   	gotoxy(55,22);cout<<"|                                                 |"<<endl;
   	gotoxy(55,23);cout<<"==================================================="<<endl;
   	gotoxy(70,17);cout<<"1. Registrasi";
	gotoxy(70,18);cout<<"2. Login Sebagai User";
	gotoxy(70,19);cout<<"3. Login Sebagai Admin";
	gotoxy(70,20);cout<<"4. Keluar";fflush(stdin);
	gotoxy(75,22);cout<<"Pilihan : "; getline(cin, pilih);
	system("cls");
    while (n=1)
    {

        if (pilih=="4") 
        {
            return n;
        }
        else if (pilih=="1") 
        {
        	fstream g("registration.txt",ios::app| ios::in | ios::out); 

            if (!g.is_open()) 
            {
                cout<<"could not open file\n"; 
				return 0;
            }
            gotoxy(60,1);cout<<"=======DAFTARKAN DIRI ANDA=======";
            gotoxy(60,2);cout<<"=================================";
            gotoxy(60,3);cout<<"NAMA LENGKAP : ";
            getline(cin,data.namaLengkap);
            gotoxy(60,4);cout<<"USERNAME\t : ";
            getline(cin, data.registerName);
            gotoxy(60,5);cout<<"PASSWORD\t : ";
            getline(cin, data.registerPassword);
			gotoxy(60,6);cout<<"TTL\t\t : ";
			getline(cin,data.ttl);
			gotoxy(60,7);cout<<"ALAMAT\t : ";
			getline(cin,data.alamat);
			gotoxy(60,8);cout<<"NO HP\t : ";
			getline(cin,data.no_hp);
			g<<data.namaLengkap; 
			g<<'\n'; 
            g<<data.registerName; 
            g<<'\n'; 
            g<<data.registerPassword<<'\n'; 
            g<<data.ttl; 
			g<<'\n';
			g<<data.alamat; 
			g<<'\n';
			g<<data.no_hp; 
			g<<'\n';   
            g.close(); 
            getch();
            system("cls");
            goto awal;
            return 0;
        }
        else if (pilih=="2") 
        {
            ifstream f("registration.txt",ios::app);
            if (!f.is_open()) 
            {
                cout<<"could not open file\n"; 
 			return 0;
            }
            getline(f, name, '\n'); 
            getline(f, password, '\n'); 
            while(!f.eof()){   
			f >> registrasi[index];   
			index++;
			}
			for (int i=0;i<3;i++) {
               gotoxy(60,1);cout<<"=============LOGIN USER=============";
                gotoxy(60,2);cout<<"Enter Username: ";
                getline(cin, carinama); fflush(stdin);
                data.inName=carinama;
                gotoxy(60,3);cout<<"Enter Password: ";
                getline(cin, caripass);
                data.inPassword=caripass;
                for(int i=0;i<index;i++){
                if ((data.inName,data.inPassword)==registrasi[i])
                {
                    gotoxy(70,5);cout<<"Login Successful\n";gotoxy(65,6);cout <<"Welcome, "<<data.inName;
                    getch();
                    system("cls");
					menu(1);
					metode(total);
					system("cls");
					struk();
					goto akhir;
                    break; 
                }
                else if ((data.inName,data.inPassword)!=registrasi[i] ){				
				z=z+1;
				}		
			}
			system("cls");
		}
				if (z<3) {
				}
				else {
					cout<<"Anda Tidak Dapat Login";
					getch();
					system("cls");
					goto awal;
				}
           f.close();
       }

        else if(pilih == "3"){
            loginAdmin();
            system("cls");
            menuAdmin();
            break;
            	
		}

    }
    akhir:
    	int j;
    return n;
}


int main()
{	
	utama();
}

