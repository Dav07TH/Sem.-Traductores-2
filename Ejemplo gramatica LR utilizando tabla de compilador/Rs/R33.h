#include <iostream>
#include <sstream>
using namespace std;

class R33
{
private:
    
public:
    R33(/* args */);
    ~R33();

    int cantidadTokens = 0;
    string forma = "R33 \\e";
    string id = "R33";
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

R33::R33(/* args */)
{
}

R33::~R33()
{
    
}

int R33::getCantidadTokens()
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
void R33::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R33::getForma()
{
    return forma;
}
void R33::setForma(string& value)
{
    forma = value;
}

string R33:: getID()
{
    return id;
}
void R33::setID(string& value)
{
    id = value;
}
int R33::getTipo()
{
    return tipo;
}
void R33::setTipo(int value)
{
    tipo = value;
}
string R33::getTipoS()
{
    return tipoS;
}
void R33::setTipoS(string& value)
{
    tipoS = value;
}

string R33::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}