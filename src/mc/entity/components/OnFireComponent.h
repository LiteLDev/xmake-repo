#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
// clang-format on

struct OnFireComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mOnFireTicks;
    ::ll::TypedStorage<1, 1, bool> mIgnitedThisTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::Actor const&, ::CompoundTag&) const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&);
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::Actor const&, ::CompoundTag& tag) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void convertFromLegacyData(::CompoundTag const&, ::CompoundTag&);

    MCNAPI static bool needsLegacyConversion(::CompoundTag const&);
#else // @header-generator platform
    MCAPI static void convertFromLegacyData(::CompoundTag const& tag, ::CompoundTag& outTag);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& LEGACY_FIRE_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& LEGACY_FIRE_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& ON_FIRE_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& ON_FIRE_TAG();
#endif // @header-generator platform
    // NOLINTEND
};
