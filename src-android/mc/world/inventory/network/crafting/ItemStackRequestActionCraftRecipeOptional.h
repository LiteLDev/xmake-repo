#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraftBase.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestActionCraftRecipeOptional : public ::ItemStackRequestActionCraftBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 0>    mRecipeNetId;
    ::ll::TypedStorage<4, 4, int> mFilteredStringIndex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackRequestActionCraftRecipeOptional();

    virtual int getFilteredStringIndex() const;

    virtual void _write(::BinaryStream&) const;

    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackRequestActionCraftRecipeOptional(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&, int);

    MCNAPI ::TypedServerNetId<RecipeNetIdTag, uint, 0> const& getRecipeNetId() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TypedServerNetId<RecipeNetIdTag, uint, 0> const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getFilteredStringIndex() const;

    MCNAPI void $_write(::BinaryStream&) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $_read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
