#include <iostream>
#include <sstream>
using namespace std;

class R37
{
private:
    
public:
    R37(/* args */);
    ~R37();

    int cantidadTokens = 1;
    string forma = "R37 entero";
    string id = "R37";
    int tipo = 42;
    string tipoS = "<Termino>";

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

R37::R37(/* args */)
{
}

R37::~R37()
{
    
}

int R37::getCantidadTokens()
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
void R37::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R37::getForma()
{
    return forma;
}
void R37::setForma(string& value)
{
    forma = value;
}

string R37:: getID()
{
    return id;
}
void R37::setID(string& value)
{
    id = value;
}
int R37::getTipo()
{
    return tipo;
}
void R37::setTipo(int value)
{
    tipo = value;
}
string R37::getTipoS()
{
    return tipoS;
}
void R37::setTipoS(string& value)
{
    tipoS = value;
}

string R37::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}