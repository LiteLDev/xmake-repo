#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/BlockItem.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class ILevel;
class ItemDescriptor;
class ItemStackBase;
// clang-format on

class LeavesBlockItem : public ::BlockItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> m_parentBlock;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    LeavesBlockItem();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LeavesBlockItem();
#else // @header-generator platform
    virtual int getLevelDataForAuxValue(int auxValue) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getLevelDataForAuxValue(int) const;
#else // @header-generator platform
    virtual ::std::string
    buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fixupCommon(::ItemStackBase&, ::ILevel&) const;

    virtual void fixupCommon(::ItemStackBase&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void fixupCommon(::ItemStackBase& stack, ::ILevel& level) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getLevelDataForAuxValue(int) const;
#else // @header-generator platform
    MCFOLD int $getLevelDataForAuxValue(int auxValue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    MCAPI ::std::string
    $buildDescriptionId(::ItemDescriptor const& itemDescriptor, ::CompoundTag const* userData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fixupCommon(::ItemStackBase&, ::ILevel&) const;
#else // @header-generator platform
    MCAPI void $fixupCommon(::ItemStackBase& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fixupCommon(::ItemStackBase&) const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $fixupCommon(::ItemStackBase& stack, ::ILevel& level) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
