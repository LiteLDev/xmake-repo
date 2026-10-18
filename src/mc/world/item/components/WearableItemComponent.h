#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
class CerealSchemaUpgradeSet;
#else // @header-generator platform
#endif // @header-generator platform
class ComponentItem;
#if defined(LL_PLAT_A) // @header-generator platform
class Container;
#else // @header-generator platform
#endif // @header-generator platform
class HashedString;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStack;
class Player;
#else // @header-generator platform
#endif // @header-generator platform
class SemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
struct ItemOnUseResult;
namespace SharedTypes::v1_21_90 { struct WearableItemComponent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class WearableItemComponent : public ::NetworkedItemComponent<WearableItemComponent> {
#else // @header-generator platform
class WearableItemComponent : public ::NetworkedItemComponent<::WearableItemComponent> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> mEquipmentSlot;
    ::ll::TypedStorage<4, 4, int>                                  mProtection;
    ::ll::TypedStorage<1, 1, bool>                                 mHidesPlayerLocation;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mOnUseSubscription;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    WearableItemComponent& operator=(WearableItemComponent const&);
    WearableItemComponent(WearableItemComponent const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::HashedString const& getIdentifier();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_initializeComponent(::ComponentItem&);
#else // @header-generator platform
    MCAPI void $_initializeComponent(::ComponentItem& owner);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
