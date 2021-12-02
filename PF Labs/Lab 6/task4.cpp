#include <iostream>

using namespace std;

int main()
{
    double BMI, weightInPounds, hightInInches;
    cout << "Enter the weight in pounnds "<<endl;
    cin >> weightInPounds;
    cout << "Enter the hight in inches:"<< endl;
    cin>> hightInInches;
    BMI= (weightInPounds*703)/ (hightInInches*hightInInches);
    cout<<"BMI is:"<< BMI<< endl;
    
    
    if(BMI<18.5)
    cout<< "Underweight.";
    else if(BMI>=18.5 && BMI <=  24.9)
    cout<< "Normal.";
    else if(BMI>=25 && BMI <=  29.9)
    cout<< "Overweight.";
    else if(BMI>=30)
    cout<< "Obese";
    
    
    
    return 0;
}
