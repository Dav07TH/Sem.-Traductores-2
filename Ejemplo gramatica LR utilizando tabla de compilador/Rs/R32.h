#include <iostream>
#include <sstream>
using namespace std;

class R32
{
private:
    
public:
    R32(/* args */);
    ~R32();

    int cantidadTokens = 2;
    string forma = "R32 <Expresion> <ListaArgumentos>";
    string id = "R32";
    int tipo = 40;
    string tipoS = "<Argumentos>";

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

R32::R32(/* args */)
{
}

R32::~R32()
{
    
}

int R32::getCantidadTokens()
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
void R32::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R32::getForma()
{
    return forma;
}
void R32::setForma(string& value)
{
    forma = value;
}

string R32:: getID()
{
    return id;
}
void R32::setID(string& value)
{
    id = value;
}
int R32::getTipo()
{
    return tipo;
}
void R32::setTipo(int value)
{
    tipo = value;
}
string R32::getTipoS()
{
    return tipoS;
}
void R32::setTipoS(string& value)
{
    tipoS = value;
}

string R32::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}