#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class VanillaGameModuleDedicatedServer {};
#else // @header-generator platform
// auto generated inclusion list
#include "mc/world/module/IGameModuleShared.h"

// auto generated forward declare list
// clang-format off
class GameModuleServer;
class IInPackagePacks;
class ServerInstanceEventCoordinator;
// clang-format on

class VanillaGameModuleDedicatedServer : public ::IGameModuleShared {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::GameModuleServer> createGameModuleServer() /*override*/;

    virtual ::std::shared_ptr<::IInPackagePacks> createInPackagePacks() /*override*/;

    virtual void registerMolangQueries() /*override*/;

    virtual void
    registerServerInstanceHandler(::ServerInstanceEventCoordinator& serverInstanceCoordinator) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::GameModuleServer> $createGameModuleServer();

    MCNAPI ::std::shared_ptr<::IInPackagePacks> $createInPackagePacks();

    MCNAPI void $registerMolangQueries();

    MCNAPI void $registerServerInstanceHandler(::ServerInstanceEventCoordinator& serverInstanceCoordinator);
    // NOLINTEND
};
#endif // @header-generator platform
#endif // @header-generator platform
