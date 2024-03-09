#include <iostream>
#include <sstream>
using namespace std;

class R35
{
private:
    
public:
    R35(/* args */);
    ~R35();

    int cantidadTokens = 1;
    string forma = "R35 <LlamadaFunc>";
    string id = "R35";
    int tipo = 42;
    string tipoS = "<Termino>";

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

R35::R35(/* args */)
{
}

R35::~R35()
{
    
}

int R35::getCantidadTokens()
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
void R35::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R35::getForma()
{
    return forma;
}
void R35::setForma(string& value)
{
    forma = value;
}

string R35:: getID()
{
    return id;
}
void R35::setID(string& value)
{
    id = value;
}
int R35::getTipo()
{
    return tipo;
}
void R35::setTipo(int value)
{
    tipo = value;
}
string R35::getTipoS()
{
    return tipoS;
}
void R35::setTipoS(string& value)
{
    tipoS = value;
}

string R35::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}