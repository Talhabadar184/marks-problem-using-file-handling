#include <iostream>
#include<fstream>
using namespace std;

int main() {
    int marks[20];
    int rollnumber[20];
    int  i,mar1=0,mar2=0,mar3=0;
    int  rn1 = -1, rn2 = -1, rn3 = -1;
    fstream file;
    file.open("example.txt",ios::out);
    cout << "Enter Marks of Students:" << endl;
    for (int i = 1; i < 4; i++)
    {
        cin >> marks[i];
    }
    cout << "Enter Roll# of Students:" << endl;
    for (int i = 1; i < 4; i++)
    {
        cin >> rollnumber[i];
    }
    for (int i = 0; i < 5; i++) {
        if (marks[i] > mar1) {
           mar3=mar2;
           rn3=rn2;
           mar2=mar1;
           rn2=rn1;
           mar1 = marks[i];
           rn1 = rollnumber[i];
        }
        else if (marks[i] > mar2) {
            mar3=mar2;
            rn3=rn2;
            mar2 = marks[i];
            rn2 = rollnumber[i];
        }
        else if (marks[i] > mar3) {
            mar3 = marks[i];
            rn3 = rollnumber[i];
        }
    }
    file<<"first position: "<<endl<<"Roll"<< rn1 << " got " << mar1 << " marks."<<endl<< "Second position:"
    << endl<< "Roll" << rn2 << " got " << mar2 << " marks."<<endl<< "Third position:" << endl
    << "Roll" << rn3 << " got " << mar3 << " marks."<<endl;

    file.close();
    
    file.open("example.txt",ios::in);
  char z[10];
while(1)
{
	file>>z;
	cout<<z<<" ";
	if(file.eof())
	break;
}
    return 0;
}
