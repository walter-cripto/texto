//                    __
//  __     _     __  |__|             ___   ___  __   __
// |  |   | |___|  |  __  _______    |   \ |   ||  \ |  |
// |  |/ \| |   |  | |  ||____   \   |    \|   ||   \|  |
// |        |   |  | |  |  __ \   \ _|___      ||       |
// |        |   |  |_|_ | / __      ____/|\    ||  |\   |
// |___/\___|___|______||| |__|    | |___| \___||__| \__|
//                   |__| \_______/  
// 

#include<fstream>
#include<iostream>

void escribir(std::string nombre_archivo,std::string lineas_escritura =""){
    std::ofstream archivo(nombre_archivo, std::ios::app);
    if(archivo.is_open()){
    archivo << lineas_escritura <<"\n";
    archivo.close();
    }else{
        std::cerr<<"Error al abrir el archivo";
    }
}

void leer(std::string nombre_archivo) {
    std::ifstream archivo(nombre_archivo);
    std::string linea;
    if (archivo.is_open()) {
        
        while (std::getline(archivo, linea)) {
            std::cout << linea << std::endl;
        }
        archivo.close();
    } else {
        std::cout << "No se pudo abrir el archivo." << std::endl;
    }
    
}
