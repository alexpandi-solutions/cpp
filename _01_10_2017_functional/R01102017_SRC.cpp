#include <iostream>
#include </Users/alexpandi/Documents/GitHub/googletest/googletest/include/gtest/gtest.h>

int add (int input1, int input2)
{
    return input1 + input2;
}

TEST(Add_TestGroup, Add_Test_1)
{
    ASSERT_EQ(4, (add(2,2)));
}

TEST(Add_TestGroup, Add_Test_2)
{
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
