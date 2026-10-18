#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/ItemDescriptor.h"
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

struct FoodItemComponentLegacyFactoryData : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                  mNutrition;
    ::ll::TypedStorage<4, 4, float>                mSaturationModifier;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>    mUsingConvertsTo;
    ::ll::TypedStorage<1, 1, bool>                 mCanAlwaysEat;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::DefinitionTrigger> mOnConsume;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FoodItemComponentLegacyFactoryData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::DefinitionTrigger> mOnConsume;
#endif // @header-generator platform
    // NOLINTEND
};
