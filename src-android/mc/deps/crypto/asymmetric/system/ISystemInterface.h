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
    // clang-format off
    virtual ~ISystemInterface();

    virtual bool generateKeyPair(std::string&, std::string&) = 0;

    virtual ::Bedrock::Result<std::string, std::error_code> constructPublicKey(std::variant<Crypto::Asymmetric::RsaPublicKeyComponents, Crypto::Asymmetric::EcPublicKeyComponents> const&) = 0;

    virtual ::Bedrock::Result<std::variant<Crypto::Asymmetric::RsaPublicKeyComponents, Crypto::Asymmetric::EcPublicKeyComponents>, std::error_code> deconstructPublicKey(std::string const&) = 0;

    virtual std::string encryptData(std::string const&, std::string const&, ::Crypto::Asymmetric::Padding, ::Crypto::Asymmetric::PubKeyFormat, bool) = 0;

    virtual std::string decryptData(std::string const&, std::string const&, ::Crypto::Asymmetric::Padding) = 0;

    virtual std::string signData(std::string const&, std::string const&, ::Crypto::Hash::HashType, ::Crypto::Asymmetric::PrivateKeySigningFormat) = 0;

    virtual bool verifyData(std::string const&, std::string const&, std::string const&, ::Crypto::Hash::HashType) = 0;

    virtual std::string computeSharedSecret(std::string const&, std::string const&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Crypto::Asymmetric
