:: Borro el directorio de binarios si ya existiera
IF EXIST .\bin RMDIR /S /Q .\bin

:: Creo los directorios para el binario y las bibliotecas
MD .\bin

:: Compilo el Binario
g++ -Wall -std=c++11 -c .\src\Greeter.cpp 
g++ -Wall -std=c++11 -c main.cpp 
g++ Greeter.o main.o -o .\bin\main.exe

:: Limpio los códigos objeto
DEL .\*.o
