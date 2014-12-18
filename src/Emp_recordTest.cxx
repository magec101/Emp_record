/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/XmlPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::XmlPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::XmlPrinter >( tmp, argc, argv );
    return status;
}
bool suite_Emp_recordTest_init = false;
#include "/var/www/html/codeit/workspace/Emp_record/src/Emp_recordTest.h"

static Emp_recordTest suite_Emp_recordTest;

static CxxTest::List Tests_Emp_recordTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_Emp_recordTest( "/var/www/html/codeit/workspace/Emp_record/src/Emp_recordTest.h", 5, "Emp_recordTest", suite_Emp_recordTest, Tests_Emp_recordTest );

static class TestDescription_suite_Emp_recordTest_test_Unit_Test_1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_Emp_recordTest_test_Unit_Test_1() : CxxTest::RealTestDescription( Tests_Emp_recordTest, suiteDescription_Emp_recordTest, 15, "test_Unit_Test_1" ) {}
 void runTest() { suite_Emp_recordTest.test_Unit_Test_1(); }
} testDescription_suite_Emp_recordTest_test_Unit_Test_1;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
