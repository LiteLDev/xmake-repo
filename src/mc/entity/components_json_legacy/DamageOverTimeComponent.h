#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class DamageOverTimeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mHurtValue;
    ::ll::TypedStorage<4, 4, int> mDamageTimeInterval;
    ::ll::TypedStorage<4, 4, int> mDamageTime;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI int getDamageTime() const;

    MCNAPI int getDamageTimeInterval() const;

    MCNAPI int getHurtValue() const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void setDamageTime(int);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
