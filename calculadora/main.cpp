#include <iostream>
#include "calculadora.hpp"
#include <gtest/gtest.h>

TEST(SUMAR, POSITIVENUM){
    ASSERT_EQ(7, sumar(3,4));
    ASSERT_EQ(6, sumar(2,4));
    ASSERT_EQ(10, sumar(6,4));
    ASSERT_EQ(12, sumar(8,4));
    ASSERT_EQ(10, sumar(3,7));
}
TEST(SUMA3, POSITIVENUM){
    ASSERT_EQ(14, sumar3(3,4,7));
}
int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
