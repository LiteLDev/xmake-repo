#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/MinecraftAccountPermissions.h"
#include "mc/platform/UUID.h"

struct PlayerAuthenticationInfo {
public:
    // member variables
    // NOLINTBEGIN
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
    ::ll::TypedStorage<8, 8, ::MinecraftAccountPermissions> Permissions;
    ::ll::TypedStorage<8, 24, std::string>                  PublicKey;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                  AuthenticatedUuid;
    ::ll::TypedStorage<1, 1, bool>                          IsHost;
    ::ll::TypedStorage<1, 1, bool>                          IsLocal;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAuthenticationInfo(PlayerAuthenticationInfo const&);
};
