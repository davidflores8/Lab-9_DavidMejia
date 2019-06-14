#include <fstream>
using std::ofstream;
#include <vector>
using std::vector;
#include "Orden.h"

#ifndef FLIEWRITER_H
#define FILEWRITER_H

class FileWriter{
    public:
        FileWriter();
        ofstream file;
        int cont;
        void fileOpen(char*);
        void write(Orden*);
        void fileClose();

};

#endif