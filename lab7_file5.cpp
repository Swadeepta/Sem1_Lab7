#include <iostream>
using namespace std;

class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Destroy (); // destroy function
      char* reptName ();
      void create(char *str, int a1, int a2, int a3);
      int daysSinceLastWeighed (int today);
   };
   
   void ZooAnimal::Destroy ()
   {    
    delete [] name;
   }

   // -------- member function to return the animal's name
   char* ZooAnimal::reptName ()
   {
    return name;
   }
   void ZooAnimal::Create(char *str,int a1, int a2, int a3)
      {
         bozo.name=str;
         bozo.cagenumber=a1;
         bozo.wieghtdate=a2;
         bozo.weight=a3;
      }
   // -------- member function to return the number of days since the animal was last weighed
   
   int Zooanimal::daysSinceLastWeighed(int today)
   {
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday) 
        thisday += 360;
    return (thisday-startday);
   }

   void usingZooanimalclass()
   {
      int 
   }

   void main ()
   {
    ZooAnimal bozo;
    bozo.Create ("Bozo", 408, 1027, 400);
    cout << "This animal's name is " << bozo.name << endl;
    bozo.Destroy ();
}
