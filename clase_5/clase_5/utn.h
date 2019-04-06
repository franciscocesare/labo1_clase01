#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED


void pruebita (void);
int utn_getNumber (int*pNumero,int maximo,int minimo, char* msg, char*msgError, int reintentos);
int getInt(char mensaje[]);
float getFloat(char mensaje[]);
char getChar(char mensaje[]);
char getNumeroAleatorio(int desde , int hasta, int iniciar);

#endif // UTN_H_INCLUDED
