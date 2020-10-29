//
// Created by kellyyung on 19/10/2020.
//

#ifndef FEDERATEDLEARNINH_HE_H
#define FEDERATEDLEARNINH_HE_H

#include "pybind11/embed.h"
#include <tuple>


namespace py = pybind11;
using namespace py::literals;

class AdditivelyHE {
public:
    py::module paillier;

    struct PaillierPublicKey {
        py::object publickey;
    };

    struct PaillierPrivateKey {
        py::object privatekey;
    };

    struct EncryptedNumber {
        PaillierPublicKey publicKey;
        int ciphertext;
        int exponent;
    };

    // generate key pairs
    std::tuple<PaillierPublicKey, PaillierPrivateKey> generate_key_pairs();
    // encrypt with public key and return EncryptedNumber (pyobject)
    EncryptedNumber encrypt(PaillierPublicKey publicKey, float value);
    // decrypt with private key and return EncryptedNumber (pyobject)
    float decrypt(PaillierPrivateKey privateKey, EncryptedNumber encrypted_value);
    // aggregate encrypted numbers
    EncryptedNumber aggregate(EncryptedNumber encrypted_number1, EncryptedNumber encrypted_number2);
    void test();


};

#endif //FEDERATEDLEARNINH_HE_H
