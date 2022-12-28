//Geliştirici: ABDOUL FARIDE BASSIROU ALZOUMA                             -
//                                                                        -
// Öğrenci NO: B201200575                                                 -
//                                                                        -
// Ödev NO: 2                                                             -
//                                                                        -
//Ödev açıklaması: Matris oluşturma, Matris işlemleri ve şifreleme        -
//-------------------------------------------------------------------------

#include <iostream>
#include<iomanip>
#include <ctime>


using namespace std;

const int A_matris_Satir = 5;
const int A_matris_Sutun = 5;

const int B_matris_Satir = 5;
const int B_matris_Sutun = 5;

const int C_matris_Satir = 5;
const int C_matris_Sutun = 5;

int main()
{
	
	cout << setw(30) << "WELCOME" << endl;

	// A matrisinin olusturmasi

	int A_matris[A_matris_Satir][A_matris_Sutun];

	char devam;

	do
	{
		cout << endl;

		cout << "A Matrisinin elemanlari giriniz:([0-10] arasi):" << endl;

		
			for (int i = 0; i < A_matris_Satir; i++)
			{
				for (int j = 0; j < A_matris_Sutun; j++)
				{
					do
					{

					cout << "A[" << i << "][" << j << "]=";
					cin >> A_matris[i][j];

					} while (!(A_matris[i][j] >= 0 && A_matris[i][j]<=10));
				}
			}
		
			cout << endl;

	// A matrisinin ciktisi

	cout << "A Matrisi:";
	cout << endl;

	for (int i = 0; i < A_matris_Satir; i++)
	{
		for (int j = 0; j < A_matris_Sutun; j++)
		{
			cout << setw(4) << A_matris[i][j];
			if ((j + 1) % 5 == 0)
				cout << endl;
		}
	}

	cout << endl;

	// B matrisinin olusturmasi

	int B_matris[B_matris_Satir][B_matris_Sutun];

	srand(time(NULL));

	for (int i = 0; i < B_matris_Satir; i++)
		for (int j = 0; j < B_matris_Sutun; j++)
			B_matris[i][j] = rand() % 10 + 1;

	// B matrisinin ciktisi

	cout << "B Matrisi:";
	cout << endl;

	for (int i = 0; i < B_matris_Satir; i++)
	{
		for (int j = 0; j < B_matris_Sutun; j++)
		{
			cout << setw(4) << B_matris[i][j];
			if ((j + 1) % 5 == 0)
				cout << endl;
		}
	}
	
	cout << endl;

	// Matrislerinin islemleri 

	int islem;
	int C_matris[C_matris_Satir][C_matris_Sutun];
	
    do
	{
		cout << "Bir islem seciniz:(1-Toplama 2-Carpma):";
		cin >> islem;

	} while (!(islem == 1 || islem == 2));
	
	cout << endl;

	switch (islem)
	{

		// 1-Toplama islemi

	case 1:cout << "Sonuc Matrisi:" << endl;
		for (int i = 0; i < C_matris_Satir; i++)
			for (int j = 0; j < C_matris_Sutun; j++)
				C_matris[i][j] = A_matris[i][j] + B_matris[i][j];

		for (int i = 0; i < C_matris_Satir; i++)
		{
			for (int j = 0; j < C_matris_Sutun; j++)
			{
				cout << setw(4) << C_matris[i][j];
				if ((j + 1) % 5 == 0)
					cout << endl;
			}
		}; break;

		// 2-Carpma islemi

	case 2: cout << "Sonuc Matrisi:" << endl;
		for (int i = 0; i < C_matris_Satir; i++)
			for (int j = 0; j < C_matris_Sutun; j++)
				C_matris[i][j] = 0;

		for (int i = 0; i < C_matris_Satir; i++)
			for (int j = 0; j < C_matris_Sutun; j++)
				for (int k = 0; k < 5 ; k++)
					C_matris[i][j] += A_matris[i][k] * B_matris[k][j];

		for (int i = 0; i < C_matris_Satir; i++)
		{
			for (int j = 0; j < C_matris_Sutun; j++)
			{
				cout << setw(4) << C_matris[i][j];
				if ((j + 1) % 5 == 0)
					cout << endl;
			}
		}; break;
	}
	
	cout << endl;

	// Sifreleme

	int sifrelenecek_Satir, sifrelenecek_Sutun;

	do
	{

		cout << "Sifrelenecek Satir ve Sutun Numarasini giriniz:(1-5 arasinda):" << endl;
		cin >> sifrelenecek_Satir >> sifrelenecek_Sutun;

	} while (!(sifrelenecek_Satir >= 0 && sifrelenecek_Satir <= 5 && sifrelenecek_Sutun >= 0 && sifrelenecek_Sutun <= 5));

	for (int i = 0; i < C_matris_Satir; i++)
	{
		for (int j = 0; j < C_matris_Sutun; j++)
		{
			if ((sifrelenecek_Satir - 1) == i || (sifrelenecek_Sutun-1) == j)
			{
				cout << setw(4) << "*";
				if ((j + 1) % 5 == 0)
					cout << endl;
			}
			else
			{
				cout << setw(4) << C_matris[i][j];
				if ((j + 1) % 5 == 0)
					cout << endl;
			}
		}
	}

	// Kullanıcıya devam etmek isteyip istemediği sorusu

	do
	{
		cout << "Devam etmek istiyor musunuz(E/H):";
		cin >> devam;
	} while (!(devam == 'E' || devam == 'H'));

}while (devam != 'H');
cout << endl;

cout << "HOSCAKALIN :)" << endl;




}