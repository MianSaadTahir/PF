#include <iostream>
using namespace std;

void tpChecker(int people, int tp);

main()
{
    int people, tp;

    cout << "Number of people in the household: ";
    cin >> people;
    cout << "Number of rolls of TP: ";
    cin >> tp;
    tpChecker(people, tp);
}

void tpChecker(int people, int tp)
{
    int ppl, tp_will_last, tissue;

    ppl = people * 57;
    tissue = tp * 500;
    tp_will_last = tissue / ppl;

    if (tp_will_last <= 10)
    {
        cout << "Your TP will only last " << tp_will_last << " days, buy more!";
    }

    else
    {
        cout << "Your TP will last " << tp_will_last << " days, no need to panic!";
    }
}
