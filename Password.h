//
// Created by Mathieu Rossetto on 30/09/2016.
//

#ifndef CPP_RESIT_PASSWORD_H_H
#define CPP_RESIT_PASSWORD_H_H

#include <string>
#include <iostream>
#include <random>

using namespace std;

class Password {
    int level;
    string letter = "";
    string passwd = "";

public:
    void generate(int level);
};

#endif //CPP_RESIT_PASSWORD_H_H
