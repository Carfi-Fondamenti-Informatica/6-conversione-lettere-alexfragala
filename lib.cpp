//
// Created by Alex Fragalà on 01/12/21.
//
#include <iostream>
#include "lib.h"

char carattere(char a){
    if(isalpha(a)){
        return true;
    } else if (isdigit(a)){
        return false;
    }
}
