#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class directiva {
	private:
		int favor;
		int contra;
		
	public:
		void iniciar(){
			this->favor=0;
			this->contra=0;
		}
	
		void afavor(){
			this->favor+=1;
		}
		void acontra(){
			this->contra+=1;
		}
		int mfavor(){
			return this->favor;
		}
		int mcontra(){
			return this->contra;
		}
		void votar(){
			int resp;
			do{
				cout<<"seleccione tipo de voto"<<endl
				<<"1- a favor"<<endl<<"2- en contra";
				cin>>resp;
			}while(resp<1 || resp >2);
			if(resp==1){
				this->afavor();
			}else{
				this->acontra();
			}
							
		}
		void eliminar(){
			this->iniciar();
		}
		void cambiar(int tipo){
			if(tipo=1 && this->mfavor()>0){
				this->favor-=1;
				this->contra+=1;
			}else if(tipo=2 && this->mcontra()>0){
				this->contra-=1;
				this->favor+=1;
			}
		}
		
};



int main(int argc, char** argv) {
	directiva D1;
	directiva D2;
	directiva D3;
	directiva D4;
	directiva D5;
	directiva D6;
	directiva D7;
	directiva D8;
	directiva D9;
	directiva D10;
	directiva D11;
	directiva D12;
	D1.iniciar(); 
	D2.iniciar();
	D3.iniciar();
	D4.iniciar();
	D5.iniciar();
	D6.iniciar();
	D7.iniciar();
	D8.iniciar();
	D9.iniciar();
	D10.iniciar();
	D11.iniciar();
	D12.iniciar();
	
	int op;
	int dir;
	
	INICIO:
	system("cls");
	do{
		cout<<"	ELIJA UNA OPCION"<<endl
		<<"	1-Capturar voto"<<endl
		<<"	2-buscar Voto por directivo"<<endl
		<<"	3-Cambiar voto"<<endl
		<<"	4-eliminar votacion"<<endl
		<<"	5-mostrar resultados de la mocion"<<endl
		<<"	6-salir"<<endl;
		cin>>op;
	}while(op<1 || op>6);
	
	
	
	switch(op){
		
		case 1:{
			do{
				cout<<"Elija el directivo al que ira el voto 1-12"<<endl;
				cin>>dir;	
			}while(dir<1 || dir>12);
			switch(dir){
				case 1:{
					D1.votar();
					break;
				}
				case 2:{
					D2.votar();
					break;
				}
				case 3:{
					D3.votar();
					break;
				}
				case 4:{
					D4.votar();
					break;
				}
				case 5:{
					D5.votar();
					break;
				}
				case 6:{
					D6.votar();
					break;
				}
				case 7:{
					D7.votar();
					break;
				}
				case 8:{
					D8.votar();
					break;
				}
				case 9:{
					D9.votar();
					break;
				}
				case 10:{
					D10.votar();
					break;
				}
				case 11:{
					D11.votar();
					break;
				}
				case 12:{
					D12.votar();
					break;
				}
			}
			break;
		}
		case 2:{
			
			do{
				cout<<"Elija el directivo a consultar 1-12"<<endl;
				cin>>dir;	
			}while(dir<1 || dir>12);
			switch(dir){
				case 1:{
					cout<<"A favor:"<<D1.mfavor()<<"Votos"<<endl
						<<"En contra:"<<D1.mcontra()<<"Votos"<<endl;
					break;
				}
				case 2:{
					cout<<"A favor:"<<D2.mfavor()<<"Votos"<<endl
						<<"En contra:"<<D2.mcontra()<<"Votos"<<endl;
					break;
				}
				case 3:{
					cout<<"A favor:"<<D3.mfavor()<<"Votos"<<endl
						<<"En contra:"<<D3.mcontra()<<"Votos"<<endl;
					break;
				}
				case 4:{
					cout<<"A favor:"<<D4.mfavor()<<"Votos"<<endl
						<<"En contra:"<<D4.mcontra()<<"Votos"<<endl;
					break;
				}
				case 5:{
					cout<<"A favor:"<<D5.mfavor()<<"Votos"<<endl
						<<"En contra:"<<D5.mcontra()<<"Votos"<<endl;
					break;
				}
				case 6:{
					cout<<"A favor:"<<D6.mfavor()<<"Votos"<<endl
						<<"En contra:"<<D6.mcontra()<<"Votos"<<endl;
					break;
				}
				case 7:{
					cout<<"A favor:"<<D7.mfavor()<<"Votos"<<endl
						<<"En contra:"<<D7.mcontra()<<"Votos"<<endl;
					break;
				}
				case 8:{
					cout<<"A favor:"<<D8.mfavor()<<"Votos"<<endl
						<<"En contra:"<<D8.mcontra()<<"Votos"<<endl;
					break;
				}
				case 9:{
					cout<<"A favor:"<<D9.mfavor()<<"Votos"<<endl
						<<"En contra:"<<D9.mcontra()<<"Votos"<<endl;
					break;
				}
				case 10:{
					cout<<"A favor:"<<D10.mfavor()<<"Votos"<<endl
						<<"En contra:"<<D10.mcontra()<<"Votos"<<endl;
					break;
				}
				case 11:{
					cout<<"A favor:"<<D11.mfavor()<<"Votos"<<endl
						<<"En contra:"<<D11.mcontra()<<"Votos"<<endl;
					break;
				}
				case 12:{
					cout<<"A favor:"<<D12.mfavor()<<"Votos"<<endl
						<<"En contra:"<<D12.mcontra()<<"Votos"<<endl;
					break;
				}
			}
			
			
			break;
		}
		case 3:{
			int de,de2;
			do{
				cout<<"elija de que directivo cambiara el voto 1-12"<<endl;
				cin>>de;
			}while(de<1 || de>12);
			do{
				cout<<"elija que voto cambiar"<<endl<<"1-a favor"<<endl<<" 2-en contra "<<endl;
				cin>>de2;
			}while(de<1 || de>2);
			switch(de){
				case 1:{
					D1.cambiar(de2);
					break;
				}
				case 2:{
					D2.cambiar(de2);
					break;
				}
				case 3:{
					D3.cambiar(de2);
					break;
				}
				case 4:{
					D4.cambiar(de2);
					break;
				}
				case 5:{
					D5.cambiar(de2);
					break;
				}
				case 6:{
					D6.cambiar(de2);
					break;
				}
				case 7:{
					D7.cambiar(de2);
					break;
				}
				case 8:{
					D8.cambiar(de2);
					break;
				}
				case 9:{
					D9.cambiar(de2);
					break;
				}
				case 10:{
					D10.cambiar(de2);
					break;
				}
				case 11:{
					D11.cambiar(de2);
					break;
				}
				case 12:{
					D12.cambiar(de2);
					break;
				}
			}
			
			break;
		}
		case 4:{
			int de;
			do{
			cout<<"seguro que quiere eliminar toda la votacion? "<<endl<<"1 = si "<<endl<<"0=no"<<endl;
			cin>>de;
			}while(de<0 ||de>1);
			if(de){
				D1.iniciar(); 
				D2.iniciar();
				D3.iniciar();
				D4.iniciar();
				D5.iniciar();
				D6.iniciar();
				D7.iniciar();
				D8.iniciar();
				D9.iniciar();
				D10.iniciar();
				D11.iniciar();
				D12.iniciar();
			}
			break;
		}
		case 5:{
			cout<<"		RESULTADOS"<<endl;
			cout<<"|Directiva|A favor| En contra|"<<endl;
			cout<<"|    1    "<<"|"<<D1.mfavor()<<"	|"<<D1.mcontra()<<"|"<<endl;
			cout<<"|    2    "<<"|"<<D2.mfavor()<<"	|"<<D2.mcontra()<<"|"<<endl;
			cout<<"|    3    "<<"|"<<D3.mfavor()<<"	|"<<D3.mcontra()<<"|"<<endl;
			cout<<"|    4    "<<"|"<<D4.mfavor()<<"	|"<<D4.mcontra()<<"|"<<endl;
			cout<<"|    5    "<<"|"<<D5.mfavor()<<"	|"<<D5.mcontra()<<"|"<<endl;
			cout<<"|    6    "<<"|"<<D6.mfavor()<<"	|"<<D6.mcontra()<<"|"<<endl;
			cout<<"|    7    "<<"|"<<D7.mfavor()<<"	|"<<D7.mcontra()<<"|"<<endl;
			cout<<"|    8    "<<"|"<<D8.mfavor()<<"	|"<<D8.mcontra()<<"|"<<endl;
			cout<<"|    9    "<<"|"<<D9.mfavor()<<"	|"<<D9.mcontra()<<"|"<<endl;
			cout<<"|    10   "<<"|"<<D10.mfavor()<<"	|"<<D10.mcontra()<<"|"<<endl;
			cout<<"|    11   "<<"|"<<D11.mfavor()<<"	|"<<D11.mcontra()<<"|"<<endl;
			cout<<"|    12   "<<"|"<<D12.mfavor()<<"	|"<<D12.mcontra()<<"|"<<endl;
			break;
		}
		case 6:{
			goto FIN;
			break;
		}
	}
	system("pause");
	goto INICIO;
	
	FIN:
	cout<<"GRACIAS!!"<<endl;
	return 0;
}
