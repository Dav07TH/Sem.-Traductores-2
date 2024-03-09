#include <iostream>
#include <sstream>
using namespace std;

class R46
{
private:
    
public:
    R46(/* args */);
    ~R46();

    int cantidadTokens = 3;
    string forma = "R46 <Expresion> opMul <Expresion>";
    string id = "R46";
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

R46::R46(/* args */)
{
}

R46::~R46()
{
    
}

int R46::getCantidadTokens()
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
void R46::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R46::getForma()
{
    return forma;
}
void R46::setForma(string& value)
{
    forma = value;
}

string R46:: getID()
{
    return id;
}
void R46::setID(string& value)
{
    id = value;
}
int R46::getTipo()
{
    return tipo;
}
void R46::setTipo(int value)
{
    tipo = value;
}
string R46::getTipoS()
{
    return tipoS;
}
void R46::setTipoS(string& value)
{
    tipoS = value;
}

string R46::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}