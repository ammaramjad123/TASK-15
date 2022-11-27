#include "Header.h"

void AutoMobile::setYearOfManufacturing(int temp)
{
	yearOfManufacturing = temp;
}

void AutoMobile::setmaterial(char temp)
{
	material = temp;
}

void AutoMobile::setQuantityOfManufactuing(int temp)
{
	quantityOfManufacturing = temp;
}

int AutoMobile::getYearOfManufacturing(void)
{
	return yearOfManufacturing;
}

char AutoMobile::getmaterial(void)
{
	return material;
}

int AutoMobile::getQuantityOfManufacturing(void)
{
	return quantityOfManufacturing;
}
