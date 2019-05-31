typedef struct arvn Arvn;
typedef struct arvnno ArvnNo;
ArvnNo* arvn_criano(char c);
void arvn_insere(ArvnNo* a,ArvnNo* sa);
Arvn* arvn_cria(ArvnNo* r);
void arvn_imprime(Arvn* a);
ArvnNo* arvn_busca(Arvn* a,char c);
void arvn_libera(Arvn*a);
