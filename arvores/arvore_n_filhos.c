#include <stdio.h>
#include <string.h>
#include "ArvnNo.h"

int main(void){

	ArvnNo* a = arvn_criano('a');
	ArvnNo* b = arvn_criano('b');
	ArvnNo* c = arvn_criano('c');
	ArvnNo* d = arvn_criano('d');
	ArvnNo* e = arvn_criano('e');
	ArvnNo* f = arvn_criano('f');
	ArvnNo* g = arvn_criano('g');
	ArvnNo* h = arvn_criano('h');
	ArvnNo* i = arvn_criano('i');
	ArvnNo* j = arvn_criano('j');
	
	arvn_insere(c,d);
	arvn_insere(b,e);
	arvn_insere(b,c);
	arvn_insere(i,j);
	arvn_insere(g,i);
	arvn_insere(g,h);
	arvn_insere(a,g);
	arvn_insere(a,f);
	arvn_insere(a,b);
	
	Arvn* x = arvn_cria(a);

	return 0;
}

ArvnNo* arvn_criano(char c){

	ArvnNo* a = (ArvnNo*)malloc(sizeof(ArvnNo));
	a->info = c;
	a->prim = NULL;
	a->prox = NULL;
	return a;
}

void arvn_insere(ArvnNo* a, ArvnNo* sa){
	sa->prox = a->prim;
	a->prim =sa;
}

Arvn* arvn_cria(ArvnNo* r){
	Arvn* a = (Arvn*)malloc(sizeof(Arvn));
	a->raiz = r;
	return a;
