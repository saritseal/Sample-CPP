#include <iostream>

using namespace std;

class DummyFinancialApp {

public:
  DummyFinancialApp(){
      cout << "Financial Application Constructor." << endl;
  }

  int startTransaction();
};
