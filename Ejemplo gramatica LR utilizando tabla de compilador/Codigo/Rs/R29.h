#include <iostream>
#include <sstream>
using namespace std;

class R29
{
private:
    
public:
    R29(/* args */);
    ~R29();

    int cantidadTokens = 0;
    string forma = "R29 \\e";
    string id = "R29";
    int tipo = 39;
    string tipoS = "<ValorRegresa>";

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

R29::R29(/* args */)
{
}

R29::~R29()
{
    
}

int R29::getCantidadTokens()
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
void R29::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R29::getForma()
{
    return forma;
}
void R29::setForma(string& value)
{
    forma = value;
}

string R29:: getID()
{
    return id;
}
void R29::setID(string& value)
{
    id = value;
}
int R29::getTipo()
{
    return tipo;
}
void R29::setTipo(int value)
{
    tipo = value;
}
string R29::getTipoS()
{
    return tipoS;
}
void R29::setTipoS(string& value)
{
    tipoS = value;
}

string R29::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}