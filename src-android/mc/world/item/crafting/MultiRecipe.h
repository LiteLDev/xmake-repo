#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/crafting/Recipe.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

class MultiRecipe : public ::Recipe {
public:
    // prevent constructor by default
    MultiRecipe();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultiRecipe();

    virtual bool isShapeless() const;

    virtual bool isMultiRecipe() const;

    virtual bool hasDataDrivenResult() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultiRecipe(std::string const&, ::HashedString);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, ::HashedString);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isShapeless() const;

    MCNAPI bool $isMultiRecipe() const;

    MCNAPI bool $hasDataDrivenResult() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
