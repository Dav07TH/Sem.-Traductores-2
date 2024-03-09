#include <iostream>
#include <sstream>
using namespace std;

class R45
{
private:
    
public:
    R45(/* args */);
    ~R45();

    int cantidadTokens = 2;
    string forma = "R45 opNot <Expresion>";
    string id = "R45";
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

R45::R45(/* args */)
{
}

R45::~R45()
{
    
}

int R45::getCantidadTokens()
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
void R45::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R45::getForma()
{
    return forma;
}
void R45::setForma(string& value)
{
    forma = value;
}

string R45:: getID()
{
    return id;
}
void R45::setID(string& value)
{
    id = value;
}
int R45::getTipo()
{
    return tipo;
}
void R45::setTipo(int value)
{
    tipo = value;
}
string R45::getTipoS()
{
    return tipoS;
}
void R45::setTipoS(string& value)
{
    tipoS = value;
}

string R45::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}