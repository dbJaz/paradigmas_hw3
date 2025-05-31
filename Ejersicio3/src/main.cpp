#include "../headers/Label.hpp"
#include "../headers/Conteiner.hpp"


// template<typename T>
// class Conteiner{
//     private: 
//         vector<T> data;
//     public: 
//         Conteiner(T n){data.push_back(n);}
//         void Add(T n){data.push_back(n);return;}
//         string Process(){
//             string value = "";
//             if constexpr(is_same_v<T, double>){
//                 value += "[";
//                 int index=0;
//                 for (auto& i : data){
//                     index++; 
//                     value += to_string(i);
//                     if (index != data.size()){
//                         value += ",";}
//                 }
//                 value += "]";
//             }
//             if constexpr(is_same_v<T, string>){
//                 value += "[";
//                 int index =0;
//                 for (auto& i : data){
//                     index ++;
//                     value += "\"";
//                     value += i;
//                     value += "\"";
//                     if (index != data.size()){
//                         value += ",";}
//                 }
//                 value += "]";
//             }
//             if constexpr(is_same_v<T, vector<int>>){
//                 value += "[";
//                 int index1 =0;
//                 for (auto& i : data){
//                     index1++;
//                     value += "\n      [";
//                     int index2=0;
//                     for (auto& j: i){
//                         index2 ++;
//                         value += to_string(j);
//                         if (index2 != i.size()){
//                             value += ",";}
//                     }
//                     value += "]";
//                     if (index1 != data.size()){
//                         value += ",";}
//                 }
//                 value += "\n      ]";
//             }
//             return value; 
//         }  
//         string getType(){
//             if constexpr(is_same_v<T,double>){return "vec_doubles";}
//             if constexpr(is_same_v<T,string>){return "palabras";}
//             if constexpr(is_same_v<T, vector<int>>){return "listas";}
//             return "not valid";
//         }

// };

// class Label{
//     private: 
//         vector<pair<string,string>> values;
//     public: 
//         Label(string s, string type){
//             pair<string,string> val; 
//             val.second = s;
//             val.first = type; 
//             values.push_back(val);
//         }

//         void Add(string s, string type){
//             pair<string,string> val; 
//             val.second = s;
//             val.first = type;
//             values.push_back(val);
//         }
//         void print(){
//             cout << "{\n";
//             int index = 0;
//             for (auto& val: values){
//                 index ++;
//                 cout << "\""<<val.first << "\" : " << val.second;
//                 if (index == values.size()){
//                     cout << "\n}"<< endl;
//                 }
//                 else{
//                     cout << "," << endl; 
//                 }
//             }
//         }
// };

int main(){
    Conteiner<double> doub(1.3);
    doub.Add(2.1);
    doub.Add(3.2);

    Conteiner<string> str("Hola");
    str.Add("Mundo");

    Conteiner<vector<int>> lst(vector <int> {1,2});
    lst.Add(vector <int> {3,4});

    Label json(doub.Process(),doub.getType());
    json.Add(str.Process(), str.getType());
    json.Add(lst.Process(),lst.getType());
    json.print();
    return 0;

}