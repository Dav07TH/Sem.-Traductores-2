#include <iostream>
#include <sstream>
using namespace std;

class R43
{
private:
    
public:
    R43(/* args */);
    ~R43();

    int cantidadTokens = 3;
    string forma = "R43 ( <Expresion> )";
    string id = "R43";
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

R43::R43(/* args */)
{
}

R43::~R43()
{
    
}

int R43::getCantidadTokens()
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
void R43::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R43::getForma()
{
    return forma;
}
void R43::setForma(string& value)
{
    forma = value;
}

string R43:: getID()
{
    return id;
}
void R43::setID(string& value)
{
    id = value;
}
int R43::getTipo()
{
    return tipo;
}
void R43::setTipo(int value)
{
    tipo = value;
}
string R43::getTipoS()
{
    return tipoS;
}
void R43::setTipoS(string& value)
{
    tipoS = value;
}

string R43::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}