//
//  main.cpp
//  paasei
//
//  Created by Ramin Schooleman on 13/04/2022.
//

#include <iostream>
using namespace std;
float paasei();
int main() {
    int lln;
    cout << "aantal leerlingen?\n";
    cin >> lln;
    for(int x = 1; x <= lln; x++){
        string name;
        cout << "naam\n";
        cin >> name;
        cout << name << " krijgt zoveel" << paasei();
        
        
    }
    
}




float paasei(){
    float lengte;
    float gewicht;
    int leeftijd;
    float bmi;
    cout << "lengte\n";
    cin >> lengte;

    
    cout << "gewicht\n";
    cin >> gewicht;

    
    
    cout << "leeftijd\n";
    cin >> leeftijd;

    
    cin >> bmi;
    bmi = gewicht / (lengte * lengte);
    float paasei = bmi - leeftijd;
    
    
    return paasei;
}







