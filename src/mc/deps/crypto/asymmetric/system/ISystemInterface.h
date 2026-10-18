#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/Padding.h"
#include "mc/deps/crypto/asymmetric/PrivateKeySigningFormat.h"
#include "mc/deps/crypto/asymmetric/PubKeyFormat.h"
#include "mc/deps/crypto/hash/HashType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Asymmetric { struct EcPublicKeyComponents; }
namespace Crypto::Asymmetric { struct RsaPublicKeyComponents; }
// clang-format on

namespace Crypto::Asymmetric {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ISystemInterface();
#else // @header-generator platform
    virtual ~ISystemInterface() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool generateKeyPair(std::string&, std::string&) = 0;
#else // @header-generator platform
    virtual bool generateKeyPair(::std::string& privateKey, ::std::string& publicKey) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<std::string, std::error_code> constructPublicKey(std::variant<Crypto::Asymmetric::RsaPublicKeyComponents, Crypto::Asymmetric::EcPublicKeyComponents> const&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<::std::string> constructPublicKey(
        ::std::variant<::Crypto::Asymmetric::RsaPublicKeyComponents, ::Crypto::Asymmetric::EcPublicKeyComponents> const&
            components
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<std::variant<Crypto::Asymmetric::RsaPublicKeyComponents, Crypto::Asymmetric::EcPublicKeyComponents>, std::error_code> deconstructPublicKey(std::string const&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<
        ::std::variant<::Crypto::Asymmetric::RsaPublicKeyComponents, ::Crypto::Asymmetric::EcPublicKeyComponents>>
    deconstructPublicKey(::std::string const& publicKey) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string encryptData(std::string const&, std::string const&, ::Crypto::Asymmetric::Padding, ::Crypto::Asymmetric::PubKeyFormat, bool) = 0;
#else // @header-generator platform
    virtual ::std::string encryptData(
        ::std::string const&               publicKey,
        ::std::string const&               data,
        ::Crypto::Asymmetric::Padding      paddingType,
        ::Crypto::Asymmetric::PubKeyFormat keyFormat,
        bool                               useSHA256
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string decryptData(std::string const&, std::string const&, ::Crypto::Asymmetric::Padding) = 0;
#else // @header-generator platform
    virtual ::std::string decryptData(
        ::std::string const&          privateKey,
        ::std::string const&          data,
        ::Crypto::Asymmetric::Padding paddingType
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string signData(std::string const&, std::string const&, ::Crypto::Hash::HashType, ::Crypto::Asymmetric::PrivateKeySigningFormat) = 0;
#else // @header-generator platform
    virtual ::std::string signData(
        ::std::string const&                          privateKey,
        ::std::string const&                          data,
        ::Crypto::Hash::HashType                      hash,
        ::Crypto::Asymmetric::PrivateKeySigningFormat format
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool verifyData(std::string const&, std::string const&, std::string const&, ::Crypto::Hash::HashType) = 0;
#else // @header-generator platform
    virtual bool verifyData(
        ::std::string const&     publicKey,
        ::std::string const&     signature,
        ::std::string const&     data,
        ::Crypto::Hash::HashType hash
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string computeSharedSecret(std::string const&, std::string const&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::string
    computeSharedSecret(::std::string const& myPrivateKey, ::std::string const& peerPublicKey) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Crypto::Asymmetric
