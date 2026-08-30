#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class Level;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class SmithingTemplateItem : public ::Item {
public:
    // SmithingTemplateItem inner types define
    enum class UpgradeType : int {
        NetheriteUpgrade = 0,
        ArmorTrim        = 1,
        _count           = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mAppliesToText;
    ::ll::TypedStorage<8, 24, std::string const> mIngredientsText;
    // NOLINTEND

public:
    // prevent constructor by default
    SmithingTemplateItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SmithingTemplateItem();

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SmithingTemplateItem(std::string const&, int, ::SmithingTemplateItem::UpgradeType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::SmithingTemplateItem::UpgradeType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
