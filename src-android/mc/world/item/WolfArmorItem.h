#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/item/components/ComponentItem.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
struct DurabilityThreshold;
struct ResolvedItemIconInfo;
namespace Bedrock::Safety { class RedactableString; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class WolfArmorItem : public ::ComponentItem {
public:
    // prevent constructor by default
    WolfArmorItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WolfArmorItem();

    virtual bool isBodyArmor() const;

    virtual void appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    virtual int getArmorValue() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getBreakSound() const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;
    // clang-format on
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::vector<SharedTypes::Legacy::ActorDamageCause> const& ABSORBABLE_DAMAGE_CAUSES();

    MCNAPI static std::vector<DurabilityThreshold> const& DURABILITY_THRESHOLDS();

    MCNAPI static int const& MAX_DAMAGE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isBodyArmor() const;

    MCNAPI void
    $appendFormattedHovertext(::ItemStackBase const&, ::Level&, ::Bedrock::Safety::RedactableString&, bool const) const;

    MCNAPI bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    MCNAPI int $getArmorValue() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getBreakSound() const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCNAPI int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
