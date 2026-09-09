#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/certificate/system/ISystemInterface.h"

// auto generated forward declare list
// clang-format off
struct evp_pkey_st;
struct x509_st;
// clang-format on

namespace Crypto::Certificate {

class OpenSSLCertificateInterface : public ::Crypto::Certificate::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<x509_st>>     mCertificate;
    ::ll::TypedStorage<8, 8, std::unique_ptr<evp_pkey_st>> mPrivateKey;
    // NOLINTEND
};

} // namespace Crypto::Certificate
