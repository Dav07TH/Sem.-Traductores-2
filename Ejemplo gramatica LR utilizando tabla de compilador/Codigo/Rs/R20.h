#include <iostream>
#include <sstream>
using namespace std;

class R20
{
private:
    
public:
    R20(/* args */);
    ~R20();

    int cantidadTokens = 2;
    string forma = "R20 <Sentencia> <Sentencias>";//Vacío
    string id = "R20";
    int tipo = 35;
    string tipoS = "<Sentencias>";

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

R20::R20(/* args */)
{
}

R20::~R20()
{
    
}

int R20::getCantidadTokens()
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
void R20::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R20::getForma()
{
    return forma;
}
void R20::setForma(string& value)
{
    forma = value;
}

string R20:: getID()
{
    return id;
}
void R20::setID(string& value)
{
    id = value;
}
int R20::getTipo()
{
    return tipo;
}
void R20::setTipo(int value)
{
    tipo = value;
}
string R20::getTipoS()
{
    return tipoS;
}
void R20::setTipoS(string& value)
{
    tipoS = value;
}

string R20::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}