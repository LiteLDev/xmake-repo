#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/ContainerValidationCraftInputs.h"

struct RecipeCraftInputs : public ::ContainerValidationCraftInputs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mRecipeNetId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecipeCraftInputs();
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
    // NOLINTEND
};
