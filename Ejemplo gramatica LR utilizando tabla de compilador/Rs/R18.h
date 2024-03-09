#include <iostream>
#include <sstream>
using namespace std;

class R18
{
private:
    
public:
    R18(/* args */);
    ~R18();

    int cantidadTokens = 1;
    string forma = "R18 <Sentencia>";//Vacío
    string id = "R18";
    int tipo = 34;
    string tipoS = "<DefLocal>";

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

R18::R18(/* args */)
{
}

R18::~R18()
{
    
}

int R18::getCantidadTokens()
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
void R18::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R18::getForma()
{
    return forma;
}
void R18::setForma(string& value)
{
    forma = value;
}

string R18:: getID()
{
    return id;
}
void R18::setID(string& value)
{
    id = value;
}
int R18::getTipo()
{
    return tipo;
}
void R18::setTipo(int value)
{
    tipo = value;
}
string R18::getTipoS()
{
    return tipoS;
}
void R18::setTipoS(string& value)
{
    tipoS = value;
}

string R18::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}