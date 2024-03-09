#include <iostream>
#include <sstream>
using namespace std;

class R12
{
private:
    
public:
    R12(/* args */);
    ~R12();

    int cantidadTokens = 0;
    string forma = "R12 \\e";
    string id = "R12";
    int tipo = 31;
    string tipoS = "<ListaParam>";

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

R12::R12(/* args */)
{
}

R12::~R12()
{
    
}

int R12::getCantidadTokens()
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
void R12::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R12::getForma()
{
    return forma;
}
void R12::setForma(string& value)
{
    forma = value;
}

string R12:: getID()
{
    return id;
}
void R12::setID(string& value)
{
    id = value;
}
int R12::getTipo()
{
    return tipo;
}
void R12::setTipo(int value)
{
    tipo = value;
}
string R12::getTipoS()
{
    return tipoS;
}
void R12::setTipoS(string& value)
{
    tipoS = value;
}

string R12::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}