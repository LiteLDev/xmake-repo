#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        COUNT            = 13,
#else // @header-generator platform
        Count            = 13,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using StewEffects = std::array<MobEffectInstance, 13>;

public:
    // prevent constructor by default
    SuspiciousStewItem();
#else // @header-generator platform
    using StewEffects = ::std::array<::MobEffectInstance, 13>;
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~SuspiciousStewItem();
#else // @header-generator platform
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
#else // @header-generator platform
    virtual bool uniqueAuxValues() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool uniqueAuxValues() const;
#else // @header-generator platform
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    virtual std::string buildEffectDescriptionName(::ItemStackBase const&, bool const) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& stack, bool const playerIsCreative) const
        /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::array<MobEffectInstance, 13> const& _getStewEffects();

    MCNAPI static void applyStewEffect(::ItemStack const&, ::Actor&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::array<::MobEffectInstance, 13> const& _getStewEffects();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
#else // @header-generator platform
    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $uniqueAuxValues() const;
#else // @header-generator platform
    MCFOLD bool $uniqueAuxValues() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;
#else // @header-generator platform
    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildEffectDescriptionName(::ItemStackBase const&, bool const) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack, bool const playerIsCreative) const;
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
