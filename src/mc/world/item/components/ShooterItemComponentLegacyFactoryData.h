#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ShooterItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // ShooterItemComponentLegacyFactoryData inner types declare
    // clang-format off
    struct ShooterAmmunitionEntry;
    // clang-format on

    // ShooterItemComponentLegacyFactoryData inner types define
    struct ShooterAmmunitionEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::ItemDescriptor> itemDesc;
        ::ll::TypedStorage<1, 1, bool>              useOffhand;
        ::ll::TypedStorage<1, 1, bool>              searchInventory;
        ::ll::TypedStorage<1, 1, bool>              useInCreative;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry>> mAmmunition;
    ::ll::TypedStorage<4, 4, float>                                                                       mDrawDuration;
    ::ll::TypedStorage<1, 1, bool> mScalePowerByDrawDuration;
    ::ll::TypedStorage<1, 1, bool> mChargeOnDraw;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ShooterItemComponentLegacyFactoryData::ShooterAmmunitionEntry>>
                                    mAmmunition;
    ::ll::TypedStorage<4, 4, float> mDrawDuration;
    ::ll::TypedStorage<1, 1, bool>  mScalePowerByDrawDuration;
    ::ll::TypedStorage<1, 1, bool>  mChargeOnDraw;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ShooterItemComponentLegacyFactoryData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
