#include <iostream>
#include <sstream>
using namespace std;

class R34
{
private:
    
public:
    R34(/* args */);
    ~R34();

    int cantidadTokens = 3;
    string forma = "R34 , <Expresion> <ListaArgumentos>";
    string id = "R34";
    int tipo = 41;
    string tipoS = "<ListaArgumentos>";

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

R34::R34(/* args */)
{
}

R34::~R34()
{
    
}

int R34::getCantidadTokens()
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
void R34::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R34::getForma()
{
    return forma;
}
void R34::setForma(string& value)
{
    forma = value;
}

string R34:: getID()
{
    return id;
}
void R34::setID(string& value)
{
    id = value;
}
int R34::getTipo()
{
    return tipo;
}
void R34::setTipo(int value)
{
    tipo = value;
}
string R34::getTipoS()
{
    return tipoS;
}
void R34::setTipoS(string& value)
{
    tipoS = value;
}

string R34::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}