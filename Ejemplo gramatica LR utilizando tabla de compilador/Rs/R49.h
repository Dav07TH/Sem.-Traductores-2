#include <iostream>
#include <sstream>
using namespace std;

class R49
{
private:
    
public:
    R49(/* args */);
    ~R49();

    int cantidadTokens = 3;
    string forma = "R49 <Expresion> opIgualdad <Expresion>";
    string id = "R49";
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

R49::R49(/* args */)
{
}

R49::~R49()
{
    
}

int R49::getCantidadTokens()
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
void R49::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R49::getForma()
{
    return forma;
}
void R49::setForma(string& value)
{
    forma = value;
}

string R49:: getID()
{
    return id;
}
void R49::setID(string& value)
{
    id = value;
}
int R49::getTipo()
{
    return tipo;
}
void R49::setTipo(int value)
{
    tipo = value;
}
string R49::getTipoS()
{
    return tipoS;
}
void R49::setTipoS(string& value)
{
    tipoS = value;
}

string R49::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}