#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/system/System.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
class WebKey;
namespace Json { class Value; }
// clang-format on

class WebSignature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mEncodedHeader;
    ::ll::UntypedStorage<8, 16>            mHeader;
    ::ll::TypedStorage<8, 24, std::string> mPayload;
    ::ll::TypedStorage<8, 24, std::string> mEncodedSignature;
    // NOLINTEND

public:
    // prevent constructor by default
    WebSignature& operator=(WebSignature const&);
    WebSignature(WebSignature const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string toDetachedSerialization() const;

    MCNAPI bool verify(::WebKey const&) const;

    MCNAPI bool verify(std::string const&, std::optional<Crypto::Asymmetric::System>) const;

    MCNAPI ~WebSignature();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<WebSignature> parseDetached(std::string const&, std::string, ulong);

    MCNAPI static std::optional<WebSignature> sign(std::string const&, ::PrivateKeyManager const&);

    MCNAPI static std::optional<WebSignature>
    sign(std::string const&, ::PrivateKeyManager const&, ::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
