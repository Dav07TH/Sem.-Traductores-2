#include <iostream>
#include <sstream>
using namespace std;

class R28
{
private:
    
public:
    R28(/* args */);
    ~R28();

    int cantidadTokens = 3;
    string forma = "R28 { <Sentencias> }";
    string id = "R28";
    int tipo = 38;
    string tipoS = "<Bloque>";

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

R28::R28(/* args */)
{
}

R28::~R28()
{
    
}

int R28::getCantidadTokens()
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
void R28::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R28::getForma()
{
    return forma;
}
void R28::setForma(string& value)
{
    forma = value;
}

string R28:: getID()
{
    return id;
}
void R28::setID(string& value)
{
    id = value;
}
int R28::getTipo()
{
    return tipo;
}
void R28::setTipo(int value)
{
    tipo = value;
}
string R28::getTipoS()
{
    return tipoS;
}
void R28::setTipoS(string& value)
{
    tipoS = value;
}

string R28::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}