//
// Created by ricar on 29/11/2021.
//

#include "Passenger.h"


std::string Passenger::getName() {
    int i=0;
    string s;
    char c;
    while ((c = name[i++] )!= '\0') {
        s+=c;
    }
    return s;
}
