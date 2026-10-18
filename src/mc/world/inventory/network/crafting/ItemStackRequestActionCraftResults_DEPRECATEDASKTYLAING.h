#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemInstance;
class NetworkItemInstanceDescriptor;
#endif // @header-generator platform
class ReadOnlyBinaryStream;
// clang-format on

class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING : public ::ItemStackRequestAction,
                                                                public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>                                       mNumCrafts;
    ::ll::TypedStorage<8, 24, std::vector<NetworkItemInstanceDescriptor>> mCraftResults;
    ::ll::TypedStorage<8, 24, std::vector<ItemInstance>>                  mLoadedCraftResults;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, uchar>                                           mNumCrafts;
    ::ll::TypedStorage<8, 24, ::std::vector<::NetworkItemInstanceDescriptor>> mCraftResults;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>>                  mLoadedCraftResults;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING();
#else // @header-generator platform
    virtual void postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette& blockPalette, bool isClientSide) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette&, bool);
#else // @header-generator platform
    virtual void _write(::BinaryStream& stream) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _write(::BinaryStream&) const;

    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(::ItemInstance const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(::ItemInstance craftResult);

    MCAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(
        ::std::vector<::ItemInstance> const& craftResults,
        uchar                                numCrafts
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(std::vector<ItemInstance> const&, uchar);
#else // @header-generator platform
    MCAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(
        ::std::vector<::NetworkItemInstanceDescriptor> craftResults,
        uchar                                          numCrafts
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING(std::vector<NetworkItemInstanceDescriptor>, uchar);

    MCNAPI void _updateCraftResults(std::vector<ItemInstance> const&);

    MCNAPI std::vector<NetworkItemInstanceDescriptor> const& getCraftResultDescriptors() const;

    MCNAPI uchar getNumCrafts() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _updateCraftResults(::std::vector<::ItemInstance> const& craftResults);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemInstance const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ItemInstance craftResult);

    MCAPI void* $ctor(::std::vector<::ItemInstance> const& craftResults, uchar numCrafts);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<ItemInstance> const&, uchar);

    MCNAPI void* $ctor(std::vector<NetworkItemInstanceDescriptor>, uchar);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::vector<::NetworkItemInstanceDescriptor> craftResults, uchar numCrafts);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette&, bool);
#else // @header-generator platform
    MCAPI void $postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette& blockPalette, bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_write(::BinaryStream&) const;
#else // @header-generator platform
    MCAPI void $_write(::BinaryStream& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $_read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForItemStackRequestAction();
#endif // @header-generator platform
    // NOLINTEND
};
