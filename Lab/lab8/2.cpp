#include <iostream>
using namespace std;

int calculateDamage(string Ptype, string Otype, int attack, int defense);

main()
{
    string Ptype, Otype;
    int attack, defense;
    cout << "Enter your type: ";
    cin >> Ptype;
    cout << "Enter opponent type: ";
    cin >> Otype;
    cout << "Enter your power: ";
    cin >> attack;
    cout << "Enter opponent defence: ";
    cin >> defense;
    int result = calculateDamage(Ptype, Otype, attack, defense);
    cout << result;
}
int calculateDamage(string Ptype, string Otype, int attack, int defense)
{
    float damage;
    float effectiveness;
    if (Ptype == "fire" && Otype == "grass")
    {
        effectiveness = 2;
    }
    else if (Ptype == "fire" && Otype == "water")
    {
        effectiveness = 0.5;
    }
    else if (Ptype == "fire" && Otype == "electric")
    {
        effectiveness = 1;
    }
    else if (Ptype == "water" && Otype == "grass")
    {
        effectiveness = 0.5;
    }
    else if (Ptype == "water" && Otype == "electric")
    {
        effectiveness = 0.5;
    }
    else if (Ptype == "grass" && Otype == "electric")
    {
        effectiveness = 1;
    }
    else if (Ptype == "grass" && Otype == "fire")
    {
        effectiveness = 0.5;
    }
    else if (Ptype == "water" && Otype == "fire")
    {
        effectiveness = 2;
    }
    else if (Ptype == "electric" && Otype == "fire")
    {
        effectiveness = 1;
    }
    else if (Ptype == "grass" && Otype == "water")
    {
        effectiveness = 2;
    }
    else if (Ptype == "electric" && Otype == "water")
    {
        effectiveness = 2;
    }
    else if (Ptype == "electric" && Otype == "grass")
    {
        effectiveness = 1;
    }
    damage = 50 * (attack / defense) * effectiveness;
    return damage;
}