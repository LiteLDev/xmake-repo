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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ItemStackRequestAction();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemStackRequestAction();
#else // @header-generator platform
    virtual ~ItemStackRequestAction() = default;
#endif // @header-generator platform

    virtual ::ItemStackRequestActionCraftBase const* getCraftAction() const;

    virtual int getFilteredStringIndex() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette&, bool);
#else // @header-generator platform
    virtual void postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette& blockPalette, bool isClientSide);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _write(::BinaryStream&) const = 0;
#else // @header-generator platform
    virtual void _write(::BinaryStream& stream) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ItemStackRequestAction(::ItemStackRequestActionType const);

    MCNAPI ::ItemStackRequestActionType getActionType() const;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const getActionTypeName(::ItemStackRequestActionType);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string const getActionTypeName(::ItemStackRequestActionType type);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::BidirectionalUnorderedMap<::ItemStackRequestActionType, ::std::string> const& actionTypeMap();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackRequestActionCraftBase const* $getCraftAction() const;
#else // @header-generator platform
    MCFOLD ::ItemStackRequestActionCraftBase const* $getCraftAction() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getFilteredStringIndex() const;
#else // @header-generator platform
    MCFOLD int $getFilteredStringIndex() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette&, bool);
#else // @header-generator platform
    MCFOLD void $postLoadItems_DEPRECATEDASKTYLAING(::BlockPalette& blockPalette, bool isClientSide);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
