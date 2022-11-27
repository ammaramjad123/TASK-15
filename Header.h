#pragma once
#include <iostream>
using namespace std;

class AutoMobile
{
private:
	int yearOfManufacturing = 0000;
	char material = '\0';
	int quantityOfManufacturing = 0;
public:
	void setYearOfManufacturing(int);
	void setmaterial(char);
	void setQuantityOfManufactuing(int);
	int getYearOfManufacturing(void);
	char getmaterial(void);
	int getQuantityOfManufacturing(void);
};
