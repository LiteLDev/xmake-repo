#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/BlockItem.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemStackBase;
class Level;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class ShulkerBoxBlockItem : public ::BlockItem {
public:
    // prevent constructor by default
    ShulkerBoxBlockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ShulkerBoxBlockItem();

    virtual int getLevelDataForAuxValue(int) const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual std::string buildEffectDescriptionName(::ItemStackBase const&, bool) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShulkerBoxBlockItem(std::string const&, int);

    MCNAPI std::string _buildContainedItemList(::CompoundTag const*) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
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

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI std::string $buildEffectDescriptionName(::ItemStackBase const&, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
