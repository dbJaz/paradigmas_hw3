#include "../headers/Label.hpp"

Label :: Label(string s, string type){
            pair<string,string> val; 
            val.second = s;
            val.first = type; 
            values.push_back(val);
        }

void Label :: Add(string s, string type){
            pair<string,string> val; 
            val.second = s;
            val.first = type;
            values.push_back(val);
        }
void Label :: print(){
            cout << "{\n";
            size_t index = 0; //uso size_t en lugar de int para luego poder comparar con el size de values 
            for (auto& val: values){
                index ++;
                cout << "\""<<val.first << "\" : " << val.second;
                if (index == values.size()){
                    cout << "\n}"<< endl;
                }
                else{
                    cout << "," << endl; 
                }
            }
        }



