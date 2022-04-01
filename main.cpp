#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string answear;
    do {
        cout << "Do you want to run algorithm? If yes, please write RUN and press enter" << endl;
        cin >> answear;
    }
    while( answear != "RUN");

    if(answear == "RUN");
    int metersOfFence;

    do {
        cout << "How many meters of fence is available? Please, write integer value greater than zero.\n";
        cout << "If you will write float value, program will change from float to integer value." << endl;
        cin >> metersOfFence;
    }
    while(( metersOfFence <= 0));

    int a;
    int b;
    vector <int> tab;

    for (int i = 0; i <= (( metersOfFence / 2) - 1); i++)
        {
             a = ( metersOfFence / 2) - i ;
             b = metersOfFence -( 2 * a );
             cout << "segment a = " << a << "  segment b = " << b << endl;
             int area;
             area = b * a;
             cout << "area = " << area <<endl;

             tab.push_back( area );



       }
    cout << "Max area = " << *max_element( tab.begin(), tab.end() );

    return 0;
}
