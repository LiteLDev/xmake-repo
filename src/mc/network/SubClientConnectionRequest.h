#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/network/BaseConnectionRequest.h"

// auto generated forward declare list
// clang-format off
class WebToken;
struct ConnectionAuthInfo;
struct ConnectionSkinInfo;
struct SyncedClientOptionsComponent;
namespace Json { class Value; }
namespace Social { struct Nonce; }
// clang-format on

class SubClientConnectionRequest : public ::BaseConnectionRequest {
public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    SubClientConnectionRequest& operator=(SubClientConnectionRequest const&);
#else // @header-generator platform
#endif // @header-generator platform
    SubClientConnectionRequest();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SubClientConnectionRequest();
#else // @header-generator platform
    virtual ~SubClientConnectionRequest() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _isAuthTypeWellFormed() const;
#else // @header-generator platform
    virtual bool _isAuthTypeWellFormed() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SubClientConnectionRequest(::SubClientConnectionRequest const&);

    MCNAPI SubClientConnectionRequest(std::optional<WebToken>, ::Json::Value const&);
#else // @header-generator platform
    MCAPI SubClientConnectionRequest(::std::optional<::WebToken> rawToken, ::Json::Value const& authentication);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SubClientConnectionRequest create(
        ::ConnectionAuthInfo const&,
        std::string const&,
        std::string const&,
        ulong,
        std::string const&,
        ::ConnectionSkinInfo const&,
        ::InputMode,
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        ::SyncedClientOptionsComponent const&,
        std::optional<Social::Nonce> const&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::SubClientConnectionRequest create(
        ::ConnectionAuthInfo const&             authInfo,
        ::std::string const&                    deviceId,
        ::std::string const&                    selfSignedId,
        uint64                                  clientRandomId,
        ::std::string const&                    platformId,
        ::ConnectionSkinInfo const&             skinInfo,
        ::InputMode                             currentInputMode,
        ::std::string const&                    thirdPartyName,
        ::std::string const&                    platformOnlineId,
        ::std::string const&                    platformOfflineId,
        bool                                    compatibleWithClientSideChunkGen,
        ::SyncedClientOptionsComponent const&   options,
        ::std::optional<::Social::Nonce> const& nonce
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SubClientConnectionRequest fromString(std::string const&);
#else // @header-generator platform
    MCAPI static ::SubClientConnectionRequest fromString(::std::string const& str);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SubClientConnectionRequest const&);

    MCNAPI void* $ctor(std::optional<WebToken>, ::Json::Value const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::optional<::WebToken> rawToken, ::Json::Value const& authentication);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $_isAuthTypeWellFormed() const;
#else // @header-generator platform
    MCAPI bool $_isAuthTypeWellFormed() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
