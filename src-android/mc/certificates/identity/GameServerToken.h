#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/GameServerTokenValidationResult.h"
#include "mc/deps/certificates/WebToken.h"

// auto generated forward declare list
// clang-format off
class MinecraftServiceKeyManager;
class PrivateKeyManager;
struct LocalGameServerToken;
struct PlayerAuthenticationInfo;
struct RawGameServerToken;
namespace mce { class UUID; }
// clang-format on

class GameServerToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mIsSelfSigned;
    ::ll::TypedStorage<1, 1, bool>         mIsValid;
    ::ll::TypedStorage<1, 1, bool>         mIsLocal;
    ::ll::TypedStorage<8, 104, ::WebToken> mRawToken;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GameServerToken(std::string const&);

    MCNAPI ::PlayerAuthenticationInfo getTrustedInfo() const;

    MCNAPI bool hasMatchingIssuer(::MinecraftServiceKeyManager const&);

    MCNAPI ::GameServerTokenValidationResult validate(::MinecraftServiceKeyManager const&, long, bool);

    MCNAPI ::GameServerTokenValidationResult validateSelfSigned(long, bool);

    MCNAPI ~GameServerToken();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _checkExpiration(::WebToken const&, long);

    MCNAPI static ::GameServerTokenValidationResult
    _validate(::WebToken const&, ::MinecraftServiceKeyManager const&, long, bool);

    MCNAPI static ::GameServerTokenValidationResult _validateSelfSigned(::WebToken const&, long, bool);

    MCNAPI static ::GameServerToken create(::RawGameServerToken const&);

    MCNAPI static ::RawGameServerToken
    createLocal(::PrivateKeyManager const&, long, std::string const&, ::PlayerAuthenticationInfo const&);

    MCNAPI static ::GameServerToken createSelfSigned(::RawGameServerToken const&);

    MCNAPI static ::PlayerAuthenticationInfo trustTokenWeAreAbsolutelySureIsLocal(::LocalGameServerToken const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
