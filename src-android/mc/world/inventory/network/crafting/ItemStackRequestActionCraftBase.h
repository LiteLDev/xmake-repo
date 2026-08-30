#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestActionCraftBase : public ::ItemStackRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar> mNumCrafts;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionCraftBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemStackRequestActionCraftBase const* getCraftAction() const;

    virtual void postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette&, bool);

    virtual void _write(::BinaryStream&) const = 0;

    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uchar getNumCrafts() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackRequestActionCraftBase const* $getCraftAction() const;

    MCNAPI void $postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette&, bool);
    // NOLINTEND
};
