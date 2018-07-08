#include<iostream>
#include<conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;

#include<iomanip>

using std::setw;

class TelefonNumarasi{
	friend ostream &operator <<(ostream &, const TelefonNumarasi &);
	friend istream &operator >>(istream &, TelefonNumarasi &);

private:
	char alanKodu[4];
	char santral[4];
	char hat[5];
};

ostream &operator<<(ostream &output, const TelefonNumarasi &num){
	cout<<"("<<num.alanKodu<<")"<<num.santral<<"---"<<num.hat;
	return output;
}

istream &operator>>(istream &input, TelefonNumarasi &num){
	input.ignore();
	input>>setw(4);
	input.ignore(2);
	input>>setw(4);
	input.ignore();
	input>>setw(5);
	return input;
}

int main(){
	TelefonNumarasi telefon;

	cout<<"Telefon numarasi(123)456-7890 seklinde giriniz=\n";
	cin>>telefon;

	cout<<"Girilen telefon numarasi= "<<telefon<<endl;

	getch();
	return 0;
}