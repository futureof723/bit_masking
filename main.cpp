#include <iostream>
#include <bitset>

int main() {
    printf("This program is used as an example for bit masking \n");

    unsigned int my_bits = 0b111000;
    unsigned int mask_ones = 0b11111111;
    unsigned int mask_zeros = 0b00000000;

    std::bitset<8> my_bits_binary(my_bits);
    std::bitset<8> mask_ones_binary(mask_ones);
    std::bitset<8> mask_zeros_binary(mask_zeros);

    std::cout << "my_bits: " << my_bits_binary << std::endl;
    std::cout << "mask_ones_binary: " << mask_ones_binary << std::endl;
    std::cout << "mask_zeros_binary: " << mask_zeros_binary << std::endl;

    return 0;
}