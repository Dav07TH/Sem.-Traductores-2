#include <iostream>
#include <sstream>
using namespace std;

class R30
{
private:
    
public:
    R30(/* args */);
    ~R30();

    int cantidadTokens = 1;
    string forma = "R30 <Expresion>";
    string id = "R30";
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

R30::R30(/* args */)
{
}

R30::~R30()
{
    
}

int R30::getCantidadTokens()
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
void R30::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R30::getForma()
{
    return forma;
}
void R30::setForma(string& value)
{
    forma = value;
}

string R30:: getID()
{
    return id;
}
void R30::setID(string& value)
{
    id = value;
}
int R30::getTipo()
{
    return tipo;
}
void R30::setTipo(int value)
{
    tipo = value;
}
string R30::getTipoS()
{
    return tipoS;
}
void R30::setTipoS(string& value)
{
    tipoS = value;
}

string R30::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}