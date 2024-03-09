#include <iostream>
#include <sstream>
using namespace std;

class R31
{
private:
    
public:
    R31(/* args */);
    ~R31();

    int cantidadTokens = 0;
    string forma = "R31 \\e";
    string id = "R31";
    int tipo = 40;
    string tipoS = "<Argumentos>";

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

R31::R31(/* args */)
{
}

R31::~R31()
{
    
}

int R31::getCantidadTokens()
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
void R31::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R31::getForma()
{
    return forma;
}
void R31::setForma(string& value)
{
    forma = value;
}

string R31:: getID()
{
    return id;
}
void R31::setID(string& value)
{
    id = value;
}
int R31::getTipo()
{
    return tipo;
}
void R31::setTipo(int value)
{
    tipo = value;
}
string R31::getTipoS()
{
    return tipoS;
}
void R31::setTipoS(string& value)
{
    tipoS = value;
}

string R31::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}