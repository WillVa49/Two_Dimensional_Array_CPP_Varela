/*Wilfrido Varela
Dr_T  11/5/2020
A program to practice working with multi-dimensional arrays
*/
#include <iostream>
using namespace std;

int main()

{

      const int Waco = 1;
      const int Week = 7;
      const int Haslet = 1;
 

    int temperature1[Haslet][Week];
    int temperature2[Waco][Week];

    //Inserting values into the temperature array
    cout << "Enter all temperature for a week of first city and then second city. \n";
    //Inserting temperature values to Austin
    for (int i = 0; i < Haslet; ++i)
    {
        for(int j = 0; j < Week; ++j)
        {
            cout << "Haslet " << i + 1 << ", Day " << j + 1 << " : ";
            cin >> temperature1[i][j];
        }
    }
    //Inserting temperature values to Waco
    for (int i = 0; i < Waco; ++i)
    {
      for (int j = 0; j < Week; ++j)
      {
        cout << "Waco " << i + 1 << ", Day " << j + 1 << " : ";
        cin >> temperature2[i][j];
      }
    }

    //Accessing the values from the temperature array
    cout << "\n\nDisplaying Values:\n"; 

    for (int i = 0; i < Haslet; ++i)
    {
        for(int j = 0; j < Week; ++j)
        {
            cout << "Haslet " << i + 1 << ", Day " << j + 1 << " = " << temperature1[i][j] << endl;
        }
    }    
    for (int i = 0; i < Waco; ++i)
    {
        for(int j = 0; j < Week; ++j)
        {
            cout << "Waco " << i + 1 << ", Day " << j + 1 << " = " << temperature2[i][j] << endl;
        }
    }
  //Extra Credit assignment
  //Creating a one dimensional array for Haslet
  int temperature3[Haslet][Week]
  {
    {78, 77, 77, 73, 72, 74, 71}
  };
  
  //Displaying the values for Haslet
  cout << "\n\nTemperature for Haslet using one dimensional array: " << endl;
  for ( int i = 0; i < Haslet; ++i )
  {
    for ( int j = 0; j < Week; ++j ) 
    {
      cout << "Haslet " << i + 1 << ", Day " << j + 1 << ": ";
      cout << temperature3[i][j] << endl;
    }
  }  
  
  //Creating a one dimensional array for Waco
  int temperature4[Waco][Week]
  {
    {79, 80, 81, 76, 76, 78, 77}
  };
  
  //Displaying the values for Waco
  cout << "\n\nTemperature for Waco using one dimensional array: " << endl;
  for ( int i = 0; i < Waco; ++i )
  {
    for ( int j = 0; j < Week; ++j ) 
    {
      cout << "Waco " << i + 1 << ", Day " << j + 1 << ": ";
      cout << temperature4[i][j] << endl;
    }
  }
  
    return 0;

}