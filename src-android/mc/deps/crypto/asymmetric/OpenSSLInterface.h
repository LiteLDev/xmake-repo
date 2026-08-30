#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/system/ISystemInterface.h"
#include "mc/deps/crypto/asymmetric/system/System.h"

namespace Crypto::Asymmetric {

class OpenSSLInterface : public ::Crypto::Asymmetric::ISystemInterface {
public:
    // OpenSSLInterface inner types define
    enum class SystemType : int {
        RSA  = 0,
        ECC  = 1,
        None = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Crypto::Asymmetric::System>                       mSystem;
    ::ll::TypedStorage<4, 4, ::Crypto::Asymmetric::OpenSSLInterface::SystemType> mSystemType;
    ::ll::TypedStorage<4, 4, uint>                                               mKeyBits;
    ::ll::TypedStorage<4, 4, uint>                                               mKeyExponent;
    // NOLINTEND
};

} // namespace Crypto::Asymmetric
