#include <iostream>

int main(int argc, char** argv) {
    std::cout << "AVX Test." << std::endl;

#if __SSE__
    std::cout << "SSE 1" << std::endl;
#endif
#if __SSE_MATH__
    std::cout << "SSE 1 Math" << std::endl;
#endif
#if __SSE2__
    std::cout << "SSE 2" << std::endl;
#endif
#if __SSE2_MATH__
    std::cout << "SSE 2 Math" << std::endl;
#endif
#if __SSE3__
    std::cout << "SSE 3" << std::endl;
#endif
#if __SSE4_1__
    std::cout << "SSE 4.1" << std::endl;
#endif
#if __SSE4_2__
    std::cout << "SSE 4.2" << std::endl;
#endif
#if __AVX__
    std::cout << "AVX 1" << std::endl;
#endif
#if __AVX_2__
    std::cout << "AVX 2" << std::endl;
#endif
#if __AVX_512BW__
    std::cout << "AVX 512 BW" << std::endl;
#endif
#if __AVX_512CD__
    std::cout << "AVX 512 CD" << std::endl;
#endif
#if __AVX_512DQ__
    std::cout << "AVX 512 DQ" << std::endl;
#endif
#if __AVX_512F__
    std::cout << "AVX 512 F" << std::endl;
#endif
#if __AVX_512VL__
    std::cout << "AVX 512 VL" << std::endl;
#endif

    return 0;
}
