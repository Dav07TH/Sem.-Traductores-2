#include <iostream>
#include <sstream>
using namespace std;

class R48
{
private:
    
public:
    R48(/* args */);
    ~R48();

    int cantidadTokens = 3;
    string forma = "R48 <Expresion> opRelac <Expresion>";
    string id = "R48";
    int tipo = 45;
    string tipoS = "<Expresion>";

    int getCantidadTokens();
    void setCantidadTokens(int value);
    string getForma();
    void setForma(string& value);
    string getID();
    void setID(string& value);
    int getTipo();
    void setTipo(int value);
    string getTipoS();
    void setTipoS(string& value);

    string toString();
};

R48::R48(/* args */)
{
}

R48::~R48()
{
    
}

int R48::getCantidadTokens()
{
    /*cantidadTokens = 0;
    int largo = forma.length();
    for(int i = 0; i<largo; i++)
    {
        if(forma[i] == ' ')
            cantidadTokens++;
    }*/
    return cantidadTokens;
}
void R48::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R48::getForma()
{
    return forma;
}
void R48::setForma(string& value)
{
    forma = value;
}

string R48:: getID()
{
    return id;
}
void R48::setID(string& value)
{
    id = value;
}
int R48::getTipo()
{
    return tipo;
}
void R48::setTipo(int value)
{
    tipo = value;
}
string R48::getTipoS()
{
    return tipoS;
}
void R48::setTipoS(string& value)
{
    tipoS = value;
}

string R48::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}