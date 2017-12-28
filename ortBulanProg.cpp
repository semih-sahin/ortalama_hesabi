#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main(){
	int sayiAdedi, result=0;
	A10:
	cout << "Kac sayi gireceksiniz: ";
	cin >> sayiAdedi;
	if (sayiAdedi<=0){
		cout << "Lutfen sayi adedini pozitif giriniz.\n";
		goto A10;
	}
	system("cls");
	int array[sayiAdedi];
	for (int i=0; i<sayiAdedi; i++){
		cout << i+1 << ". sayiyi giriniz: ";
		cin >> array[i];
	}
	for (int j=0; j<sayiAdedi; j++){
		result+=array[j];
	}
	result=result/sayiAdedi;
	cout << "\n\nBu sayilarin ortalamasi = " << result << endl;
	getch();
	return 0;
}
