#include"ClassBank.h"

int main()
{
	Bank a;
	Bank b("Poleshko", 128, 20, 6000);

	a.Print();
	b.Print();

	b.ChangeSurname("Krutikov");
	b.Print();

	b.GetMoney(1000);
	b.Print();

	b.PutMoney(1500);
	b.Print();
}