#include <iostream>
#include "./include/acuario.hpp"
#include "./include/pinguinonormal.hpp"
#include "./include/pinguinorapido.hpp"
#include "./resources/consoleUtils.hpp"

using namespace std;

int main() {
    /*
    Principio de Sustitucion de Liskov:
    - Los objetos de una clase derivada deben poder sustituir a los objetos de la clase base sin alterar el correcto funcionamiento del programa.
    - En este caso, los objetos de la clase PinguinoRapido y PinguinoNormal pueden ser utilizados en lugar de la clase base Pinguino sin problemas.
    - Esto se logra porque ambas clases derivadas implementan los métodos de la clase base y cumplen con su contrato.
    - Por lo tanto, podemos agregar instancias de PinguinoRapido y PinguinoNormal a la lista de pinguinos en la clase Acuario sin problemas.
    - Esto permite que el acuario pueda manejar diferentes tipos de pinguinos sin necesidad de conocer su implementación específica.
    - Esto es un ejemplo del principio de sustitución de Liskov, ya que podemos sustituir objetos de la clase base por objetos de las clases derivadas sin problemas.
    
    */
    
    clearConsole();
    cout << "           Ejemplo de Sustitucion de Liskov\n";
    cout << "           --------------------------------\n";
    cout << "           Los objetos de una clase derivada deben poder sustituir a los objetos de la clase base\n";
    cout << "           sin alterar el correcto funcionamiento del programa.\n";
    cout << "           En este caso, los objetos de la clase PinguinoRapido y PinguinoNormal pueden ser utilizados\n";
    cout << "           en lugar de la clase base Pinguino sin problemas.\n";
    cout << "           Esto se logra porque ambas clases derivadas implementan los metodos de la clase base y cumplen con su contrato.\n";
    cout << "           Por lo tanto, podemos agregar instancias de PinguinoRapido y PinguinoNormal a la lista de pinguinos\n";
    cout << "           en la clase Acuario sin problemas.\n";
    cout << "           Esto permite que el acuario pueda manejar diferentes tipos de pinguinos sin necesidad de conocer su implementacion\n";
    cout << "           especifica.\n";
    cout << "           Esto es un ejemplo del principio de sustitucion de Liskov, ya que podemos sustituir objetos de la clase base\n";
    cout << "           por objetos de las clases derivadas sin problemas.\n";
    cout << "           --------------------------------\n";
    cout << "           Se creara un acuario con pinguinos de diferentes tipos\n";
    cout << "           Los pinguinos nadaran y se mostrara la cantidad de pinguinos en el acuario\n";
    cout << "           --------------------------------\n";
    cout << "Creando acuario...\n";
    Acuario acuario;
    
    cout << "Agregando pinguinos...\n";

    cout << "           Se agregan pinguinos usando el metodo agregarPinguino de la clase Acuario\n";
    cout << "           el cual acepta la clase base Pinguino como argumento\n";
    cout << "               acuario.agregarPinguino(new PinguinoNormal('Pingu'))\n";
    cout << "               acuario.agregarPinguino(new PinguinoRapido('Flash'))\n";
    cout << "           Esto es posible gracias al principio de sustitucion de Liskov\n";
        
    acuario.agregarPinguino(new PinguinoNormal("Pingu"));
    acuario.agregarPinguino(new PinguinoNormal("Roco"));
    acuario.agregarPinguino(new PinguinoRapido("Flash"));
    pauseConsole();
    clearConsole();

    cout << "Los pinguinos han sido agregados al acuario\n";
    cout << "           Ahora se mostrara la cantidad de pinguinos en el acuario\n";
    acuario.mostrarCantidad();

    cout << "Ahora los pinguinos nadaran...\n";
    cout << "           Se llamara al metodo hacerNadarATodos\n";
    cout << "           el cual llama al metodo nadar de cada pinguino\n";
    acuario.hacerNadarATodos();
    

    return 0;
}