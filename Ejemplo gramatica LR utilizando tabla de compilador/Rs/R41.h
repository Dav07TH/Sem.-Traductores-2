#include <iostream>
#include <sstream>
using namespace std;

class R41
{
private:
    
public:
    R41(/* args */);
    ~R41();

    int cantidadTokens = 1;
    string forma = "R41 <Sentencia>";
    string id = "R41";
    int tipo = 44;
    string tipoS = "<SentenciaBloque>";

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

R41::R41(/* args */)
{
}

R41::~R41()
{
    
}

int R41::getCantidadTokens()
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
void R41::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R41::getForma()
{
    return forma;
}
void R41::setForma(string& value)
{
    forma = value;
}

string R41:: getID()
{
    return id;
}
void R41::setID(string& value)
{
    id = value;
}
int R41::getTipo()
{
    return tipo;
}
void R41::setTipo(int value)
{
    tipo = value;
}
string R41::getTipoS()
{
    return tipoS;
}
void R41::setTipoS(string& value)
{
    tipoS = value;
}

string R41::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}