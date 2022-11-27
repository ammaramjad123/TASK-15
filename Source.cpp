#include"Header.h"
void input(int&, char&, int&);
void display(int, char, int);
int main() {
	int temp1 = 0;
	char temp2 = 0;
	int temp3 = 0;
	AutoMobile a1;
	AutoMobile a2;
	AutoMobile a3;
	cout << "obj1:" << endl;
	input(temp1, temp2, temp3);
	a1.setYearOfManufacturing(temp1);
	a1.setmaterial(temp2);
	a1.setQuantityOfManufactuing(temp2);
	cout << "obj2:" << endl;
	input(temp1, temp2, temp3);
	a2.setYearOfManufacturing(temp1);
	a2.setmaterial(temp2);
	a2.setQuantityOfManufactuing(temp2);
	cout << "obj3:" << endl;
	input(temp1, temp2, temp3);
	a3.setYearOfManufacturing(temp1);
	a3.setmaterial(temp2);
	a3.setQuantityOfManufactuing(temp2);
	display(a1.getYearOfManufacturing(), a1.getmaterial(), a1.getQuantityOfManufacturing());
	display(a2.getYearOfManufacturing(), a2.getmaterial(), a2.getQuantityOfManufacturing());
	display(a3.getYearOfManufacturing(), a3.getmaterial(), a3.getQuantityOfManufacturing());
	system("pause");
	return 0;
}
void input(int& temp1, char& temp2, int& temp3) {
	cout << "Enter year of manufacture(4-digit): ";
	while (true)
	{
		cin >> temp1;
		if (temp1 >= 1111 && temp1 <= 9999)
		{
			break;
		}
		cout << "Invalid Input!!!" << endl;
		cout << "Try Again: ";
	}
	cout << "Enter material(1-char): " << endl;
	cout << "Material options: a,b,c" << endl;
	while (true)
	{
		cin >> temp2;
		if (temp2 == 'a' || temp2 == 'b' || temp2 == 'c')
		{
			break;
		}
		cout << "Invalid Input!!!" << endl;
		cout << "Try Again: ";
	}
	cout << "Enter quantity of manufacturing: ";
	while (true)
	{
		cin >> temp3;
		if (temp1 > 0)
		{
			break;
		}
		cout << "Invalid Input!!!" << endl;
		cout << "Try Again: ";
	}
}
void display(int temp1, char temp2, int temp3) {
	cout << "Year of manufacture: " << temp1 << endl;
	cout << "Material: " << temp2 << endl;
	cout << "Quantity of manufacturing: " << temp3 << endl;
}