#include <iostream>
using namespace std;
string nomes[4];
void escrever(string nomes[]);
int i;

int main() {
  for (i=0; i<4; i++ ){
    cout << "Digite uma palavra para preencher a Array: \n";
    cin >> nomes[i];
  }
  escrever(nomes);
  
}

 void escrever(string nomes[i]){
    for (i=0; i<4; i++ ){
      cout << "Palavra:  " << nomes[i] << "\n";
    }
  }



