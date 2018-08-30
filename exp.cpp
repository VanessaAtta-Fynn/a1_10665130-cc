#include <iostream>
using namespace std;

int main()
{
	int n;
	int i;
	bool Prime_number = true;

	cout << "Enter a positive integer: ";
	cin >> n;

    //since 2 is the first prime number...then the initial i=2
        if(n<2){
            cout << "Syntax error";
        }else{
	for(i=2; i <= n/2; i++){
		if(n % i == 0){
			Prime_number = false;
			break;
			//the break command is used to end the process after an answer is produced
		}
	}

	if (Prime_number){
		cout << "This is a prime number";
	}
		else{
        cout << "This is a not prime number";
		}
        }
	return 0;
}
