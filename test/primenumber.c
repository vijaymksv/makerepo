#include "unity.h"
#include "primenumber.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_primenumber(void)
{
  TEST_ASSERT_EQUAL(1, primenumber(5));
  TEST_ASSERT_EQUAL(1, primenumber(7));
}
void test_nonprime(void)
{
  TEST_ASSERT_EQUAL(0, primenumber(4));
  TEST_ASSERT_EQUAL(0, primenumber(8));
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(-1, primenumber(-5));
  TEST_ASSERT_EQUAL(-1, primenumber(-10));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_primenumber);
  RUN_TEST(test_nonprime);
  RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}