#include <iostream>
#include <sstream>
using namespace std;

class R44
{
private:
    
public:
    R44(/* args */);
    ~R44();

    int cantidadTokens = 2;
    string forma = "R44 opSuma <Expresion>";
    string id = "R44";
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

R44::R44(/* args */)
{
}

R44::~R44()
{
    
}

int R44::getCantidadTokens()
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
void R44::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R44::getForma()
{
    return forma;
}
void R44::setForma(string& value)
{
    forma = value;
}

string R44:: getID()
{
    return id;
}
void R44::setID(string& value)
{
    id = value;
}
int R44::getTipo()
{
    return tipo;
}
void R44::setTipo(int value)
{
    tipo = value;
}
string R44::getTipoS()
{
    return tipoS;
}
void R44::setTipoS(string& value)
{
    tipoS = value;
}

string R44::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}