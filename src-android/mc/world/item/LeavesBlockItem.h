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
    // prevent constructor by default
    LeavesBlockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LeavesBlockItem();

    virtual int getLevelDataForAuxValue(int) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual void fixupCommon(::ItemStackBase&, ::ILevel&) const;

    virtual void fixupCommon(::ItemStackBase&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getLevelDataForAuxValue(int) const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI void $fixupCommon(::ItemStackBase&, ::ILevel&) const;

    MCNAPI void $fixupCommon(::ItemStackBase&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
