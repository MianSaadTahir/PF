#include<iostream>
using namespace std;
main()
{
	float vege_per_kg, fruit_per_kg;
	int vege_total_kg, fruit_total_kg;
	
	cout << "Enter vegetable price per kilogram (in coins): ";
	cin >> vege_per_kg;
	cout << "Enter fruit price per kilogram (in coins): ";
	cin >> fruit_per_kg;
	cout << "Enter total kilograms of vegetables: ";
	cin >> vege_total_kg;
	cout << "Enter total kilograms of fruits: ";
	cin >> fruit_total_kg;

	float total, total_vege, total_fruit;

		total_vege = vege_per_kg * vege_total_kg;
		total_fruit = fruit_per_kg * fruit_total_kg;
		total = (total_vege + total_fruit) / 1.94;

	cout << "Total earnings in Rupees (Rps): " << total;

}