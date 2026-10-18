#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackRequestActionCraftGrindstone
: public ::ItemStackRequestActionCraft<ItemStackNetIdVariant, (ItemStackRequestActionType)16> {
#else // @header-generator platform
class ItemStackRequestActionCraftGrindstone : public ::ItemStackRequestActionCraft<::ItemStackNetIdVariant, 16> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mRepairCost;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemStackRequestActionCraftGrindstone();
#else // @header-generator platform
    virtual void _write(::BinaryStream& stream) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _write(::BinaryStream&) const;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&);

    virtual ::ItemStackNetIdVariant const& getRecipeNetId() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackRequestActionCraftGrindstone(::ItemStackNetIdVariant const&, int const);

    MCNAPI int getRepairCost() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStackNetIdVariant const&, int const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::ItemStackNetIdVariant const& getRecipeNetId() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetIdVariant const& $getRecipeNetId() const;
#else // @header-generator platform
    MCFOLD ::ItemStackNetIdVariant const& $getRecipeNetId() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
