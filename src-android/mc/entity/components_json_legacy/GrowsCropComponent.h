#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class GrowsCropComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>         mCharges;
    ::ll::TypedStorage<4, 12, ::BlockPos> mTargetCrop;
    ::ll::TypedStorage<4, 12, ::BlockPos> mLastGrownCrop;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GrowsCropComponent();

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
