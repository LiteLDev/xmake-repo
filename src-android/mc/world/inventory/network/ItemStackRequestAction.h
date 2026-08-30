#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ItemStackRequestActionCraftBase;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ItemStackRequestActionType> mActionType;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestAction();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackRequestAction();

    virtual ::ItemStackRequestActionCraftBase const* getCraftAction() const;

    virtual int getFilteredStringIndex() const;

    virtual void postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette&, bool);

    virtual void _write(::BinaryStream&) const = 0;

    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ItemStackRequestAction(::ItemStackRequestActionType const);

    MCNAPI ::ItemStackRequestActionType getActionType() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string const getActionTypeName(::ItemStackRequestActionType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BidirectionalUnorderedMap<ItemStackRequestActionType, std::string> const& actionTypeMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStackRequestActionType const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackRequestActionCraftBase const* $getCraftAction() const;

    MCNAPI int $getFilteredStringIndex() const;

    MCNAPI void $postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette&, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
