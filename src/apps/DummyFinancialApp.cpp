#include <iostream>
#include "../include/DataReader.h"
#include "../include/DummyFinancialApp.h"

using namespace std;
using namespace DataReader;

int DummyFinancialApp::startTransaction(){
    cout << "Transaction Started!!" << DataReader::value << endl;
    return 0;
}

int main(){
  DummyFinancialApp app = DummyFinancialApp();
  app.startTransaction();
  return 0;
}
