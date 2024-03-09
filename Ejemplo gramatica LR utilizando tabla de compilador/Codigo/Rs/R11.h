#include <iostream>
#include <sstream>
using namespace std;

class R11
{
private:
    
public:
    R11(/* args */);
    ~R11();

    int cantidadTokens = 3;
    string forma = "R11 tipo identificador <ListaParam>";
    string id = "R11";
    int tipo = 30;
    string tipoS = "<Parametros>";

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

R11::R11(/* args */)
{
}

R11::~R11()
{
    
}

int R11::getCantidadTokens()
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
void R11::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R11::getForma()
{
    return forma;
}
void R11::setForma(string& value)
{
    forma = value;
}

string R11:: getID()
{
    return id;
}
void R11::setID(string& value)
{
    id = value;
}
int R11::getTipo()
{
    return tipo;
}
void R11::setTipo(int value)
{
    tipo = value;
}
string R11::getTipoS()
{
    return tipoS;
}
void R11::setTipoS(string& value)
{
    tipoS = value;
}

string R11::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}