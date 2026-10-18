#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct ThrowableItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mDoSwing;
    ::ll::TypedStorage<4, 4, float> mMinDrawDuration;
    ::ll::TypedStorage<4, 4, float> mDrawDuration;
    ::ll::TypedStorage<4, 4, float> mLaunchPowerScale;
    ::ll::TypedStorage<4, 4, float> mMaxLaunchPower;
    ::ll::TypedStorage<1, 1, bool>  mScalePowerByDrawDuration;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
