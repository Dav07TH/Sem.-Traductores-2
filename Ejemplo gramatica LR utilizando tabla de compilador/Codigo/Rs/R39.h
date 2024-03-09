#include <iostream>
#include <sstream>
using namespace std;

class R39
{
private:
    
public:
    R39(/* args */);
    ~R39();

    int cantidadTokens = 1;
    string forma = "R39 cadena";
    string id = "R39";
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

R39::R39(/* args */)
{
}

R39::~R39()
{
    
}

int R39::getCantidadTokens()
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
void R39::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R39::getForma()
{
    return forma;
}
void R39::setForma(string& value)
{
    forma = value;
}

string R39:: getID()
{
    return id;
}
void R39::setID(string& value)
{
    id = value;
}
int R39::getTipo()
{
    return tipo;
}
void R39::setTipo(int value)
{
    tipo = value;
}
string R39::getTipoS()
{
    return tipoS;
}
void R39::setTipoS(string& value)
{
    tipoS = value;
}

string R39::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}