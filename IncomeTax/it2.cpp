#include <iostream>
using namespace std;
int main ()
{
    float x;
int age, a;
string name, surname;
cout << "For company use or personal use? \n If personal use then enter 1 \n If comapany purpose then enter 2";
cin >> a;
switch (a)
{ 
    case 1:
    int main();{  float x, y, z;
    int age;
    cout << "Client Age:"; cin >> age;
    cout << name <<" " << surname << ", please enter your Annual Income:Rs."; cin >> x;
    while ((age<=60))
    {
    {
        while (x<=250000)
    {
        cout << "No Tax will be levied" << "\nFinal Income (After Deduction) is Rs." << x;
        break;
    }
    while (x>=250001 && x<=500000 )
    {
        x=x-(x*0.05);
        cout << "Tax Levied= 5%" << "\nFinal Income (After Deduction) is Rs." << x; 
        break;
    }
    while (x>=500001 && x<=750000)
    {
        x=x-12500-(0.1*x);
        cout << "Tax Levied= 10% + 12500" <<"\nFinal Income (After Deduction) is Rs." << x;
        break;
    }
    while (x>=750001 && x<=1000000)
    {
        x=x-37500-(x*0.15);
        cout << "Tax Levied= 15% + 37500" << "\nFinal Income (After Deduction) is Rs." << x; 
        break;
    }
    while (x>=1000001 && x<=1250000)
    {
        x=x-75000-(x*0.2);
        cout << "Tax Levied= 20% + 75000" << "\nFinal Income (After Deduction) is Rs." << x; 
        break;
    }
    while (x>=1250001 && x<=1500000)
    {
        x=x-125000-(x*0.25);
        cout << "Tax Levied= 25% + 125000" << "\nFinal Income (After Deduction) is Rs." << x; 
        break;
    }
    while (x>=1500001)
    {
        x=x-187500-(x*0.30);
        cout << "Tax Levied= 30% + 187500" << "\nFinal Income (After Deduction) is Rs." << x; 
        break;
    }
    cout << "\nWant to save some tax? \nPlease stay tuned for further releases";
    
    
   break;
    } break;

    }
    while (age>60 && age<=80)
    {
         while (x<300000)
        {
            cout << "\nNo Tax will be levied";
            break;

        }
        while (x>=300000 && x<500000)
        {cout << "\nTax levied = 5% + 4% Cess";
        x=x - (x*0.05)*0.04;
        cout << "Final income (after deduction) is Rs. " << x;
        break;

        }
        while (x<= 500000 && x< 1000000)
        {
            cout << "\nTax levied = 20%";
            x = x - (x*0.2)*0.04;
            cout << "\nFinal income (after deduction) is Rs. " << x;
            break;
            
        }
        while (x>= 1000000)
        {
            cout << "\nTax levied= 30%";
            x = x- (x*0.3)*0.04;
            cout << "\nFinal income (after deduction) is Rs. " << x;
            break;
        }

        break;
    }
    while (age>80)
    {
        while (x<=500000)
        {
            cout << "No Tax will be levied" << "\nFinal Income (After Deduction) is Rs." << x;
            break;
        }
        while (x<=500001 && x>=1000000)
        {
            cout << "Tax Levied = 20%";
            x=x-(x*0.2);
            cout << "Final Income (After Deduction)" <<x;
            break;
        }
        while (x>=1000001)
        {
            cout <<"Tax Levied = 30%";
            x=x-(x*0.3);
            cout <<"Final Income (After deduction) is Rs." <<x;
            break;
        }
        break;  
    }
    break; }
    break;
    
  

    case 2:
    int main();{
    cout << "Please enter you annual turn over:" << " Rs."; cin >> x;
    if (x<=2500000000)
    {
        cout <<"Tax Levied = 25%";
        x=x-(x*0.25);
        cout<<"\nGross turnover (After Taxation) is Rs." <<x;
    }
    else
    {
        cout <<"Tax Levied = 30%";
        x=x-(x*0.3);
        cout<<"Gross turnover (After Deduction) is Rs." <<x;
    }
    break;}
     }
     return 0;

}
