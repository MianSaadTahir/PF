#include <iostream>
using namespace std;

void flowerShop(int redRose, int whiteRose, int tulip);

main()
{
    int redRose, whiteRose, tulip;
    cout << "Red Rose: ";
    cin >> redRose;
    cout << "White Rose: ";
    cin >> whiteRose;
    cout << "Tulips: ";
    cin >> tulip;
    flowerShop(redRose, whiteRose, tulip);

}

void flowerShop(int redRose, int whiteRose, int tulip)
{
    float red, white, tulips, total, a, disc;
    red = redRose*2.00;
    white = whiteRose*4.10;
    tulips = tulip*2.50;

    total = red+white+tulips;
    a = total*0.2;
    disc = total - a;

    cout << "Original Price: $" << total << endl;

    if (total>200)
    {
        cout << "Price after Discount: $" << disc;
    }
    else
    {
        cout << "No discount applied.";
    }
    
}