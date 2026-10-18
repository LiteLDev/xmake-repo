#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/system/System.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
#if defined(LL_PLAT_A) // @header-generator platform
class WebKey;
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
// clang-format on

class WebSignature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mEncodedHeader;
    ::ll::UntypedStorage<8, 16>            mHeader;
    ::ll::TypedStorage<8, 24, std::string> mPayload;
    ::ll::TypedStorage<8, 24, std::string> mEncodedSignature;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkecbed0;
    ::ll::UntypedStorage<8, 16> mUnk9d9703;
    ::ll::UntypedStorage<8, 32> mUnkf7737f;
    ::ll::UntypedStorage<8, 32> mUnk59b486;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WebSignature& operator=(WebSignature const&);
    WebSignature(WebSignature const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WebSignature();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string toDetachedSerialization() const;

    MCNAPI bool verify(::WebKey const&) const;

    MCNAPI bool verify(std::string const&, std::optional<Crypto::Asymmetric::System>) const;
#else // @header-generator platform
    MCNAPI bool
    verify(::std::string const& publicKey, ::std::optional<::Crypto::Asymmetric::System> expectedSystem) const;
#endif // @header-generator platform

    MCNAPI ~WebSignature();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<WebSignature> parseDetached(std::string const&, std::string, ulong);
#else // @header-generator platform
    MCNAPI static ::std::optional<::WebSignature>
    parseDetached(::std::string const& compactSerialization, ::std::string payload, uint64 maxLength);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<WebSignature> sign(std::string const&, ::PrivateKeyManager const&);

    MCNAPI static std::optional<WebSignature>
    sign(std::string const&, ::PrivateKeyManager const&, ::Json::Value const&);
#else // @header-generator platform
    MCNAPI static ::std::optional<::WebSignature>
    sign(::std::string const& payload, ::PrivateKeyManager const& manager, ::Json::Value const& additionalProperties);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
