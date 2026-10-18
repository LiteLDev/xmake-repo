#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/TypedServerNetId.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/simulation/ContainerValidationCraftInputs.h"

struct RecipeCraftInputs : public ::ContainerValidationCraftInputs {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 8> mRecipeNetId;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk8dfabf;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecipeCraftInputs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    RecipeCraftInputs& operator=(RecipeCraftInputs const&);
    RecipeCraftInputs(RecipeCraftInputs const&);
    RecipeCraftInputs();
#endif // @header-generator platform

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
