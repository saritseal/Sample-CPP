#include <iostream>
#include "../include/DataReader.h"
#include "../include/DummyFinancialApp.h"
#include <boost/log/trivial.hpp>
#include <boost/log/core.hpp>
#include <map>

using namespace std;
using namespace DataReader;

class DummyFinancialApp: public GenericApp{
  public:
    int startTransaction();
    int readData(string path);
    int completeTransaction();
}

int DummyFinancialApp::startTransaction(){
  BOOST_LOG_TRIVIAL(info) << "Starting Transaction for this SessionId: " + this->sessionId ;
  return 0;
}

//TODO Read file from the Path and for each record create a json file
//TODO ADD FUNCTION pointer for transformation
//TODO Add communication channel handle
//TODO Add callback handle for controller
int DummyFinancialApp::readData(string path){
  BOOST_LOG_TRIVIAL(info) << "Reading Data for this SessionId: " + this->sessionId + " from path:" + path ;
  return 0;
}

int DummyFinancialApp::completeTransaction(){
  BOOST_LOG_TRIVIAL(info) << "Completing the Session: " + this->sessionId ;
  return 0;
}


int main(){
  GenericApp app = DummyFinancialApp();
  map<string, string> properties ;
  properties.insert(pair<string, string> ("PATH", "DATA"));
  app.init(properties);
  return 0;
}
