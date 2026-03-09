#include <iostream>
using namespace std;

struct prodotto {
	string nome;
	string categoria;
	float prezzo;
};

void aggiunta(prodotto elenco[], int &n) {
	cout<<"Nome: ";
	cin>>elenco[n].nome;
	cout<<"Categoria: ";
	cin>>elenco[n].categoria;
	cout<<"Prezzo: ";
	cin>>elenco[n].prezzo;
	n++;
}

void visualizza(prodotto elenco[], int n) {
	for(int i=0; i<n; i++) {
		cout<<"\nNome: "<<elenco[i].nome;
		cout<<"\nCategoria: "<<elenco[i].categoria;
		cout<<"\nPrezzo: "<<elenco[i].prezzo<<"\n";
	}
}

int ricerca(prodotto elenco[], int n, string nome) {
	for(int i=0; i<n; i++) {
		if(elenco[i].nome==nome) {
			return i;
		}
	}
	return -1;
}
void modifica(prodotto elenco[], int n){
    string nome;
    cout<<"Nome prodotto da modificare: ";
    cin>>nome;

    int pos=ricerca(elenco,n,nome);

    if(pos!=-1){
        cout<<"Nuovo nome: ";
        cin>>elenco[pos].nome;
        cout<<"Nuova categoria: ";
        cin>>elenco[pos].categoria;
        cout<<"Nuovo prezzo: ";
        cin>>elenco[pos].prezzo;
    }else{
        cout<<"Prodotto non trovato";
    }
}


int main() {
	prodotto elenco[100];
	int n=0;
	int scelta;

	do {
		cout<<"\n 1 Aggiunta";
		cout<<"\n 2 Visualizza";
		cout<<"\n 3 Modifica";
		cout<<"\n 4 Cancella";
		cout<<"\n 0 Fine";
		cout<<"\n Scelta: ";
		cin>>scelta;

		switch(scelta) {
		case 1:
			aggiunta(elenco,n);
			break;
		case 2:
			visualizza(elenco,n);
			break;
	    case 3:
	        modifica(elenco,n);
	        break;
		}

	} while(scelta!=0);

	return 0;
}
