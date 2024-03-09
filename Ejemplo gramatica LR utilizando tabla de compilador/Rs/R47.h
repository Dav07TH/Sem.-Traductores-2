#include <iostream>
#include <sstream>
using namespace std;

class R47
{
private:
    
public:
    R47(/* args */);
    ~R47();

    int cantidadTokens = 3;
    string forma = "R47 <Expresion> opSuma <Expresion>";
    string id = "R47";
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

R47::R47(/* args */)
{
}

R47::~R47()
{
    
}

int R47::getCantidadTokens()
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
void R47::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R47::getForma()
{
    return forma;
}
void R47::setForma(string& value)
{
    forma = value;
}

string R47:: getID()
{
    return id;
}
void R47::setID(string& value)
{
    id = value;
}
int R47::getTipo()
{
    return tipo;
}
void R47::setTipo(int value)
{
    tipo = value;
}
string R47::getTipoS()
{
    return tipoS;
}
void R47::setTipoS(string& value)
{
    tipoS = value;
}

string R47::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}