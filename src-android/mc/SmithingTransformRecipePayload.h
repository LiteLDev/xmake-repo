#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class NetworkItemInstanceDescriptor;
class RecipeIngredient;
template<typename T0> class cerealizer;
// clang-format on

struct SmithingTransformRecipePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mRecipeId;
    ::ll::UntypedStorage<8, 24>            mTemplateIngredient;
    ::ll::UntypedStorage<8, 24>            mBaseIngredient;
    ::ll::UntypedStorage<8, 24>            mAdditionIngredient;
    ::ll::UntypedStorage<8, 40>            mResult;
    ::ll::TypedStorage<8, 24, std::string> mTag;
    ::ll::UntypedStorage<4, 8>             mNetId;
    // NOLINTEND
};
