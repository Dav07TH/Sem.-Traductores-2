#include <iostream>
#include <sstream>
using namespace std;

class R51
{
private:
    
public:
    R51(/* args */);
    ~R51();

    int cantidadTokens = 3;
    string forma = "R51 <Expresion> opOr <Expresion>";
    string id = "R51";
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

R51::R51(/* args */)
{
}

R51::~R51()
{
    
}

int R51::getCantidadTokens()
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
void R51::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R51::getForma()
{
    return forma;
}
void R51::setForma(string& value)
{
    forma = value;
}

string R51:: getID()
{
    return id;
}
void R51::setID(string& value)
{
    id = value;
}
int R51::getTipo()
{
    return tipo;
}
void R51::setTipo(int value)
{
    tipo = value;
}
string R51::getTipoS()
{
    return tipoS;
}
void R51::setTipoS(string& value)
{
    tipoS = value;
}

string R51::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}