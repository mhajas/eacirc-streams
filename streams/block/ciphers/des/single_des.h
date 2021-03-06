#pragma once

/**
 * Source: https://github.com/B-Con/crypto-algorithms
 */

#include "../../block_cipher.h"

namespace block {

    class single_des : public block_cipher {

        /* Data structures */

        struct single_des_ctx {
            single_des_ctx(bool encrypt)
                : key{0}
                , schedule{{0}}
                , en(encrypt)  {}

            uint8_t key[8];
            uint8_t schedule[16][6];
            bool en;
        } _ctx;

    public:
        single_des(unsigned rounds, bool encrypt)
            : block_cipher(rounds)
            , _ctx(encrypt) { }

        void keysetup(const std::uint8_t* key, const std::uint32_t keysize) override;

        void ivsetup(const std::uint8_t* iv, const std::uint32_t ivsize) override;

        void encrypt(const std::uint8_t* plaintext,
                     std::uint8_t* ciphertext) override;

        void decrypt(const std::uint8_t* ciphertext,
                     std::uint8_t* plaintext) override;
    };
}
