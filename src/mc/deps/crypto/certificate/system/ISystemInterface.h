#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/certificate/Encoding.h"
#include "mc/deps/crypto/certificate/ThumbprintFormat.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Certificate {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~ISystemInterface() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string serialize(::Crypto::Certificate::Encoding) const = 0;
#else // @header-generator platform
    virtual ::std::string serialize(::Crypto::Certificate::Encoding encoding) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string extractPublicKey(::Crypto::Certificate::Encoding) const = 0;
#else // @header-generator platform
    virtual ::std::string extractPublicKey(::Crypto::Certificate::Encoding encoding) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string extractPrivateKey(::Crypto::Certificate::Encoding) const = 0;
#else // @header-generator platform
    virtual ::std::string extractPrivateKey(::Crypto::Certificate::Encoding encoding) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getIssuer() const = 0;
#else // @header-generator platform
    virtual ::std::string getIssuer() const = 0;
#endif // @header-generator platform

    virtual bool hasValidCertChain() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string generateCertificateThumbprint(::Crypto::Hash::HashType, ::Crypto::Certificate::ThumbprintFormat) const = 0;
#else // @header-generator platform
    virtual ::std::string generateCertificateThumbprint(
        ::Crypto::Hash::HashType                hashFunction,
        ::Crypto::Certificate::ThumbprintFormat formatting
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string generatePublicKeyThumbprint(::Crypto::Hash::HashType, ::Crypto::Certificate::ThumbprintFormat) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::std::string generatePublicKeyThumbprint(
        ::Crypto::Hash::HashType                hashFunction,
        ::Crypto::Certificate::ThumbprintFormat formatting
    ) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Crypto::Certificate
