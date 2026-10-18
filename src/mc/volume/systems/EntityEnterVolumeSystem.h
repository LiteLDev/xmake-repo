#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/ecs/systems/ITickingSystem.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
#else // @header-generator platform
#endif // @header-generator platform
class EntityRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class ILevel;
class VolumeBoundsComponent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class EntityEnterVolumeSystem : public ::ITickingSystem {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mLevel;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkdcbed4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EntityEnterVolumeSystem& operator=(EntityEnterVolumeSystem const&);
    EntityEnterVolumeSystem(EntityEnterVolumeSystem const&);
#endif // @header-generator platform
    EntityEnterVolumeSystem();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::EntityRegistry&);
#else // @header-generator platform
    virtual void tick(::EntityRegistry&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
