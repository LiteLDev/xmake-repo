#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"
#include "mc/world/item/crafting/RecipeIngredient.h"
#include "mc/world/item/crafting/RecipeUnlockingRequirement.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class cerealizer;
// clang-format on

struct ShapedRecipePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mRecipeId;
    ::ll::TypedStorage<4, 4, int>          mWidth;
    ::ll::TypedStorage<4, 4, int>          mHeight;
    ::ll::UntypedStorage<8, 24>            mIngredients;
    ::ll::UntypedStorage<8, 24>            mResults;
    ::ll::TypedStorage<8, 16, ::mce::UUID> mUuid;
    ::ll::TypedStorage<8, 24, std::string> mTag;
    ::ll::TypedStorage<4, 4, int>          mPriority;
    ::ll::TypedStorage<1, 1, bool>         mAssumeSymmetry;
    ::ll::UntypedStorage<8, 48>            mUnlockingRequirement;
    ::ll::UntypedStorage<4, 8>             mNetId;
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
