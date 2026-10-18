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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Crypto::Asymmetric::System>                          mSystem;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Crypto::Asymmetric::ISystemInterface>> mInterface;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkc59a46;
    ::ll::UntypedStorage<8, 8> mUnkf0d693;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Asymmetric& operator=(Asymmetric const&);
    Asymmetric(Asymmetric const&);
#endif // @header-generator platform
    Asymmetric();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~Asymmetric();
#else // @header-generator platform
    virtual ~Asymmetric() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool generateKeyPair(std::string&, std::string&);
#else // @header-generator platform
    virtual bool generateKeyPair(::std::string& privateKey, ::std::string& publicKey) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<std::string, std::error_code> constructPublicKey(std::variant<Crypto::Asymmetric::RsaPublicKeyComponents, Crypto::Asymmetric::EcPublicKeyComponents> const&);
#else // @header-generator platform
    virtual ::Bedrock::Result<::std::string> constructPublicKey(
        ::std::variant<::Crypto::Asymmetric::RsaPublicKeyComponents, ::Crypto::Asymmetric::EcPublicKeyComponents> const&
            components
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<std::variant<Crypto::Asymmetric::RsaPublicKeyComponents, Crypto::Asymmetric::EcPublicKeyComponents>, std::error_code> deconstructPublicKey(std::string const&);
#else // @header-generator platform
    virtual ::Bedrock::Result<
        ::std::variant<::Crypto::Asymmetric::RsaPublicKeyComponents, ::Crypto::Asymmetric::EcPublicKeyComponents>>
    deconstructPublicKey(::std::string const& publicKey) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string encryptData(std::string const&, std::string const&, ::Crypto::Asymmetric::Padding, ::Crypto::Asymmetric::PubKeyFormat, bool);
#else // @header-generator platform
    virtual ::std::string encryptData(
        ::std::string const&               publicKey,
        ::std::string const&               data,
        ::Crypto::Asymmetric::Padding      paddingType,
        ::Crypto::Asymmetric::PubKeyFormat keyFormat,
        bool                               useSHA256
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string decryptData(std::string const&, std::string const&, ::Crypto::Asymmetric::Padding);
#else // @header-generator platform
    virtual ::std::string decryptData(
        ::std::string const&          privateKey,
        ::std::string const&          data,
        ::Crypto::Asymmetric::Padding paddingType
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string signData(std::string const&, std::string const&, ::Crypto::Hash::HashType, ::Crypto::Asymmetric::PrivateKeySigningFormat);
#else // @header-generator platform
    virtual ::std::string signData(
        ::std::string const&                          privateKey,
        ::std::string const&                          data,
        ::Crypto::Hash::HashType                      hash,
        ::Crypto::Asymmetric::PrivateKeySigningFormat format
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool verifyData(std::string const&, std::string const&, std::string const&, ::Crypto::Hash::HashType);
#else // @header-generator platform
    virtual bool verifyData(
        ::std::string const&     publicKey,
        ::std::string const&     signature,
        ::std::string const&     data,
        ::Crypto::Hash::HashType hash
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string computeSharedSecret(std::string const&, std::string const&);
    // clang-format on
#else // @header-generator platform
    virtual ::std::string
    computeSharedSecret(::std::string const& myPrivateKey, ::std::string const& peerPublicKey) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Asymmetric(::Crypto::Asymmetric::System);

    MCNAPI bool canComputeSecret();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<Crypto::Asymmetric::System, std::error_code>
    inferSystemFromPublicKey(std::string const&);
#else // @header-generator platform
    MCNAPI explicit Asymmetric(::Crypto::Asymmetric::System system);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Crypto::Asymmetric::System);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::Crypto::Asymmetric::System system);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $generateKeyPair(std::string&, std::string&);
#else // @header-generator platform
    MCNAPI bool $generateKeyPair(::std::string& privateKey, ::std::string& publicKey);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<std::string, std::error_code> $constructPublicKey(
        std::variant<Crypto::Asymmetric::RsaPublicKeyComponents, Crypto::Asymmetric::EcPublicKeyComponents> const&
#else // @header-generator platform
    MCNAPI ::Bedrock::Result<::std::string> $constructPublicKey(
        ::std::variant<::Crypto::Asymmetric::RsaPublicKeyComponents, ::Crypto::Asymmetric::EcPublicKeyComponents> const&
            components
#endif // @header-generator platform
    );

    MCNAPI ::Bedrock::Result<
#if defined(LL_PLAT_A) // @header-generator platform
        std::variant<Crypto::Asymmetric::RsaPublicKeyComponents, Crypto::Asymmetric::EcPublicKeyComponents>,
        std::error_code>
    $deconstructPublicKey(std::string const&);
#else // @header-generator platform
        ::std::variant<::Crypto::Asymmetric::RsaPublicKeyComponents, ::Crypto::Asymmetric::EcPublicKeyComponents>>
    $deconstructPublicKey(::std::string const& publicKey);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $encryptData(
        std::string const&,
        std::string const&,
        ::Crypto::Asymmetric::Padding,
        ::Crypto::Asymmetric::PubKeyFormat,
        bool
#else // @header-generator platform
    MCNAPI ::std::string $encryptData(
        ::std::string const&               publicKey,
        ::std::string const&               data,
        ::Crypto::Asymmetric::Padding      paddingType,
        ::Crypto::Asymmetric::PubKeyFormat keyFormat,
        bool                               useSHA256
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $decryptData(std::string const&, std::string const&, ::Crypto::Asymmetric::Padding);
#else // @header-generator platform
    MCNAPI ::std::string
    $decryptData(::std::string const& privateKey, ::std::string const& data, ::Crypto::Asymmetric::Padding paddingType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $signData(
        std::string const&,
        std::string const&,
        ::Crypto::Hash::HashType,
        ::Crypto::Asymmetric::PrivateKeySigningFormat
#else // @header-generator platform
    MCNAPI ::std::string $signData(
        ::std::string const&                          privateKey,
        ::std::string const&                          data,
        ::Crypto::Hash::HashType                      hash,
        ::Crypto::Asymmetric::PrivateKeySigningFormat format
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $verifyData(std::string const&, std::string const&, std::string const&, ::Crypto::Hash::HashType);
#else // @header-generator platform
    MCNAPI bool $verifyData(
        ::std::string const&     publicKey,
        ::std::string const&     signature,
        ::std::string const&     data,
        ::Crypto::Hash::HashType hash
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $computeSharedSecret(std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI ::std::string $computeSharedSecret(::std::string const& myPrivateKey, ::std::string const& peerPublicKey);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Asymmetric
