#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING : public ::ItemStackRequestAction,
                                                                public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                       mNumCrafts;
    ::ll::TypedStorage<8, 24, std::vector<NetworkItemInstanceDescriptor>> mCraftResults;
    ::ll::TypedStorage<8, 24, std::vector<ItemInstance>>                  mLoadedCraftResults;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING();

    virtual void postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette&, bool);

    virtual void _write(::BinaryStream&) const;

    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(::ItemInstance const);

    MCNAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(std::vector<ItemInstance> const&, uchar);

    MCNAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(std::vector<NetworkItemInstanceDescriptor>, uchar);

    MCNAPI void _updateCraftResults(std::vector<ItemInstance> const&);

    MCNAPI std::vector<NetworkItemInstanceDescriptor> const& getCraftResultDescriptors() const;

    MCNAPI uchar getNumCrafts() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemInstance const);

    MCNAPI void* $ctor(std::vector<ItemInstance> const&, uchar);

    MCNAPI void* $ctor(std::vector<NetworkItemInstanceDescriptor>, uchar);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette&, bool);

    MCNAPI void $_write(::BinaryStream&) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $_read(::ReadOnlyBinaryStream&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
