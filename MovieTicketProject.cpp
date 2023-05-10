#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
#include<stddef.h>

using namespace std;

class Bilet
{
    public:

    char ad[20];
    char no[20];

} t;

class kart : public Bilet

 {

    public:
    char adres[20];
    char email[20];

 } v;


 void para(int);
 void random();
 void kart();

  int main()

  {

    system("cls");
    system("color 3F");

    int secim;
    int a;
    int b;
    int N;
    int x;
    int KartId;

    char cevap;



   { time_t t = time(NULL);

  tm* timePtr = localtime(&t);

  cout<<"Bilgisayarin Suanki Zamani: "<<asctime(timePtr)<<endl;
  cout<<"Saniye = "<<timePtr->tm_sec<<endl;
  cout<<"Dakika = "<<timePtr->tm_min<<endl;
  cout<<"Saat = "<<timePtr->tm_hour<<endl;
  cout<<"Ayin Gunu = " << timePtr->tm_mday << endl;
  cout<<"Yilin Ayi = " << timePtr->tm_mon << endl;
  cout<<"Yil = " << timePtr->tm_year + 1900 << endl;
  cout<<"Hafta Ici = " << timePtr->tm_wday << endl;
  cout<<"Yilin Gunu = " << timePtr->tm_yday << endl;
  cout<<"Gun Isigi = " << timePtr->tm_isdst << endl;

}


 do 

 {

        cout<<"\n\t\t\t ----------------------------------";
		cout<<"\n\t\t\t  Film Bilet Kitaplik Sistemi";
		cout<<"\n\t\t\t ----------------------------------";
		cout<<"\n\t\t\t\t Hosgeldin Izleyici!";	 																					//Menu for the user
		cout<<"\n\n\t\t\t\t <1> Film Zamanlari";
		cout<<"\n\t\t\t\t <2> Bilet Almak";
		cout<<"\n\t\t\t\t <3> Bilgi Islemleri";
		cout<<"\n\t\t\t\t <4> DTCard Kaydi";
		cout<<"\n\t\t\t\t <5> Cikis \n\n";
		cout<<"\t\t\t\tLutfen Seciminizi Giriniz :"<<"\t";
        cin>>secim;


        switch(secim)

        {

            case 1:

           
		    system("cls");
		    cout<<"\n\n\t\t\t\t Filmler Listeleniyor :";
			cout<<"\n\n\t\t\t\t 1. Avengers: Infinity War";
			cout<<"\n\n\t\t\t\t 2. Antman And The Wasp";
			cout<<"\n\n\t\t\t\t 3. Deadpool 2";
			cout<<"\n\n\t\t\t\t 4. Venom";
			cout<<"\n\n\t\t\t\t 5. Captain Marvel\n";
			cout<<"\n\t\t\t\t Lutfen Seciminizi Giriniz :"<<"\t";
			cin>>a;
			cout<<"\n\n\t\t\t\t Sectiginiz Film'e Ait Zamanlamalar:"; 

            switch(a)

           
			{
				case 1:

					system("cls");
				    cout<<"\n\n\t\t\t\t Lutfen Zamani Seciniz: ";
					cout<<"\n\t\t\t\t 1. 0800";
					cout<<"\n\t\t\t\t 2. 1300";
					cout<<"\n\t\t\t\t 3. 1450";
					cout<<"\n\t\t\t\t 4. 1800";
					cout<<"\n\t\t\t\t 5. 2100";
					cout<<"\n\t\t\t\t 6. 0100 \n";					
					cout<<"\n\n\t\t\t\t Lutfen Zaman Secimi Yapiniz: ";
					cin>>b;
					cout<<"\n\n\t\t\t\t Adiniz: ";
					cin>>t.ad;
					cout<<"\n\n\t\t\t\t Size Ulasacagimiz Numarayi Giriniz: ";
					cin>>t.no;
					cout<<"\n\n\t\t\t\t Satin almak istediginiz bilet sayisini girin: ";
					int x;
					cin>>x;
					para(x);
					cout<<"\n\n\n\t\t\t\t Bilet Bilgileriniz: ";
					cout<<"\n\t\t\t\t Ad		:"<<t.ad;
					cout<<"\n\t\t\t\t No	    :"<<t.no;
					cout<<"\n\t\t\t\t Zaman  	:";

					switch(b)

						{

                            case 1:	

                            cout<<"0800";
							break;

							case 2:	

                            cout<<"1300";
							break;

							case 3:	
                            cout<<"1450";
							break;

							case 4:	
                            cout<<"1800";
							break;

							case 5:	
                            cout<<"2100";
							break;

							case 6:	
                            cout<<"0100";
							break;

            
              }

              cout<<"\n\n\t\t\t\t Baska Bir Film Secmek Ister Misiniz? (E/H) : ";
              cin>>cevap;
              system("cls");
              break;

              case 2:

              system("cls");
              cout<<"\n\n\t\t\t\t Lutfen Zamani Seciniz: ";
              cout<<"\n\t\t\t\t 1. 0900";
              cout<<"\n\t\t\t\t 2. 1100";
              cout<<"\n\t\t\t\t 3. 1250";
              cout<<"\n\t\t\t\t 4. 1400";
              cout<<"\n\t\t\t\t 5. 2000";
              cout<<"\n\t\t\t\t 6. 2200 \n";
              cout<<"\n\n\t\t\t\t Lutfen Zaman Secimi Yapiniz: ";
			  cin>>b;
			  cout<<"\n\n\t\t\t\t Adiniz: ";
			  cin>>t.ad;
			  cout<<"\n\n\t\t\t\t Size Ulasacagimiz Numarayi Giriniz: ";
			  cin>>t.no;
			  cout<<"\n\n\t\t\t\t Satin almak istediginiz bilet sayisini girin: ";
			  cin>>x;
			  para(x);
			  cout<<"\n\n\n\t\t\t\t Bilet Bilgileriniz: ";
			  cout<<"\n\t\t\t\t Ad		:"<<t.ad;
			  cout<<"\n\t\t\t\t No	    :"<<t.no;
			  cout<<"\n\t\t\t\t Zaman  	:";

             switch(b)

             {

                case 1:	

                cout<<"0800";
				break;

				case 2:	
                cout<<"1300";
				break;

				case 3:	
                cout<<"1450";
				break;
							
                case 4:	
                cout<<"1800";
				break;
							
                case 5:	
                cout<<"2100";
				break;

				case 6:	
                cout<<"0100";
                break;


             }

             cout<<"\n\n\t\t\t\t Baska Bir Film Secmek Ister Misiniz? (E/H) : ";
             cin>>cevap;
             system("cls");
             break;

             case 3:

                    system("cls");
				    cout<<"\n\n\t\t\t\t Lutfen Zamani Seciniz: ";
					cout<<"\n\t\t\t\t 1. 0800";
					cout<<"\n\t\t\t\t 2. 1300";
					cout<<"\n\t\t\t\t 3. 1450";
					cout<<"\n\t\t\t\t 4. 1800";
					cout<<"\n\t\t\t\t 5. 2100";
					cout<<"\n\t\t\t\t 6. 0100 \n";					
					cout<<"\n\n\t\t\t\t Lutfen Zaman Secimi Yapiniz: ";
					cin>>b;
					cout<<"\n\n\t\t\t\t Adiniz: ";
					cin>>t.ad;
					cout<<"\n\n\t\t\t\t Size Ulasacagimiz Numarayi Giriniz: ";
					cin>>t.no;
					cout<<"\n\n\t\t\t\t Satin almak istediginiz bilet sayisini girin: ";
					cin>>x;
					para(x);
					cout<<"\n\n\n\t\t\t\t Bilet Bilgileriniz: ";
					cout<<"\n\t\t\t\t Ad		:"<<t.ad;
					cout<<"\n\t\t\t\t No	    :"<<t.no;
					cout<<"\n\t\t\t\t Zaman  	:";

					switch(b)

                    {
                            
                            case 1:	
    
                            cout<<"0900";
                            break;

                            case 2:

                            cout<<"1300";
                            break;

                            case 3:

                            cout<<"1450";
                            break;

                            case 4:

                            cout<<"1800";
                            break;

                            case 5:
                            cout<<"2100";
                            break;

                            case 6:
                            cout<<"0100";
                            break;

                    }

                    cout<<"\n\n\t\t\t\t Baska Bir Film Secmek Ister Misiniz? (E/H) : ";
                    cin>>cevap;
                    system("cls");
                    break;

                    case 4:

                    system("cls");
                    cout<<"\n\n\t\t\t\t Lutfen Zamani Seciniz: ";
                    cout<<"\n\t\t\t\t 1. 0800";
                    cout<<"\n\t\t\t\t 2. 1300";
                    cout<<"\n\t\t\t\t 3. 1450";
                    cout<<"\n\t\t\t\t 4. 1800";
                    cout<<"\n\t\t\t\t 5. 2100";
                    cout<<"\n\t\t\t\t 6. 0100 \n";
                    cout<<"\n\n\t\t\t\t Lutfen Zaman Secimi Yapiniz: ";
                    cin>>b;
                    cout<<"\n\n\t\t\t\t Adiniz: ";
                    cin>>t.ad;
                    cout<<"\n\n\t\t\t\t Size Ulasacagimiz Numarayi Giriniz: ";
                    cin>>t.no;
                    cout<<"\n\n\t\t\t\t Satin almak istediginiz bilet sayisini girin: ";
                    cin>>x;
                    para(x);
                    cout<<"\n\n\n\t\t\t\t Bilet Bilgileriniz: ";
                    cout<<"\n\t\t\t\t Ad		:"<<t.ad;
                    cout<<"\n\t\t\t\t No	    :"<<t.no;
                    cout<<"\n\t\t\t\t Zaman  	:";
                    
                    switch(b)

                    {

                            case 1:

                            cout<<"0800";
                            break;

                            case 2:

                            cout<<"1300";
                            break;

                            case 3:

                            cout<<"1450";
                            break;

                            case 4:

                            cout<<"1800";
                            break;

                            case 5:

                            cout<<"2100";
                            break;

                            case 6:

                            cout<<"0100";
                            break;

                    }

                    cout<<"\n\n\t\t\t\t Baska Bir Film Secmek Ister Misiniz? (E/H) : ";
                    cin>>cevap;
                    system("cls");
                    break;

                    case 5:

                    system("cls");
                    cout<<"\n\n\t\t\t\t Lutfen Zamani Seciniz: ";
                    cout<<"\n\t\t\t\t 1. 0800";
                    cout<<"\n\t\t\t\t 2. 1300";
                    cout<<"\n\t\t\t\t 3. 1450";
                    cout<<"\n\t\t\t\t 4. 1800";
                    cout<<"\n\t\t\t\t 5. 2100";
                    cout<<"\n\t\t\t\t 6. 0100 \n";
                    cout<<"\n\n\t\t\t\t Lutfen Zaman Secimi Yapiniz: ";
                    cin>>b;
                    cout<<"\n\n\t\t\t\t Adiniz: ";
                    cin>>t.ad;
                    cout<<"\n\n\t\t\t\t Size Ulasacagimiz Numarayi Giriniz: ";
                    cin>>t.no;
                    cout<<"\n\n\t\t\t\t Satın almak istediğiniz bilet sayısını girin: ";
                    cin>>x;
                    para(x);
                    cout<<"\n\n\n\t\t\t\t Bilet Bilgileriniz: ";
                    cout<<"\n\t\t\t\t Ad		:"<<t.ad;
                    cout<<"\n\t\t\t\t No	    :"<<t.no;
                    cout<<"\n\t\t\t\t Zaman  	:";
                    
                    switch(b)

                    {

                            case 1:

                            cout<<"0800";
                            break;

                            case 2:

                            cout<<"1300";
                            break;

                            case 3:

                            cout<<"1450";
                            break;

                            case 4:

                            cout<<"1800";
                            break;

                            case 5:

                            cout<<"2100";
                            break;

                            case 6:

                            cout<<"0100";
                            break;

                    }   

                    cout<<"\n\n\t\t\t\t Baska Bir Film Secmek Ister Misiniz? (E/H) : ";
                    cin>>cevap;
                    system("cls");
                    break;

            }
            
            break;

            case 2:

            system("cls");
            cout<<"\n\n Online bilet rezervasyonu yaptginiz icin tesekkur ederiz \n Biletleri yazdirmak icin lutfen islem kimliginizi portala girin";
            
            struct personel

            {

               int personelid;
               char Ad[10];

            }p;

            cout<<"\n Lutfen Personel ID'nizi Giriniz: ";
            cin>>p.personelid;
            cout<<"Lutfen Adinizi Giriniz: ";
            cin>>p.Ad;
            cout<<"Uzgunum Bu Ad'a Ait Bir Kayit Bulunamadi";
            cout<<"\n Baska Bir Film Secmek Ister Misiniz? (E/H) : ";
            cin>>cevap;
            system("cls");
            break;

            case 3:

            system("cls");
            cout<<"Filmler Hakkinda Daha Fazla Bilgi Edinmek Icin Uygulamamizi Ios veya Play Store'dan Indirin";
            cout<<"\n Baska Bir Film Secmek Ister Misiniz? (E/H) : ";
            cin>>cevap;
            system("cls");
            break;

            case 4:

            system("cls");
            cout<<"Iyi Gunler Hosgeldiniz KortoppallarCinemasina";
            kart();
            cout<<"Tesekkurler Kaydiniz Basariyla Tamamlanmistir";
            char f;
            cout<<"\n Baska Bir Film Secmek Ister Misiniz? (E/H) : ";
            cin>>f;

            if(f=='E')

            {
                cout<<"Kayıt olduğunuz için tekrar teşekkür ederiz \n Bu kart ile sağlanan ayrıcalıklar aşağıdaki gibidir:";
                cout<<"\n 1. Her sinema bileti alımı için 25 puan (1 puan = 1 Rs.) kazanırsınız, yani 16 filmden sonra bedava sinema bileti alırsınız.";
                cout<<"\n 2. Her 100 puanınızı 1 Rs. değerinde indirim kazanırsınız.";
                cout<<"\n 3. Her 1000 puanınızı 10 Rs. değerinde indirim kazanırsınız.";

            }

            cout<<"\n Baska Bir Film Secmek Ister Misiniz? (E/H) : ";
            cin>>cevap;

            if(cevap=='E')

            {

                system("cls");
                break;

            }

            else 
              
            {

                exit(0);

            }

            break;

            case 5:

            system("cls");
            cout<<"\n\t\t\t Emircan Gurbuz.com.tr \n\n\t\t\t\t";
            system("pause");
            exit(0);

            break;

        }

    }

    while(cevap=='E');

    }

 void kart()

 {
  

    int KartId;

    cout<<"\t\t\tHosgeldiniz KortoppallarCinemasina\n\n";
    cout<<"\t\t\t Adinizi Giriniz: ";
    cin>>v.ad;
    cout<<"\t\t\t No:";
    cin>>v.no;
    cout<<"\t\t\t Adres: ";
    gets(v.adres);
    cout<<"\t\t\t Mail ID: ";
    gets(v.email);

    system("cls");
    int ID;
    srand(time(NULL));
    ID = rand() % 400000 + 4000000;
	if (ID<0)
	ID=(ID*-1);
	cout<<"\t\t\t\tYeni Kart Numaraniz - :" <<"\t"<<ID;
	fstream fout;
	fout.open("card.dat", ios::out|ios::app);
	fout<<"\n Ad :"<<v.ad<<"\n"<<"\n No. :"<<v.no<<"\n"<<"\n Address :"<<v.adres<<"\n"<<"\n Mail ID :"<<v.email<<"\n"<<"\nCard Number:"<<ID;
	fout.close();
	cout<<"\t\t\t\tTesekkurler Kart Kaydiniz Basariyla Yapildi. \n"; 

    }

    void para(int a)

    {

        int normal;
        int gold;
        int amt[2];
        int id;
        time_t t = time(NULL);							
        tm* timePtr = localtime(&t);
        fstream fin;
        fin.open("card.dat", ios::in|ios::app);
        fin>>id;
    

    cout<<"\t\tThank you for selecting the show. Now we request you to select your type of seating \n\n\t\t\t\t 1.Normal Class \n\t\t\t\t OR \n\t\t\t\t 2. Gold Class";
	int c;
	cin>>c;
	if(c==1)
	{
		cout<<"\n\n\t\t\t\t Normal \n\n\t\t\t\t";
		system("pause");
		system("cls");
		amt[1] = a * 400;
		char final;
		cout<<"\n\n\t\t\t\t DTkart Ister misiniz(y/n): ";
		cin>>final;
		if(final=='y')
		{
			int cid;
			fin.read((char*) &v, sizeof(v));
			
			cout<<"\n\t\t\t\tKart Numarainizi Girer misiniz[10 digits]: ";
			
			if(cid==id)
			{
				amt[1]=amt[1] - (0.1*amt[1]);
			};
		}
		cout<<"\n\t\t\t\tPara Kart'i ister misiniz(y/n): ";
		char rep;
		cin>>rep;
		cout<<"\n\t\t\t\t"<<"Paying :"<<amt[1]<<"\n";
		if (rep=='y'||rep=='Y')
		{
			cout<<"\t\t\t\tName of the card holder: ";
			char n[10];
			gets(n);
			cout<<"\n\t\t\t\tEnter the card number: ";
			char Card[16];
			gets(Card);
			cout<<"\t\t\t\tExpiry(MM/YYYY)";
			int expirymm,expiryyy;
			cin>>expirymm;
			cout<<"\t\t\t\t/";
			cin>>expiryyy;
			while(expirymm<(timePtr->tm_mon) || expiryyy<(timePtr->tm_year + 1900)){
				if(expirymm<=(timePtr->tm_mon))
					{
						cout<<"\t\t\t\tAyi Tekrar Giriniz: ";
						cin>>expirymm;
					}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<"\t\t\t\tKart Yilini Giriniz: ";
					cin>>expiryyy;
				}
			};
			char password[3],vh;
			int h;
			puts("\t\t\t\tEnter the CVV/CVV2: ");
			while (1)
			{
				if (h<0)
					h=0;
				vh=getch();
				if (vh==13)
					break;
				if (vh==8)
				{
					putch(NULL);
					putch(NULL);
					putch(NULL);
					h--;
					continue;
				}
				password[h++]=vh;
				vh='*';
				putch(vh);
			};
			password[h]=='\0';
		}
	}
	else
	{
		cout<<"\n\n\t\t\t\tYou selected for the Gold Class \n\t\t\t\t";
			system("PAUSE");
		system("CLS");
		amt[2] = a * 700;
		char final;
		cout<<"\n\t\t\t\tDo you have DTcard(y/n): ";
		cin>>final;
		if(final=='y')
		{
			int cid;
			cout<<"\n\t\t\t\tEnter the card id number: ";
			cin>>cid;
			if(cid==id)
			{
				amt[1]=amt[1] - (0.1*amt[1]);
			};
		}
		cout<<"\n\t\t\t\tWant to pay by Card(y/n): ";
		char rep;
		cin>>rep;
		cout<<"\n\t\t\t\t"<<"Paying :"<<amt[2]<<"\n";
		if (rep=='y'||rep=='Y')
		{
			cout<<"\t\t\t\tName of the card holder: ";
			char n[10];
			gets(n);
			cout<<"\n\t\t\t\tEnter the card number: ";
			char Card[16];
			gets(Card);
			cout<<"\n\t\t\t\tExpiry(MM/YY): ";
			int expirymm, expiryyy;
			cin>>expirymm;
			cout<<"\n/";
			cin>>expiryyy;
			while(expirymm<(timePtr->tm_mon) || expiryyy<(timePtr->tm_year + 1900)){
				if(expirymm<=(timePtr->tm_mon))
					{
						cout<<"\n\t\t\t\tEnter the month again: ";
						cin>>expirymm;
					}
				if(expiryyy<(timePtr->tm_year + 1900))
				{
					cout<<"\n\t\t\t\tPlease enter a valid year: ";
					cin>>expiryyy;
				}
			};
			char password[3],vh;
			int h;
			puts("\n\t\t\t\tEnter the CVV/CVV2: ");
			while (1)
			{
				if (h<0)
					h=0;
				vh=getch();
				if (vh==13)
					break;
				if (vh==8)
				{
					putch(NULL);
					putch(NULL);
					putch(NULL);
					h--;
					continue;
				}
				password[h++]=vh;
				vh='*';
				putch(vh);
			};
			password[h]=='\0';
			}
	};
}


    






            
