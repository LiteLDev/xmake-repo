#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
class DataLoadHelper;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GrowsCropComponent();

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform
    // NOLINTEND
};
