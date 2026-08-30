#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Mob;
// clang-format on

struct ItemInHandRenderFrameId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>  mItemInstanceId;
    ::ll::TypedStorage<4, 4, uint>  mChargedItemInstanceId;
    ::ll::TypedStorage<1, 1, uchar> mEntityId;
    ::ll::TypedStorage<1, 1, uchar> mAnimationFrame;
    ::ll::TypedStorage<8, 8, ulong> mArmorTrimMaterialHash;
    ::ll::TypedStorage<1, 1, bool>  mDyed;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ItemInHandRenderFrameId getFrameID(::ItemStack const&, ::Mob*, int);
    // NOLINTEND
};
