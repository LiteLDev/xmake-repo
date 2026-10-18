#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/system/System.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
#if defined(LL_PLAT_A) // @header-generator platform
class WebKey;
#else // @header-generator platform
#endif // @header-generator platform
struct CertificateSNIType;
struct PublicKeySignatureType;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class WebToken {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mHeader;
    ::ll::UntypedStorage<8, 16>            mHeaderInfo;
    ::ll::TypedStorage<8, 24, std::string> mData;
    ::ll::UntypedStorage<8, 16>            mDataInfo;
    ::ll::TypedStorage<8, 24, std::string> mSignature;
#else // @header-generator platform
    ::std::string mHeader;
    ::Json::Value mHeaderInfo;
    ::std::string mData;
    ::Json::Value mDataInfo;
    ::std::string mSignature;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    WebToken(WebToken const&);
#else // @header-generator platform
    WebToken() = default;
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WebToken(::WebToken&&);
#else // @header-generator platform
    MCAPI WebToken(::WebToken const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getKeyId() const;
#else // @header-generator platform
    MCAPI ::std::string getKeyId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getSignerPublicKey() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string getSignerPublicKey() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string toString() const;
#else // @header-generator platform
    MCAPI ::WebToken& operator=(::WebToken&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool verifyWithExternalKey(::WebKey const&) const;
#else // @header-generator platform
    MCAPI ::WebToken& operator=(::WebToken const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool verifyWithExternalKey(std::string const&, std::optional<Crypto::Asymmetric::System>) const;
#else // @header-generator platform
    MCAPI bool verifyWithExternalKey(
        ::std::string const&                          publicKey,
        ::std::optional<::Crypto::Asymmetric::System> expectedSystem
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool verifyWithIncludedKey(std::vector<std::string> const&) const;
#else // @header-generator platform
    MCAPI bool verifyWithIncludedKey(::std::vector<::std::string> const& trustedKeys) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~WebToken();
#else // @header-generator platform
    MCAPI ~WebToken();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<WebToken> createFromData(::Json::Value const&, ::PrivateKeyManager const&);
#else // @header-generator platform
    MCAPI static ::std::optional<::WebToken>
    createFromData(::Json::Value const& dataInfo, ::PrivateKeyManager const& manager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<WebToken>
    createFromData(::Json::Value const&, ::PrivateKeyManager const&, ::Json::Value const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::WebToken> createFromData(
        ::Json::Value const&       dataInfo,
        ::PrivateKeyManager const& manager,
        ::Json::Value const&       extraHeaders
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<WebToken> createFromData(
        ::Json::Value const&,
        ::PrivateKeyManager const&,
        ::Json::Value const&,
        std::variant<PublicKeySignatureType, CertificateSNIType> const&
#else // @header-generator platform
    MCAPI static ::std::optional<::WebToken> createFromData(
        ::Json::Value const&                                                  dataInfo,
        ::PrivateKeyManager const&                                            manager,
        ::Json::Value const&                                                  extraHeaders,
        ::std::variant<::PublicKeySignatureType, ::CertificateSNIType> const& signatureType
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<WebToken> parse(std::string_view, ulong);
#else // @header-generator platform
    MCAPI static ::std::optional<::WebToken> parse(::std::string_view token, uint64 maxLength);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::WebToken&&);
#else // @header-generator platform
    MCAPI void* $ctor(::WebToken const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
