#include <iostream>
#include <cstring>
using namespace std;

//QUESTION 5 - PART 1
class ZooAnimal  
{
    private:
        char* name;
        int cageNumber;
        int weightDate;
        int weight;

    public:
        void Destroy(); // 'Destroy' function
        void Create(char* n, int cN, int wDt, int W);
        char* reptName();
        int daysSinceLastWeighed(int today);
};

//QUESTION 5 - PART 2

void ZooAnimal::Create(char *n, int cN, int wDt, int W) {
    name = n;
    cageNumber = cN;
    weightDate = wDt;
    weight = W;
}

void ZooAnimal::Destroy() {
    name = NULL;
    delete [] name;
}

char* ZooAnimal::reptName() {
    return name;
}

int ZooAnimal::daysSinceLastWeighed(int today) {
    int startday, thisday;
    //Not sure, what happened here ->> Check(^^^^^^^)!
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    //^^^^^^^
    if (thisday < startday) {
        thisday += 360;
        return (thisday-startday);
    }

    if (today < weightDate) {
        today += 360;
        return (today-weightDate);
    }
}

//QUESTION 5 - PART 3
//=========== An application of the ZooAnimal class
int main()
{
    ZooAnimal bozo;
    bozo.Create("Bozo", 408, 1027, 400); //Warning-flags raised -> """ISO C++ forbids converting a string constant to ‘char*’"""
    cout << "This animal's name is " << bozo.reptName() << '.' << endl;
    bozo.Destroy();
    
    return 0;
}
