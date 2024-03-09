#include <iostream>
#include <sstream>
using namespace std;

class R52
{
private:
    
public:
    R52(/* args */);
    ~R52();

    int cantidadTokens = 1;
    string forma = "R52 <Termino>";
    string id = "R52";
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

R52::R52(/* args */)
{
}

R52::~R52()
{
    
}

int R52::getCantidadTokens()
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
void R52::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R52::getForma()
{
    return forma;
}
void R52::setForma(string& value)
{
    forma = value;
}

string R52:: getID()
{
    return id;
}
void R52::setID(string& value)
{
    id = value;
}
int R52::getTipo()
{
    return tipo;
}
void R52::setTipo(int value)
{
    tipo = value;
}
string R52::getTipoS()
{
    return tipoS;
}
void R52::setTipoS(string& value)
{
    tipoS = value;
}

string R52::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}