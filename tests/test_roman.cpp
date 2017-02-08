#include <roman/roman.h>

#include <gtest/gtest.h>

#include <stdexcept>

TEST(ArabicToRomanTest, ZeroThrowsDomainError) {
    EXPECT_THROW(arabic_to_roman(0), std::domain_error);
}

TEST(ArabicToRomanTest, One) {
    EXPECT_EQ(arabic_to_roman(1), "I");
}
