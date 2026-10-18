#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"
#include "mc/deps/input/InputMode.h"
#include "mc/network/BaseConnectionRequest.h"
#include "mc/network/EditorConnectionJoinIntent.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class WebToken;
struct ConnectionAuthInfo;
struct ConnectionSkinInfo;
struct PlayerPartyInfo;
struct SyncedClientOptionsComponent;
namespace Json { class Value; }
namespace Social { struct Nonce; }
// clang-format on

class ConnectionRequest : public ::BaseConnectionRequest {
public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ConnectionRequest& operator=(ConnectionRequest const&);
#else // @header-generator platform
#endif // @header-generator platform
    ConnectionRequest();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ConnectionRequest();
#else // @header-generator platform
    virtual ~ConnectionRequest() /*override*/;
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
    MCNAPI ConnectionRequest(::ConnectionRequest const&);
#else // @header-generator platform
    MCAPI ConnectionRequest(::std::optional<::WebToken> rawToken, ::Json::Value const& authentication);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ConnectionRequest(std::optional<WebToken>, ::Json::Value const&);
#else // @header-generator platform
    MCAPI bool clientIsEditorCapable() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool clientIsEditorCapable() const;
#else // @header-generator platform
    MCAPI ::EditorConnectionJoinIntent getClientEditorConnectionIntent() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EditorConnectionJoinIntent getClientEditorConnectionIntent() const;
#else // @header-generator platform
    MCAPI ::std::string getDeviceModel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getDeviceModel() const;
#else // @header-generator platform
    MCAPI ::std::string getEduJoinerToHostNonce() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getEduJoinerToHostNonce() const;
#else // @header-generator platform
    MCAPI ::std::string getEduSessionToken() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getEduSessionToken() const;
#else // @header-generator platform
    MCAPI ::std::string getEduTokenChain() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getEduTokenChain() const;
#else // @header-generator platform
    MCAPI ::std::optional<::PlayerPartyInfo> getPartyInfo() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<PlayerPartyInfo> getPartyInfo() const;
#else // @header-generator platform
    MCAPI bool isEduMode() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isEduMode() const;

    MCNAPI ::Bedrock::Result<EditorConnectionJoinIntent, std::error_code>
        validateEditorConnectionJoinIntentAgainstServerPolicy(::gsl::not_null<ILevel*>) const;
#else // @header-generator platform
    MCAPI ::Bedrock::Result<::EditorConnectionJoinIntent>
    validateEditorConnectionJoinIntentAgainstServerPolicy(::gsl::not_null<::ILevel*> level) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ConnectionRequest create(
        ::ConnectionAuthInfo const&,
        std::string const&,
        std::string const&,
        ulong,
        ::ConnectionSkinInfo const&,
        std::string const&,
        ::InputMode,
        int,
        std::string const&,
        bool,
        ::EditorConnectionJoinIntent,
        bool,
        std::optional<WebToken>,
        std::string,
        std::string,
        ::edu::Role,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::optional<PlayerPartyInfo> const&,
        bool,
        ::SyncedClientOptionsComponent const&,
        std::optional<Social::Nonce> const&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::ConnectionRequest create(
        ::ConnectionAuthInfo const&               authInfo,
        ::std::string const&                      selfSignedId,
        ::std::string const&                      serverAddress,
        uint64                                    clientRandomId,
        ::ConnectionSkinInfo const&               skinInfo,
        ::std::string const&                      deviceId,
        ::InputMode                               currentInputMode,
        int                                       guiScale,
        ::std::string const&                      languageCode,
        bool                                      clientIsEditorCapable,
        ::EditorConnectionJoinIntent              clientEditorConnectionIntent,
        bool                                      isEduMode,
        ::std::optional<::WebToken>               eduTokenChain,
        ::std::string                             eduSessionToken,
        ::std::string                             eduJoinerToHostNonce,
        ::edu::Role                               classRole,
        ::std::string const&                      platformId,
        ::std::string const&                      thirdPartyName,
        ::std::string const&                      platformOnlineId,
        ::std::string const&                      platformOfflineId,
        ::std::optional<::PlayerPartyInfo> const& partyInfo,
        bool                                      compatibleWithClientSideChunkGen,
        ::SyncedClientOptionsComponent const&     options,
        ::std::optional<::Social::Nonce> const&   nonce
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ConnectionRequest fromString(std::string const&);
#else // @header-generator platform
    MCAPI static ::ConnectionRequest fromString(::std::string const& str);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ConnectionRequest const&);

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
    MCAPI void $dtor();
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
