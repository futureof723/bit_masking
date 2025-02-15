#include <iostream>
#include <bitset>

int main() {
    printf("This program is used as an example for bit masking \n");

    unsigned int my_bits = 0b11110000;
    unsigned int mask_ones = 0b11111111;
    unsigned int mask_zeros = 0b00000000;

    std::bitset<8> my_bits_binary(my_bits);
    std::bitset<8> mask_ones_binary(mask_ones);
    std::bitset<8> mask_zeros_binary(mask_zeros);

    std::cout << "==============================================" << std::endl;

    std::cout << "my_bits: " << my_bits_binary << std::endl;
    std::cout << "mask_ones_binary: " << mask_ones_binary << std::endl;
    std::cout << "mask_zeros_binary: " << mask_zeros_binary << std::endl;

    std::cout << "==============================================" << std::endl;

    std::cout << "my_bits: " << my_bits_binary << std::endl;

    // Example using or and ones
    std::bitset<8> or_ones = my_bits | mask_ones;
    std::cout << "or_ones: " << or_ones << std::endl;

    std::bitset<8> or_zeros = my_bits | mask_zeros;
    std::cout << "or_zeros: " << or_zeros << std::endl;

    std::cout << "==============================================" << std::endl;

    std::cout << "my_bits: " << my_bits_binary << std::endl;

    std::bitset<8> and_ones = my_bits & mask_ones;
    std::cout << "and_ones: " << and_ones << std::endl;

    std::bitset<8> and_zeros = my_bits & mask_zeros;
    std::cout << "and_zeros: " << and_zeros << std::endl;

    std::cout << "==============================================" << std::endl;

    std::cout << "my_bits: " << my_bits_binary << std::endl;

    std::bitset<8> xor_ones = my_bits ^ mask_ones;
    std::cout << "xor_ones: " << xor_ones << std::endl;

    std::bitset<8> zor_zeros = my_bits ^ mask_zeros;
    std::cout << "zor_zeros: " << zor_zeros << std::endl;

    std::cout << "==============================================" << std::endl;

    std::cout << "my_bits: " << my_bits_binary << std::endl;

    std::bitset<8> not_bits = ~my_bits;
    std::cout << "not_bits: " << not_bits << std::endl;

    std::cout << "==============================================" << std::endl;

    std::cout << "Bit shifting: " << std::endl;

    std::cout << "my_bits: " << my_bits_binary << std::endl;

    auto third_bit = my_bits | 1 << 3;
    std::bitset<8> third_bit_set(third_bit);

    std::cout << "The third bit should be set: " << third_bit_set << std::endl;

    // clearing the fifth bit
    auto fifth_bit = my_bits & ~(1 << 5);
    std::bitset<8> fifth_bit_clear(fifth_bit);
    std::cout << "The third bit should be clear: " << fifth_bit_clear << std::endl;

    auto first_bit = my_bits ^ (1 << 0);
    std::bitset<8> first_bit_toggle(first_bit);
    std::cout << "The first bit should be toggled: " << first_bit_toggle << std::endl;

    // checking if the 4th bit is set

    if (my_bits & 1 << 0) {
        std::cout << "1st bit is set to 1" << std::endl;
    } else {
        std::cout << "1st bit is set to 0" << std::endl;
    }

    if (my_bits & 1 << 5) {
        std::cout << "5th bit is set to 1" << std::endl;
    } else {
        std::cout << "5th bit is set to 0" << std::endl;
    }

    std::cout << "==============================================" << std::endl;



    return 0;
}