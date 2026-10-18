#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/crypto/certificate/Encoding.h"
#include "mc/deps/crypto/certificate/ThumbprintFormat.h"
#endif // @header-generator platform
#include "mc/deps/crypto/certificate/system/ISystemInterface.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct evp_pkey_st;
struct x509_st;
// clang-format on
#else // @header-generator platform
#include "mc/deps/crypto/hash/HashType.h"
#endif // @header-generator platform

namespace Crypto::Certificate {

class OpenSSLCertificateInterface : public ::Crypto::Certificate::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<x509_st>>     mCertificate;
    ::ll::TypedStorage<8, 8, std::unique_ptr<evp_pkey_st>> mPrivateKey;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk9401d9;
    ::ll::UntypedStorage<8, 8> mUnke827dd;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSSLCertificateInterface& operator=(OpenSSLCertificateInterface const&);
    OpenSSLCertificateInterface(OpenSSLCertificateInterface const&);
    OpenSSLCertificateInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OpenSSLCertificateInterface() /*override*/ = default;

    virtual ::std::string serialize(::Crypto::Certificate::Encoding encoding) const /*override*/;

    virtual ::std::string extractPublicKey(::Crypto::Certificate::Encoding encoding) const /*override*/;

    virtual ::std::string extractPrivateKey(::Crypto::Certificate::Encoding encoding) const /*override*/;

    virtual ::std::string getIssuer() const /*override*/;

    virtual bool hasValidCertChain() const /*override*/;

    virtual ::std::string generateCertificateThumbprint(
        ::Crypto::Hash::HashType                hashFunction,
        ::Crypto::Certificate::ThumbprintFormat formatting
    ) const /*override*/;

    virtual ::std::string generatePublicKeyThumbprint(
        ::Crypto::Hash::HashType                hashFunction,
        ::Crypto::Certificate::ThumbprintFormat formatting
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI OpenSSLCertificateInterface(::Crypto::Certificate::Encoding encoding, ::std::string const& certificateData);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI static ::std::string
    _formatThumbprint(::std::string const& rawThumbprint, ::Crypto::Certificate::ThumbprintFormat formatting);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Crypto::Certificate::Encoding encoding, ::std::string const& certificateData);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ::std::string $serialize(::Crypto::Certificate::Encoding encoding) const;

    MCNAPI ::std::string $extractPublicKey(::Crypto::Certificate::Encoding encoding) const;

    MCNAPI ::std::string $extractPrivateKey(::Crypto::Certificate::Encoding encoding) const;

    MCNAPI ::std::string $getIssuer() const;

    MCNAPI bool $hasValidCertChain() const;

    MCNAPI ::std::string $generateCertificateThumbprint(
        ::Crypto::Hash::HashType                hashFunction,
        ::Crypto::Certificate::ThumbprintFormat formatting
    ) const;

    MCNAPI ::std::string $generatePublicKeyThumbprint(
        ::Crypto::Hash::HashType                hashFunction,
        ::Crypto::Certificate::ThumbprintFormat formatting
    ) const;
#endif


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Crypto::Certificate
