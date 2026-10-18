#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/effect/MobEffectInstance.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/ResolvedItemIconInfo.h"
#include "mc/world/item/alchemy/Potion.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class OminousBottleItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 56, ::ResolvedItemIconInfo> mIconInfo;
    ::ll::UntypedStorage<8, 128>                      mMobEffect;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::ResolvedItemIconInfo> mIconInfo;
    ::ll::TypedStorage<8, 136, ::MobEffectInstance>   mMobEffect;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    OminousBottleItem();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~OminousBottleItem();

    virtual bool isDestructive(int) const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual bool isValidAuxValue(int) const;

    virtual bool uniqueAuxValues() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual std::string buildEffectDescriptionName(::ItemStackBase const&, bool) const;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::Potion::PotionType getPotionType() const;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OminousBottleItem(std::string const&, int);
    // NOLINTEND
#else // @header-generator platform
    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_AMPLIFIER();
    // NOLINTEND
#else // @header-generator platform
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               item,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int);
    // NOLINTEND
#else // @header-generator platform
    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& item, bool) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool uniqueAuxValues() const /*override*/;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const /*override*/;

    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& item, ::Level* level, ::Player* player) const /*override*/;

    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    virtual bool isDestructive(int) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isDestructive(int) const;
#else // @header-generator platform
    MCFOLD ::Potion::PotionType $getPotionType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;
#else // @header-generator platform
    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValidAuxValue(int) const;
#else // @header-generator platform
    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               item,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $uniqueAuxValues() const;
#else // @header-generator platform
    MCAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& item, bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;
#else // @header-generator platform
    MCFOLD bool $uniqueAuxValues() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack&, ::Level*, ::Player*) const;
#else // @header-generator platform
    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;
#else // @header-generator platform
    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildEffectDescriptionName(::ItemStackBase const&, bool) const;
#else // @header-generator platform
    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& item, ::Level* level, ::Player* player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;
#else // @header-generator platform
    MCAPI bool $isValidAuxValue(int auxValue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Potion::PotionType $getPotionType() const;
#else // @header-generator platform
    MCFOLD bool $isDestructive(int) const;


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
