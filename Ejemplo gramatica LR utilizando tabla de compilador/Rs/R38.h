#include <iostream>
#include <sstream>
using namespace std;

class R38
{
private:
    
public:
    R38(/* args */);
    ~R38();

    int cantidadTokens = 1;
    string forma = "R38 real";
    string id = "R38";
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

R38::R38(/* args */)
{
}

R38::~R38()
{
    
}

int R38::getCantidadTokens()
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
void R38::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R38::getForma()
{
    return forma;
}
void R38::setForma(string& value)
{
    forma = value;
}

string R38:: getID()
{
    return id;
}
void R38::setID(string& value)
{
    id = value;
}
int R38::getTipo()
{
    return tipo;
}
void R38::setTipo(int value)
{
    tipo = value;
}
string R38::getTipoS()
{
    return tipoS;
}
void R38::setTipoS(string& value)
{
    tipoS = value;
}

string R38::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}