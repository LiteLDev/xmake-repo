#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/MinecraftAccountPermissions.h"
#include "mc/platform/UUID.h"

struct PlayerAuthenticationInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                  Xuid;
    ::ll::TypedStorage<8, 24, std::string>                  PlayFabId;
    ::ll::TypedStorage<8, 24, std::string>                  NintendoId;
    ::ll::TypedStorage<8, 24, std::string>                  PsnId;
    ::ll::TypedStorage<8, 24, std::string>                  TenantId;
    ::ll::TypedStorage<8, 24, std::string>                  MessOId;
    ::ll::TypedStorage<8, 24, std::string>                  XboxLiveName;
    ::ll::TypedStorage<8, 24, std::string>                  NintendoName;
    ::ll::TypedStorage<8, 24, std::string>                  PlayStationName;
    ::ll::TypedStorage<8, 24, std::string>                  BestDisplayName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                Xuid;
    ::ll::TypedStorage<8, 32, ::std::string>                PlayFabId;
    ::ll::TypedStorage<8, 32, ::std::string>                NintendoId;
    ::ll::TypedStorage<8, 32, ::std::string>                PsnId;
    ::ll::TypedStorage<8, 32, ::std::string>                TenantId;
    ::ll::TypedStorage<8, 32, ::std::string>                MessOId;
    ::ll::TypedStorage<8, 32, ::std::string>                XboxLiveName;
    ::ll::TypedStorage<8, 32, ::std::string>                NintendoName;
    ::ll::TypedStorage<8, 32, ::std::string>                PlayStationName;
    ::ll::TypedStorage<8, 32, ::std::string>                BestDisplayName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::MinecraftAccountPermissions> Permissions;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                  PublicKey;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                PublicKey;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID>                  AuthenticatedUuid;
    ::ll::TypedStorage<1, 1, bool>                          IsHost;
    ::ll::TypedStorage<1, 1, bool>                          IsLocal;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    PlayerAuthenticationInfo(PlayerAuthenticationInfo const&);
#else // @header-generator platform
    PlayerAuthenticationInfo& operator=(PlayerAuthenticationInfo const&);
    PlayerAuthenticationInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerAuthenticationInfo(::PlayerAuthenticationInfo const&);

    MCAPI ::PlayerAuthenticationInfo& operator=(::PlayerAuthenticationInfo&&);

    MCAPI ~PlayerAuthenticationInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PlayerAuthenticationInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
