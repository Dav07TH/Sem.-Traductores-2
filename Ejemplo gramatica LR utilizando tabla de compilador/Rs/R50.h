#include <iostream>
#include <sstream>
using namespace std;

class R50
{
private:
    
public:
    R50(/* args */);
    ~R50();

    int cantidadTokens = 3;
    string forma = "R50 <Expresion> opAnd <Expresion>";
    string id = "R50";
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

R50::R50(/* args */)
{
}

R50::~R50()
{
    
}

int R50::getCantidadTokens()
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
void R50::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R50::getForma()
{
    return forma;
}
void R50::setForma(string& value)
{
    forma = value;
}

string R50:: getID()
{
    return id;
}
void R50::setID(string& value)
{
    id = value;
}
int R50::getTipo()
{
    return tipo;
}
void R50::setTipo(int value)
{
    tipo = value;
}
string R50::getTipoS()
{
    return tipoS;
}
void R50::setTipoS(string& value)
{
    tipoS = value;
}

string R50::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}