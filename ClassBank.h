#include<iostream>
#include<string>

using namespace std;

class Bank
{
public:
	class BankAtributes;
	Bank()
	{
		BankAtributes account;
		this->surname = account.surname;
		this->number = account.number;
		this->percent = account.percent;
		this->money = account.money;

	}
	Bank(string surname, int number, int percent, int money)
	{
		BankAtributes account(surname, number, percent, money);
		this->surname = account.surname;
		this->number = account.number;
		this->percent = account.percent;
		this->money = account.money;
	}
	void Print()
	{
		cout << "\n\t--INFO--\n";
		cout << "Your Surname: " << surname << endl;
		cout << "Your adress number: " << number << endl;
		cout << "Your percent: " << percent << endl;
		cout << "Your amount of money: " << money << endl;
	}
	void ChangeSurname(string surname)
	{
		this->surname = surname;
	}
	void GetMoney(int money)
	{
		this->money -= money;
	}
	void PutMoney(int money)
	{
		this->money += money;
	}
	
private:

	class BankAtributes
	{
	public:
		friend Bank;

		BankAtributes()
		{
			cout << "Enter your Surname: ";
			cin >> surname;
			cout << endl;

			cout << "Enter your adress number: ";
			cin >> number;
			cout << endl;

			cout << "Enter your percent: ";
			cin >> percent;
			cout << endl;

			cout << "Enter your amount of money: ";
			cin >> money;
			cout << endl;
		}
		BankAtributes(string sname, int num, int per, int mon);

	private:

		string surname;
		int number;
		int percent;
		int money;

	};

	string surname;
	int number;
	int percent;
	int money;
};

Bank::BankAtributes::BankAtributes(string sname, int num, int per, int mon)
{
	surname = sname;
	number = num;
	percent = per;
	money = mon;
}
