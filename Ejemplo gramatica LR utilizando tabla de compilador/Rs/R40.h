#include <iostream>
#include <sstream>
using namespace std;

class R40
{
private:
    
public:
    R40(/* args */);
    ~R40();

    int cantidadTokens = 4;
    string forma = "R40 identificador ( <Argumentos> )";
    string id = "R40";
    int tipo = 43;
    string tipoS = "<LlamadaFunc>";

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

R40::R40(/* args */)
{
}

R40::~R40()
{
    
}

int R40::getCantidadTokens()
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
void R40::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R40::getForma()
{
    return forma;
}
void R40::setForma(string& value)
{
    forma = value;
}

string R40:: getID()
{
    return id;
}
void R40::setID(string& value)
{
    id = value;
}
int R40::getTipo()
{
    return tipo;
}
void R40::setTipo(int value)
{
    tipo = value;
}
string R40::getTipoS()
{
    return tipoS;
}
void R40::setTipoS(string& value)
{
    tipoS = value;
}

string R40::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}