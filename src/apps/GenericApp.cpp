#include <iostream>
#include <boost/log/trivial.hpp>
#include <boost/log/core.hpp>
#include <map>

using namespace std;
//using namespace boost::log;

class GenericApp {
protected:
  string sessionId;
public:
  int init(const map<string, string> properties){
    this->startTransaction();
    this->readData(properties.lower_bound("PATH")->second);
    this->completeTransaction();
    return 0;
  }
  virtual int startTransaction();
  virtual int readData(string path);
  virtual int completeTransaction();
};
