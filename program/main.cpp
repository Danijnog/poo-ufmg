#include <iostream>
#include <vector>
#include "../include/data.h"
// #include "../include/Endereco.h"
using namespace std;

int main() {
  cout << "Teste" << endl;
  // int valTempo; // min
  // int getHora, getMin, getSeg, valTempo2;
  // cin >> getHora >> getMin >> getSeg >> valTempo >> valTempo2;
  // cout << valTempo << " - " << valTempo2 << " - " << getHora << ":" << getMin << ":" << getSeg << endl;
  // valTempo = valTempo; // em segundos
  // int horaEntrada, horaturno, hora, minuto, segundo; 
  // horaturno = getHora*3600+ getMin*60 + getSeg;
  // horaEntrada = horaturno -600 - valTempo;
  // hora = int(horaEntrada/3600);
  // minuto = int((horaEntrada%3600)/60);
  // segundo = horaEntrada-(hora*3600 + minuto*60);
  // cout << hora << ":" << minuto << ":" << segundo << endl;
  // int tempoTotal, horaSaida, hora2, minuto2, segundo2;
  // horaSaida = hora*3600+ minuto*60 + segundo;
  // tempoTotal = horaSaida + valTempo2;
  // hora2 = int(tempoTotal/3600);
  // minuto2 = int((tempoTotal%3600)/60);
  // segundo2 = tempoTotal-(hora2*3600 + minuto2*60);
  // cout << segundo2 << endl;
  // cout << hora2 << ":" << minuto2 << ":" << segundo2 << endl;
  // int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6;
  // int *um = &a, *dois = &b, *tres = &c, *quatro = &d, *cinco = &e, *seis = &f;
  // vector<int*> numeros;
  // numeros.push_back(um);
  // numeros.push_back(dois);
  // numeros.push_back(tres);
  // numeros.push_back(quatro);
  // numeros.push_back(cinco);
  // numeros.push_back(seis);
  // vector <int*> subst;
  // for(auto it : numeros){
  //   cout << (*it) << endl;
  //   if(it != quatro){
  //     subst.push_back(it);
  //   }
  // }
  // for(auto it : subst){
  //   cout << "novo: " << (*it) << endl;
  // }
  Data a;
  cout << a.getAno() << endl;
  return 0;
}