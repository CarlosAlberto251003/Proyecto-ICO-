#ifndef Diccionario.h
#define Diccionario.h

typedef struct par par;
typedef struct diccionario diccionario

struct par
{
	const char* llave;
	const char* valor;
};
struct diccionario 
{
	par** parejas;
	int tam;
};
diccionario* diccionario_n(void);
void diccionario_ag(diccionario* D, const char* llave, const char* valor);
void diccionario_mue(const diccionario* D);
void diccionario_aum(diccionario* D, int unid);
void diccionario_copy(const diccionario* Do, diccionario* Dd, int unids);
void diccionario_free(diccionario* D);
#endif