#include <iostream>
using namespace std;

double celsToFaring(double);

int main()
{
	setlocale(LC_ALL, "Russian");

	double dist;
	cout << "Введите расстояние в световых годах: ";
	cin >> dist;
	double distFin = celsToFaring(dist);
	cout << dist << " световых лет - это " << distFin << " астрономических едениц";
	return 0;
}

double celsToFaring(double sts)
{
	sts = sts * 63240;
	return sts;
}