#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/system/System.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
class WebKey;
struct CertificateSNIType;
struct PublicKeySignatureType;
namespace Json { class Value; }
// clang-format on

class WebToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mHeader;
    ::ll::UntypedStorage<8, 16>            mHeaderInfo;
    ::ll::TypedStorage<8, 24, std::string> mData;
    ::ll::UntypedStorage<8, 16>            mDataInfo;
    ::ll::TypedStorage<8, 24, std::string> mSignature;
    // NOLINTEND

public:
    // prevent constructor by default
    WebToken(WebToken const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WebToken(::WebToken&&);

    MCNAPI std::string getKeyId() const;

    MCNAPI std::string getSignerPublicKey() const;

    MCNAPI std::string toString() const;

    MCNAPI bool verifyWithExternalKey(::WebKey const&) const;

    MCNAPI bool verifyWithExternalKey(std::string const&, std::optional<Crypto::Asymmetric::System>) const;

    MCNAPI bool verifyWithIncludedKey(std::vector<std::string> const&) const;

    MCNAPI ~WebToken();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<WebToken> createFromData(::Json::Value const&, ::PrivateKeyManager const&);

    MCNAPI static std::optional<WebToken>
    createFromData(::Json::Value const&, ::PrivateKeyManager const&, ::Json::Value const&);

    MCNAPI static std::optional<WebToken> createFromData(
        ::Json::Value const&,
        ::PrivateKeyManager const&,
        ::Json::Value const&,
        std::variant<PublicKeySignatureType, CertificateSNIType> const&
    );

    MCNAPI static std::optional<WebToken> parse(std::string_view, ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WebToken&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
