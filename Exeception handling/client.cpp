#include"customexception.h"
#include"wallet.h"

int main() {
	try {
		Wallet w1(1, "abc", 200000);
		w1.accept();
		w1.display();
		Wallet w2;

		int choice;
		cout << "enter the choices\n";
		cout << "1.add money 2.withdrawmoney 3.display 4.exit";
		cin >> choice;
		switch (choice)
		{
		case 1:
			w2.add_money();
			cout << "money is added: " << endl;
			break;
		case 2:
			w2.withdraw_money();
			cout << "money is withdraw :" << endl;
			break;
		case 3:
			cout << "details are :" << endl;
			w2.display();
			break;
		case 4:
			cout << "exit " << endl;
			break;
		default:
			cout << "invalid choice: " << endl;
			break;
		}
	}
	catch (custom_exception err) {
		cout << err.what();
	}
	return 0;
}

