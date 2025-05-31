#pragma once
#include <iostream>
#include <string>
#include <vector> 
#include <utility>
#include<type_traits>
using namespace std;


template<typename T>
class Conteiner{
    private: 
        vector<T> data;
    public: 
        Conteiner(T n){data.push_back(n);}
        void Add(T n){data.push_back(n);return;}
        string Process(){
            string value = "";
            if constexpr(is_same_v<T, double>){
                value += "[";
                size_t index=0;
                for (auto& i : data){
                    index++; 
                    value += to_string(i);
                    if (index != data.size()){
                        value += ",";}
                }
                value += "]";
            }
            if constexpr(is_same_v<T, string>){
                value += "[";
                size_t index =0;
                for (auto& i : data){
                    index ++;
                    value += "\"";
                    value += i;
                    value += "\"";
                    if (index != data.size()){
                        value += ",";}
                }
                value += "]";
            }
            if constexpr(is_same_v<T, vector<int>>){
                value += "[";
                size_t index1 =0;
                for (auto& i : data){
                    index1++;
                    value += "\n      [";
                    size_t index2=0;
                    for (auto& j: i){
                        index2 ++;
                        value += to_string(j);
                        if (index2 != i.size()){
                            value += ",";}
                    }
                    value += "]";
                    if (index1 != data.size()){
                        value += ",";}
                }
                value += "\n      ]";
            }
            return value; 
        }  
        string getType(){
            if constexpr(is_same_v<T,double>){return "vec_doubles";}
            if constexpr(is_same_v<T,string>){return "palabras";}
            if constexpr(is_same_v<T, vector<int>>){return "listas";}
            return "not valid";
        }

};

