#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class Item;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Mob;
class Player;
struct ResolvedItemIconInfo;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class FishingRodItem : public ::ComponentItem {
public:
    // prevent constructor by default
    FishingRodItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FishingRodItem();

    virtual bool isHandEquipped() const;

    virtual bool requiresInteract() const;

    virtual int getEnchantSlot() const;

    virtual int getEnchantValue() const;

    virtual ::ItemStack& use(::ItemStack&, ::Player&) const;

    virtual void hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;

    virtual std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    virtual bool shouldEmitInUseGameEvents() const;

    virtual ::Item& setIconInfo(std::string const&, int);

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const;

    virtual std::string getInteractText(::Player const&) const;

    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    virtual bool shouldUseJsonForRenderMatrix() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FishingRodItem(std::string const&, int, ::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isHandEquipped() const;

    MCNAPI bool $requiresInteract() const;

    MCNAPI int $getEnchantSlot() const;

    MCNAPI int $getEnchantValue() const;

    MCNAPI ::ItemStack& $use(::ItemStack&, ::Player&) const;

    MCNAPI void $hurtActor(::ItemStack&, ::Actor&, ::Mob&) const;

    MCNAPI std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI bool $shouldEmitInUseGameEvents() const;

    MCNAPI ::Item& $setIconInfo(std::string const&, int);

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCNAPI std::string $getInteractText(::Player const&) const;

    MCNAPI int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    MCNAPI bool $shouldUseJsonForRenderMatrix() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
