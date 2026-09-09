#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/Padding.h"
#include "mc/deps/crypto/asymmetric/PrivateKeySigningFormat.h"
#include "mc/deps/crypto/asymmetric/PubKeyFormat.h"
#include "mc/deps/crypto/asymmetric/system/ISystemInterface.h"
#include "mc/deps/crypto/asymmetric/system/System.h"
#include "mc/deps/crypto/hash/HashType.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Asymmetric { struct EcPublicKeyComponents; }
namespace Crypto::Asymmetric { struct RsaPublicKeyComponents; }
// clang-format on

namespace Crypto::Asymmetric {

class Asymmetric : public ::Crypto::Asymmetric::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Crypto::Asymmetric::System>                          mSystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Asymmetric::ISystemInterface>> mInterface;
    // NOLINTEND

public:
    // prevent constructor by default
    Asymmetric();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Asymmetric();

    virtual bool generateKeyPair(std::string&, std::string&);

    virtual ::Bedrock::Result<std::string, std::error_code> constructPublicKey(std::variant<Crypto::Asymmetric::RsaPublicKeyComponents, Crypto::Asymmetric::EcPublicKeyComponents> const&);

    virtual ::Bedrock::Result<std::variant<Crypto::Asymmetric::RsaPublicKeyComponents, Crypto::Asymmetric::EcPublicKeyComponents>, std::error_code> deconstructPublicKey(std::string const&);

    virtual std::string encryptData(std::string const&, std::string const&, ::Crypto::Asymmetric::Padding, ::Crypto::Asymmetric::PubKeyFormat, bool);

    virtual std::string decryptData(std::string const&, std::string const&, ::Crypto::Asymmetric::Padding);

    virtual std::string signData(std::string const&, std::string const&, ::Crypto::Hash::HashType, ::Crypto::Asymmetric::PrivateKeySigningFormat);

    virtual bool verifyData(std::string const&, std::string const&, std::string const&, ::Crypto::Hash::HashType);

    virtual std::string computeSharedSecret(std::string const&, std::string const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Asymmetric(::Crypto::Asymmetric::System);

    MCNAPI bool canComputeSecret();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<Crypto::Asymmetric::System, std::error_code>
    inferSystemFromPublicKey(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Crypto::Asymmetric::System);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $generateKeyPair(std::string&, std::string&);

    MCNAPI ::Bedrock::Result<std::string, std::error_code> $constructPublicKey(
        std::variant<Crypto::Asymmetric::RsaPublicKeyComponents, Crypto::Asymmetric::EcPublicKeyComponents> const&
    );

    MCNAPI ::Bedrock::Result<
        std::variant<Crypto::Asymmetric::RsaPublicKeyComponents, Crypto::Asymmetric::EcPublicKeyComponents>,
        std::error_code>
    $deconstructPublicKey(std::string const&);

    MCNAPI std::string $encryptData(
        std::string const&,
        std::string const&,
        ::Crypto::Asymmetric::Padding,
        ::Crypto::Asymmetric::PubKeyFormat,
        bool
    );

    MCNAPI std::string $decryptData(std::string const&, std::string const&, ::Crypto::Asymmetric::Padding);

    MCNAPI std::string $signData(
        std::string const&,
        std::string const&,
        ::Crypto::Hash::HashType,
        ::Crypto::Asymmetric::PrivateKeySigningFormat
    );

    MCNAPI bool $verifyData(std::string const&, std::string const&, std::string const&, ::Crypto::Hash::HashType);

    MCNAPI std::string $computeSharedSecret(std::string const&, std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Asymmetric
