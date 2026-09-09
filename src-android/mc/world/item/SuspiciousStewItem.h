#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class ItemStackBase;
class Level;
class MobEffectInstance;
class Player;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class SuspiciousStewItem : public ::Item {
public:
    // SuspiciousStewItem inner types define
    enum class SuspiciousStewType : uint {
        Poppy            = 0,
        Cornflower       = 1,
        Tulip            = 2,
        AzureBluet       = 3,
        LilyOfTheValley  = 4,
        Dandelion        = 5,
        BlueOrchid       = 6,
        Allium           = 7,
        OxeyeDaisy       = 8,
        WitherRose       = 9,
        Torchflower      = 10,
        OpenEyeblossom   = 11,
        ClosedEyeblossom = 12,
        COUNT            = 13,
    };

    using StewEffects = std::array<MobEffectInstance, 13>;

public:
    // prevent constructor by default
    SuspiciousStewItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SuspiciousStewItem();

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual bool uniqueAuxValues() const;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    virtual std::string buildEffectDescriptionName(::ItemStackBase const&, bool const) const;
    // clang-format on
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::array<MobEffectInstance, 13> const& _getStewEffects();

    MCNAPI static void applyStewEffect(::ItemStack const&, ::Actor&);
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

    MCNAPI bool $uniqueAuxValues() const;

    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    MCNAPI std::string $buildEffectDescriptionName(::ItemStackBase const&, bool const) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
