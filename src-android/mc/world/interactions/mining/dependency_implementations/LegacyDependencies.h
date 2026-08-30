#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/interactions/mining/ILegacyDependencies.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class ItemStack;
// clang-format on

namespace Interactions::Mining {

class LegacyDependencies : public ::Interactions::Mining::ILegacyDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>       mActor;
    ::ll::TypedStorage<8, 8, ::ItemStack&>   mItemStack;
    ::ll::TypedStorage<8, 8, ::Block const&> mMinedBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mMinedPos;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyDependencies& operator=(LegacyDependencies const&);
    LegacyDependencies(LegacyDependencies const&);
    LegacyDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyDependencies();

    virtual void hurtAndBreak(int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $hurtAndBreak(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Interactions::Mining
