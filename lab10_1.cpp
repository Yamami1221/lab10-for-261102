#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan, interest, payment, total;
	int year=1;
	cout << "Enter initial loan: "; cin >> loan;
	cout << "Enter interest rate per year (%): "; cin >> interest;
	cout << "Enter amount you can pay per year: "; cin >> payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << endl;
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while (true)
	{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << (interest * loan)/100;
		total = (interest * loan)/100 + loan;
		cout << setw(13) << left << total;
		if (total < payment) payment = total;
		cout << setw(13) << left << payment;
		loan = total - payment;
		cout << setw(13) << left << loan;
		cout << endl;
		year++;
		if (loan <= 0) break;
	}
	return 0;
}
