#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include <contextlib.h>
using namespace testing;

TEST(testContextLib, getContext)
{
   const ContextLib* context = ContextLib::getInstance();
   ASSERT_NE( context, nullptr);
}
