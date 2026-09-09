#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/symmetric/OperationMode.h"
#include "mc/deps/crypto/symmetric/system/ISystemInterface.h"
#include "mc/deps/crypto/symmetric/system/System.h"

// auto generated forward declare list
// clang-format off
struct evp_cipher_ctx_st;
// clang-format on

namespace Crypto::Symmetric {

class OpenSSLSymmetricInterface : public ::Crypto::Symmetric::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Crypto::Symmetric::System>        mSystem;
    ::ll::TypedStorage<4, 4, ::Crypto::Symmetric::OperationMode> mMode;
    ::ll::TypedStorage<8, 8, std::unique_ptr<evp_cipher_ctx_st>> mEncryptionPointer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<evp_cipher_ctx_st>> mDecryptionPointer;
    // NOLINTEND
};

} // namespace Crypto::Symmetric
