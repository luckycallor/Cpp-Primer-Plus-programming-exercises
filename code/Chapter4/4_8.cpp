// By luckycallor
// Welcome to my site: www.luckycallor.com

#include<iostream>
#include<string>

using namespace std;

struct Pizza
{
    string Cmpny;
    int diameter;
    int weight;
};

int main()
{
    Pizza *p1 = new Pizza;
    cout << "Enter the diameter of the pizza: ";
    cin >> p1->diameter;
    cin.get(); //get the '\n' left in the last "cin..."
    cout << "Enter the company name of the pizza: ";
    getline(cin,p1->Cmpny);
    cout << "Enter the weight of the pizza: ";
    cin >> p1->weight;
    cout << "Here is the information you entered:\n";
    cout << "Company name: " << p1->Cmpny << endl;
    cout << "Diameter: " << p1->diameter << endl;
    cout  << "Weight: " << p1->weight << endl;
    delete p1;

    return 0;
}

