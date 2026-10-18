#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/app_extensions/AppExtensionsNonOwner.h"

// auto generated forward declare list
// clang-format off
class GameModuleServer;
class IInPackagePacks;
class ServerInstanceEventCoordinator;
// clang-format on

class IGameModuleShared : public ::AppExtensions::AppExtensionsNonOwner {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IGameModuleShared() = default;
#else // @header-generator platform
    virtual ~IGameModuleShared() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<GameModuleServer> createGameModuleServer() = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::GameModuleServer> createGameModuleServer() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<IInPackagePacks> createInPackagePacks() = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::IInPackagePacks> createInPackagePacks() = 0;
#endif // @header-generator platform

    virtual void registerMolangQueries() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerServerInstanceHandler(::ServerInstanceEventCoordinator&) = 0;
#else // @header-generator platform
    virtual void registerServerInstanceHandler(::ServerInstanceEventCoordinator& serverInstanceCoordinator) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
