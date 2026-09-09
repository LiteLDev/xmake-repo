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
    ConnectionRequest& operator=(ConnectionRequest const&);
    ConnectionRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConnectionRequest();

    virtual bool _isAuthTypeWellFormed() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConnectionRequest(::ConnectionRequest const&);

    MCNAPI ConnectionRequest(std::optional<WebToken>, ::Json::Value const&);

    MCNAPI bool clientIsEditorCapable() const;

    MCNAPI ::EditorConnectionJoinIntent getClientEditorConnectionIntent() const;

    MCNAPI std::string getDeviceModel() const;

    MCNAPI std::string getEduJoinerToHostNonce() const;

    MCNAPI std::string getEduSessionToken() const;

    MCNAPI std::string getEduTokenChain() const;

    MCNAPI std::optional<PlayerPartyInfo> getPartyInfo() const;

    MCNAPI bool isEduMode() const;

    MCNAPI ::Bedrock::Result<EditorConnectionJoinIntent, std::error_code>
        validateEditorConnectionJoinIntentAgainstServerPolicy(::gsl::not_null<ILevel*>) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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

    MCNAPI static ::ConnectionRequest fromString(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ConnectionRequest const&);

    MCNAPI void* $ctor(std::optional<WebToken>, ::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_isAuthTypeWellFormed() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
