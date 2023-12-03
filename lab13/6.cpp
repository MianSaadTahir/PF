#include <iostream>
#include <conio.h>
using namespace std;

string BattleShip(string ships[5][5], string coordinates);

main()
{
    string coordinates;
    string ships[5][5] = {
        {".", ".", ".", "*", "*"},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", ".", "*", "*", "."}};
    cout << "Enter coordinates to fire CoordinatesTable (e.g., A1, B3, E5): ";
    cin >> coordinates;
    cout << "Result: " << BattleShip(ships, coordinates);
    getch();
}
string BattleShip(string ships[5][5], string coordinates)
{
    string CoordinatesTable[5][5] = {{"A1", "A2", "A3", "A4", "A5"},
                                     {"B1", "B2", "B3", "B4", "B5"},
                                     {"C1", "C2", "C3", "C4", "C5"},
                                     {"D1", "D2", "D3", "D4", "D5"},
                                     {"E1", "E2", "E3", "E4", "E5"}};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (coordinates == CoordinatesTable[i][j])
            {
                if (ships[i][j] == ".")
                {
                    return "splash";
                }
                else
                {
                    return "BOOM";
                }
            }
        }
    }
}
