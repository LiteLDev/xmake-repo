#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorVersion.h"
#include "mc/world/level/block/actor/component/IBlockActorComponent.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class RandomizableContainerBlockActorComponent : public ::IBlockActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RandomizableContainerBlockActorComponent();

    virtual void save(::CompoundTag&) const;

    virtual void load(::CompoundTag const&, ::BlockActorVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $save(::CompoundTag&) const;

    MCNAPI void $load(::CompoundTag const&, ::BlockActorVersion);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
