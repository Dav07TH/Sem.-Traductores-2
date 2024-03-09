#include <iostream>
#include <sstream>
using namespace std;

class R36
{
private:
    
public:
    R36(/* args */);
    ~R36();

    int cantidadTokens = 1;
    string forma = "R36 identificador";
    string id = "R36";
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

R36::R36(/* args */)
{
}

R36::~R36()
{
    
}

int R36::getCantidadTokens()
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
void R36::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R36::getForma()
{
    return forma;
}
void R36::setForma(string& value)
{
    forma = value;
}

string R36:: getID()
{
    return id;
}
void R36::setID(string& value)
{
    id = value;
}
int R36::getTipo()
{
    return tipo;
}
void R36::setTipo(int value)
{
    tipo = value;
}
string R36::getTipoS()
{
    return tipoS;
}
void R36::setTipoS(string& value)
{
    tipoS = value;
}

string R36::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}