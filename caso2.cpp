#include <string>
#include <vector>

using namespace std;

struct parameter // struct que permite definir qué debe llevar un elemento del array parameters[] de más abajo
{
    string llave;
    string valor;
};

// clase principal llamada dispositivo
class Dispositivo{
    public:                    // define atributos privados
        string nombre;          // nombre de un dispositivo
        string tipo;          // tipo del dispositivo
        int habitacion;         // numero de habitacion en el que se ubica
        vector<string> acciones;      // vector que contiene
        vector<parameter> parameters; // vector que contiene parametros editables del dispositivo propio  
        
    public:
        acciones(){}; // metodo que retorna las acciones que el usuario puede escoger llamar del dispositivo propio

};

void agregarHab(int cantHab, vector<Dispositivo> &PlistaDispositivos){
    for (int i = 0; i < cantHab; i++)
    {
        PlistaDispositivos.push_back(vector<Dispositivo>)
    }
}

void agregarDis(int habitacion,  vector<Dispositivo> &PlistaDispositivos, vector<string> &PlistaTipos){
    // Valida la exitencia de la habitacion en el vector plistaDispositivos
    // Valida la existencia del tipo en el vector plistaTipos
        // En caso de no existir retorna error
    // ...construccion del dispositivo...
    // Realiza un PlistaDispositivos[habitacion].push_back(DispostivoNuevo))
    // Con eso ya se añadiria el dispositivo a la habitacion correspoendiente
}

struct tarea{
    string nombre;
    vector<Dispositivo> disInvolucrados; // {luces, coffe, luz_baño, alarma}
    vector<string> accEjecutar;          // {apagar, encender, encender, apagar}
}


void creaTareas(vector<Dispositivo> &PlistaDispositivos, vector<tarea> &PlistaTareas){
    tarea tareaCreada;
    // Pide nombre la tarea a agregar
    // tareaCreada.nombre = [nombre dado]
    // Ciclo para agregar dispositivos y sus acciones a ejecutar respectivamente

        // Pide el nombre del Dispositivo 
        // Valida si existe el dispositivo en PlistaDispositivos
            // Si no existe retorna error y vuele pedir el dispositivo

        // Pide el nombre de la accion a ejecutar
        // Valida si existe el la accion en Dispositivo.acciones
            // Si no existe retorna error y vuelve pedir la accion     

        // tareaCreada.disInvoulucadros.push_back(Dispositivo)
        // tareaCreada.accEjecutar.push_back(accion)

    // Una vez finalizado el ciclo se hace PlistaTareas.push_back(tareaCreada)
}

void creaTipoDis(string nombreTipo, vector<string> &PlistaTipos) {
    // Funcion que añade elementos a la lista de los tipos de dispositivos
    // Los añade en forma de string mediante PlistaTipo.push_back(nombreTipo)
}


int main(){
    vector<string> listaTipos;
    vector<vector<Dispositivo> > listaDispositivos; // Matriz de vectores que representa las habitaciones y los dispositivos en estas
    vector<tarea> listaTareas
    return 0;
}