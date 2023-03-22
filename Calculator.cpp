#include<iostream>
#include<cmath>

using namespace std;

// declaration
void showMenu();
void arithmetic();
void trignometric();
void exponential();
void logarithmic();
void cls();

int main(){
	
	int selection = 0;
	char choice = 'y';
	
	while(choice == 'y' || choice == 'Y') {
		
		showMenu();
		cout << "Select a operation : ";
		cin >> selection;
		
		switch(selection) {
			case 1 : 
				arithmetic();break;
			case 2 :
				trignometric();break;
			case 3 : 
				exponential();break;
			case 4 :
				logarithmic();break;
			default :
				cout << "Invalid!!!";
		}
		
		cout << "Do you want to continue? ( y / n) "<<endl;
		cin >> choice;
		
		if(choice == 'n' || choice == 'N'){
			cout << "Thank you for using my calculator.";
			break;
		}
		else{
			cls();
			continue;
		}
		
	}
	
	return 0;
}

// choose the operation you want
void showMenu(){
	
	cout << "Calculator\n\n";
	cout << "[1] _ Arithmetic\n";
	cout << "[2] _ Trignometric\n";
	cout << "[3] _ Exponential\n";
	cout << "[4] _ Logarithmic\n\n";
	
}

// + & - & * & /
void arithmetic() {
	
	int operation = 0;
	float A = 0;
	float B = 0;
	
	cout << "Operations :\n\n";
	cout << "[1] _ Addition\n";
	cout << "[2] _ Substraction\n";
	cout << "[3] _ Production\n";
	cout << "[4] _ Division\n\n";
	cout << "select the operation : ";
	
	cin >> operation;
	cout << "\nEnter the first number : ";
	cin >> A;
	cout << "\nEnter the second number : ";
	cin >> B;
	cout << "Result : ";
	switch(operation) {
		case 1 :
			cout << (A + B);break;
		case 2 :
			cout << (A - B);break;
		case 3 :
			cout << (A * B);break;
		case 4 :
			cout << (A / B);break;
		default :
			cout << "Invalid operation!!!";break;
	}
	cout << endl;
	
}

// sine & cosine
void trignometric() {
	
	int operation = 0;
	float number = 0.0;
	
	cout << "Operations :\n\n";
	cout << "[1] _ Sine\n";
	cout << "[2] _ Cosine\n";
	cout << "select the operation : ";
	cin >> operation;
	cout << "Enter the number : ";
	cin >> number;
	cout << "\nResult : ";
	
	if(operation == 1){
		cout << sin(number);
	}
	else if(operation == 2){
		cout << cos(number);
	}
	else {
		cout << "Invalid!!!";
	}
	cout << endl;
	
}

// power
void exponential() {
	
	float A = 0.0;
	float B = 0.0;
	
	cout << "Enter the base number : ";
	cin >> A;
	cout << "\nEnter the exponent : ";
	cin >> B;
	cout << endl;
	
	cout << "Result : ";
	cout << pow(A,B) << endl;
	
}

// logarithm
void logarithmic() {
	
	float number = 0.0;
	
	cout << "Enter a number to calculate it's log : ";
	cin >> number;
	
	cout << "Result : ";
	cout << log(number) << endl;
	
}

void cls()
{
	system("cls");
}
