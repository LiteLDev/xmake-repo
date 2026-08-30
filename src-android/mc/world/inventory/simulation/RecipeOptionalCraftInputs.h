#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/simulation/RecipeCraftInputs.h"

struct RecipeOptionalCraftInputs : public ::RecipeCraftInputs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mItemName;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> mPreviewName;
    // NOLINTEND

public:
    // prevent constructor by default
    RecipeOptionalCraftInputs();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RecipeOptionalCraftInputs();
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
