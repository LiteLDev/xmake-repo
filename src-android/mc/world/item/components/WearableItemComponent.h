#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CerealSchemaUpgradeSet;
class ComponentItem;
class Container;
class HashedString;
class ItemStack;
class Player;
class SemVersion;
class Vec3;
struct ItemOnUseResult;
namespace SharedTypes::v1_21_90 { struct WearableItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class WearableItemComponent : public ::NetworkedItemComponent<WearableItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mEquipmentSlot;
    ::ll::TypedStorage<4, 4, int>                                  mProtection;
    ::ll::TypedStorage<1, 1, bool>                                 mHidesPlayerLocation;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mOnUseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    WearableItemComponent& operator=(WearableItemComponent const&);
    WearableItemComponent(WearableItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WearableItemComponent();

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WearableItemComponent(::SharedTypes::v1_21_90::WearableItemComponent);

    MCNAPI bool dispense(::BlockSource&, ::Container&, int, ::Vec3 const&) const;

    MCNAPI int getArmorValue() const;

    MCNAPI ::SharedTypes::Legacy::ActorLocation getEquipLocation() const;

    MCNAPI ::SharedTypes::Legacy::EquipmentSlot getSlot() const;

    MCNAPI bool hidesPlayerLocation() const;

    MCNAPI bool isHumanoidArmor() const;

    MCNAPI bool shouldForceAllowOffHand() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();

    MCNAPI static void registerVersionUpgrades(::CerealSchemaUpgradeSet&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_90::WearableItemComponent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
