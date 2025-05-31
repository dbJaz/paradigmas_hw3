#include "../headers/Label.hpp"
#include "../headers/Conteiner.hpp"


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