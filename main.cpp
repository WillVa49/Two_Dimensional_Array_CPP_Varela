#include <iostream>
using namespace std;


int main()

{

      const int Austin = 1;
      const int Waco = 1;
      const int WEEK = 7;

 

    int temperature1[Austin][WEEK];
    int temperature2[Waco][WEEK];


    cout << "Enter all temperature for a week of first city and then second city. \n";

 



    for (int i = 0; i < Austin; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "Austin " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature1[i][j];
        }
    }

    for (int i = 0; i < Waco; ++i)
    {
      for (int j = 0; j < WEEK; ++j)
      {
        cout << "Waco " << i + 1 << ", Day " << j + 1 << " : ";
        cin >> temperature2[i][j];
      }
    }

    cout << "\n\nDisplaying Values:\n"; 

    for (int i = 0; i < Austin; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "Austin " << i + 1 << ", Day " << j + 1 << " = " << temperature1[i][j] << endl;
        }
    }    
    for (int i = 0; i < Waco; ++i)
    {
        for(int j = 0; j < WEEK; ++j)
        {
            cout << "Waco " << i + 1 << ", Day " << j + 1 << " = " << temperature2[i][j] << endl;
        }
    }

   
 

    return 0;

}