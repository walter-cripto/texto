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

void escribir(std::string nombre_archivo,std::string lineas_escritura =""){
    std::ofstream archivo(nombre_archivo, std::ios::app);
    archivo << lineas_escritura <<"\n";
    archivo.close();
}