#pragma once
#include <iostream>
#include <string>
#include <vector> 
#include <utility>
#include<type_traits>
using namespace std;

class Label{
    private: 
        vector<pair<string,string>> values;
    public: 
        Label(string s, string type);

        void Add(string s, string type);
        void print();
};
