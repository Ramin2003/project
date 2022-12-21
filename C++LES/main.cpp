//
//  main.cpp
//  C++LES
//
//  Created by Ramin Schooleman on 09/03/2022.
//

#include <iostream>
using namespace  std;


int main() {
    int dropjes = 20;
    int pakdrop;
    
        while (dropjes > 0) {
            cout << "hoeveel dropjes wil je pakken";
            cin >> pakdrop;
            if (pakdrop > dropjes) {
                cout << "Teveel dropjes gepakt";
            } else (dropjes = dropjes - pakdrop);
            
            
    }
    cout << "Je hebt nog" << dropjes << "dropjes over";
    
    return 0;
}
