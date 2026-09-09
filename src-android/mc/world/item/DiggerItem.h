#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class HashedString;
class ItemStackBase;
class Level;
class RenderParams;
struct ItemTier;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class DiggerItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemTier const&>     mTier;
    ::ll::TypedStorage<8, 8, ::HashedString const&> mBlockDestructionTag;
    ::ll::TypedStorage<4, 4, int>                   mAttackDamage;
    // NOLINTEND

public:
    // prevent constructor by default
    DiggerItem& operator=(DiggerItem const&);
    DiggerItem(DiggerItem const&);
    DiggerItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DiggerItem();

    virtual void executeEvent(::ItemStackBase&, std::string const&, ::RenderParams&) const;

    virtual bool canDestroySpecial(::Block const&) const;

    virtual int getAttackDamage() const;

    virtual bool isHandEquipped() const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    virtual int getEnchantValue() const;

    virtual float getDestroySpeed(::ItemStackBase const&, ::Block const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DiggerItem(std::string const&, short, int, ::ItemTier const&, ::HashedString const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, short, int, ::ItemTier const&, ::HashedString const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $executeEvent(::ItemStackBase&, std::string const&, ::RenderParams&) const;

    MCNAPI bool $canDestroySpecial(::Block const&) const;

    MCNAPI int $getAttackDamage() const;

    MCNAPI bool $isHandEquipped() const;

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    MCNAPI int $getEnchantValue() const;

    MCNAPI float $getDestroySpeed(::ItemStackBase const&, ::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
