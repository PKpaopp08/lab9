	#include<iostream>
	#include<iomanip> 
	using namespace std;

	int main(){

		double loan,rate,pay;
		double NB = 1;
		double Z = 0;
		
		cout << "Enter initial loan: "; cin >>  loan;
		cout << "Enter interest rate per year (%): "; cin >>  rate;
		cout << "Enter amount you can pay per year: "; cin >>  pay;

		
		cout << setw(13) << left << "EndOfYear#"; 
		cout << setw(13) << left << "PrevBalance"; 
		cout << setw(13) << left << "Interest"; 
		cout << setw(13) << left << "Total";
		cout << setw(13) << left << "Payment";
		cout << setw(13) << left << "NewBalance";
		cout << "\n";
		for(int year=1; NB >=0 ; year++){
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << year; 
			cout << setw(13) << left << loan;
			double In=loan*(rate/100);
				cout << setw(13) << left << In;
			double Total=loan+(loan*(rate/100));
				cout << setw(13) << left << Total;
			if (pay < Total){
				cout << setw(13) << left << pay;
			}
			else{
				cout << setw(13) << left << Total ;
			}
			NB = Total-pay;
			
			if (pay < Total){
				cout << setw(13) << left << NB;
			}
			else{
				cout << setw(13) << left << Z;
			}
			loan = NB;
			cout << "\n";	
		}
		return 0;
	}

	