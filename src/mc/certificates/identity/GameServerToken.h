#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/GameServerTokenValidationResult.h"
#else // @header-generator platform
#include "mc/certificates/identity/GameServerTokenValidationResult.h"
#endif // @header-generator platform
#include "mc/deps/certificates/WebToken.h"

// auto generated forward declare list
// clang-format off
class MinecraftServiceKeyManager;
class PrivateKeyManager;
#if defined(LL_PLAT_A) // @header-generator platform
struct LocalGameServerToken;
#else // @header-generator platform
#endif // @header-generator platform
struct PlayerAuthenticationInfo;
struct RawGameServerToken;
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class UUID; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class GameServerToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mIsSelfSigned;
    ::ll::TypedStorage<1, 1, bool>         mIsValid;
    ::ll::TypedStorage<1, 1, bool>         mIsLocal;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 104, ::WebToken> mRawToken;
#else // @header-generator platform
    ::ll::TypedStorage<8, 128, ::WebToken> mRawToken;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    GameServerToken();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit GameServerToken(std::string const&);
#else // @header-generator platform
    MCAPI explicit GameServerToken(::std::string const& tokenString);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PlayerAuthenticationInfo getTrustedInfo() const;
#else // @header-generator platform
    MCAPI ::PlayerAuthenticationInfo getTrustedInfo() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasMatchingIssuer(::MinecraftServiceKeyManager const&);

    MCNAPI ::GameServerTokenValidationResult validate(::MinecraftServiceKeyManager const&, long, bool);

    MCNAPI ::GameServerTokenValidationResult validateSelfSigned(long, bool);

    MCNAPI ~GameServerToken();
#else // @header-generator platform
    MCAPI bool hasMatchingIssuer(::MinecraftServiceKeyManager const& serviceKeyManager);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool _checkExpiration(::WebToken const&, long);
#else // @header-generator platform
    MCAPI static bool _checkExpiration(::WebToken const& token, int64 currentTime);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::GameServerTokenValidationResult
    _validate(::WebToken const&, ::MinecraftServiceKeyManager const&, long, bool);
#else // @header-generator platform
    MCAPI static ::GameServerTokenValidationResult _validate(
        ::WebToken const&                   token,
        ::MinecraftServiceKeyManager const& keyManager,
        int64                               currentTime,
        bool                                checkExpiration
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::GameServerTokenValidationResult _validateSelfSigned(::WebToken const&, long, bool);
#else // @header-generator platform
    MCAPI static ::GameServerTokenValidationResult
    _validateSelfSigned(::WebToken const& token, int64 currentTime, bool checkExpiration);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::GameServerToken create(::RawGameServerToken const&);

    MCNAPI static ::RawGameServerToken
    createLocal(::PrivateKeyManager const&, long, std::string const&, ::PlayerAuthenticationInfo const&);

    MCNAPI static ::GameServerToken createSelfSigned(::RawGameServerToken const&);

    MCNAPI static ::PlayerAuthenticationInfo trustTokenWeAreAbsolutelySureIsLocal(::LocalGameServerToken const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::RawGameServerToken createLocal(
        ::PrivateKeyManager const&        signer,
        int64                             expirationDate,
        ::std::string const&              keyId,
        ::PlayerAuthenticationInfo const& claims
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& tokenString);
#endif // @header-generator platform
    // NOLINTEND
};
