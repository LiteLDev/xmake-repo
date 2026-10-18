#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityRegistry;
#else // @header-generator platform
#endif // @header-generator platform
class ITickingSystem;
struct TickingSystemRegistrationToken;
// clang-format on

class AppSystemRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 16>                                           mEntityRegistry;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<ITickingSystem>>> mTickingSystems;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk10ac91;
    ::ll::UntypedStorage<8, 24> mUnkbb24cf;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AppSystemRegistry& operator=(AppSystemRegistry const&);
    AppSystemRegistry(AppSystemRegistry const&);
    AppSystemRegistry();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AppSystemRegistry();

    MCNAPI ::StackRefResult<EntityRegistry> getEntityRegistry();

    MCNAPI void registerEvents();

    MCNAPI ::TickingSystemRegistrationToken registerTickingSystem(std::unique_ptr<ITickingSystem>);

    MCNAPI void tick();

    MCNAPI ~AppSystemRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void registerEvents();

    MCNAPI ::TickingSystemRegistrationToken registerTickingSystem(::std::unique_ptr<::ITickingSystem> tickingSystem);

    MCNAPI void tick();

    MCNAPI ~AppSystemRegistry();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
