#include <iostream>
#include <sstream>
using namespace std;

class R26
{
private:
    
public:
    R26(/* args */);
    ~R26();

    int cantidadTokens = 0;
    string forma = "R26 \\e";
    string id = "R26";
    int tipo = 37;
    string tipoS = "<Otro>";

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

R26::R26(/* args */)
{
}

R26::~R26()
{
    
}

int R26::getCantidadTokens()
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
void R26::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R26::getForma()
{
    return forma;
}
void R26::setForma(string& value)
{
    forma = value;
}

string R26:: getID()
{
    return id;
}
void R26::setID(string& value)
{
    id = value;
}
int R26::getTipo()
{
    return tipo;
}
void R26::setTipo(int value)
{
    tipo = value;
}
string R26::getTipoS()
{
    return tipoS;
}
void R26::setTipoS(string& value)
{
    tipoS = value;
}

string R26::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}