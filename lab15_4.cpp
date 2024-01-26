#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &he1 , int &he2, int &he3 , int &he4){
	int payhe[] = {he1,he2,he3,he4} ;
	he1 = payhe[rand()%4] ;
	do{
		he2 = payhe[rand()%4] ;
	}while(he2 == he1) ;
	do{
		he3 = payhe[rand()%4] ;
	}while(he3 == he2 || he3 == he1) ;
	do{
		he4 = payhe[rand()%4] ; 
	}while(he4 == he1 || he4 == he2 || he4 == he3) ;

}
