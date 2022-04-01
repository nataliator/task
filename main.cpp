#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Data{
    int a;
    int b;
    int area;
};

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
    vector <Data> tab;

    for (int i = 0; i <= (( metersOfFence / 2) - 1); i++)
        {
             a = ( metersOfFence / 2) - i ;
             b = metersOfFence -( 2 * a );
             cout << "segment a = " << a << "  segment b = " << b << endl;
             int area;
             area = b * a;
             cout << "area = " << area <<endl;
             Data data;
             data.a = a;
             data.b = b;
             data.area = area;
             tab.push_back( data );

       }
       int max = tab[0].area;
       int index = 0;
     for(int k = 0; k < tab.size();k++)
     {
         if(max < tab[k].area)
         {
             max = tab[k].area;
             index = k;
         }
     }
     cout << "Max area = " << max <<endl;
     cout << "Optimal value of a = " << tab[index].a << endl;
     cout << "Optimal value of b = " << tab[index].b << endl;

    return 0;
}
