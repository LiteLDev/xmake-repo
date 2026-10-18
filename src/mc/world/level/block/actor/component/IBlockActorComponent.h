#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorVersion.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct IBlockActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IBlockActorComponent();
#else // @header-generator platform
    virtual ~IBlockActorComponent() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void save(::CompoundTag&) const = 0;
#else // @header-generator platform
    virtual void save(::CompoundTag& parentTag) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(::CompoundTag const&, ::BlockActorVersion) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void load(::CompoundTag const& parentTag, ::BlockActorVersion version) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
