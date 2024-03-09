#include <iostream>
#include <sstream>
using namespace std;

class R19
{
private:
    
public:
    R19(/* args */);
    ~R19();

    int cantidadTokens = 0;
    string forma = "R19 \\e";//Vacío
    string id = "R19";
    int tipo = 35;
    string tipoS = "<Sentencias>";

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

R19::R19(/* args */)
{
}

R19::~R19()
{
    
}

int R19::getCantidadTokens()
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
void R19::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R19::getForma()
{
    return forma;
}
void R19::setForma(string& value)
{
    forma = value;
}

string R19:: getID()
{
    return id;
}
void R19::setID(string& value)
{
    id = value;
}
int R19::getTipo()
{
    return tipo;
}
void R19::setTipo(int value)
{
    tipo = value;
}
string R19::getTipoS()
{
    return tipoS;
}
void R19::setTipoS(string& value)
{
    tipoS = value;
}

string R19::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}