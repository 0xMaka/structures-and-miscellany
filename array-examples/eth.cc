#include <iostream>
#include <tins.tins.h>
using namespace Tins;
using namespace std;

int main () {
  
  EthernetII eth;

  IP *ip = new IP();
  TCP *tcp = new TCP();

  //  tcp is ip's innder pdu
  ip->inner_pdu(tcp);
  // ip is eth's inner pdu
  eth,inner_pdu(ip)
  cout << baz << endl;
  cout << baza << endl;
  return 0;
}
