#include <iostream>
#include "../include/DataReader.h"
#include "../include/DummyFinancialApp.h"
#include "gtest/gtest.h"

using namespace std;
using namespace DataReader;

TEST( DummFinancialApp, checkStartTran){
  DummyFinancialApp app;
  EXPECT_EQ(0, app->startTransaction());

}
