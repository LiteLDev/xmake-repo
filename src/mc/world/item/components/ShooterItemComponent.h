#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/item/ItemDescriptor.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemUseMethod.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
class SemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
struct ItemOnUseResult;
#else // @header-generator platform
namespace Bedrock::PubSub { class Subscription; }
#endif // @header-generator platform
namespace SharedTypes::v1_20_50 { struct ShooterItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ShooterItemComponent : public ::NetworkedItemComponent<ShooterItemComponent> {
#else // @header-generator platform
class ShooterItemComponent : public ::NetworkedItemComponent<::ShooterItemComponent> {
#endif // @header-generator platform
public:
    // ShooterItemComponent inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct ShooterAmmunitionEntry;
#else // @header-generator platform
#endif // @header-generator platform
    class DrawDuration;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ShooterAmmunitionEntry;
#endif // @header-generator platform
    // clang-format on

    // ShooterItemComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class DrawDuration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mDuration;
        // NOLINTEND
    };

#endif // @header-generator platform
    struct ShooterAmmunitionEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::ItemDescriptor> itemDesc;
        ::ll::TypedStorage<1, 1, bool>              useOffhand;
        ::ll::TypedStorage<1, 1, bool>              searchInventory;
        ::ll::TypedStorage<1, 1, bool>              useInCreative;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    class DrawDuration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mDuration;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ShooterItemComponent::ShooterAmmunitionEntry>> mAmmunition;
    ::ll::TypedStorage<4, 4, ::ShooterItemComponent::DrawDuration>                       mDrawDuration;
    ::ll::TypedStorage<1, 1, bool>                                                       mScalePowerByDrawDuration;
    ::ll::TypedStorage<1, 1, bool>                                                       mChargeOnDraw;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                           mOnUseTimeDepletedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                           mOnUseSubscription;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ShooterItemComponent::ShooterAmmunitionEntry>> mAmmunition;
    ::ll::TypedStorage<4, 4, ::ShooterItemComponent::DrawDuration>                           mDrawDuration;
    ::ll::TypedStorage<1, 1, bool>                                                           mScalePowerByDrawDuration;
    ::ll::TypedStorage<1, 1, bool>                                                           mChargeOnDraw;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseTimeDepletedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseSubscription;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ShooterItemComponent& operator=(ShooterItemComponent const&);
    ShooterItemComponent(ShooterItemComponent const&);
#else // @header-generator platform
    ShooterItemComponent();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ShooterItemComponent();
#else // @header-generator platform
    virtual ~ShooterItemComponent() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool checkComponentDataForContentErrors() const;
#else // @header-generator platform
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _initializeComponent(::ComponentItem&);
#else // @header-generator platform
    virtual bool checkComponentDataForContentErrors() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ShooterItemComponent(::SharedTypes::v1_20_50::ShooterItemComponent const&);
#else // @header-generator platform
    MCAPI explicit ShooterItemComponent(::SharedTypes::v1_20_50::ShooterItemComponent const& component);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _consumeAmmunition(::Player*, ::ItemStack const&, int, bool, bool) const;
#else // @header-generator platform
    MCAPI void _consumeAmmunition(
        ::Player*          player,
        ::ItemStack const& ammunition,
        int                slotIndex,
        bool               infiniteAmmo,
        bool               fromOffhand
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _getAmmunition(::Player const*, bool, ::ItemStack&, bool&) const;
#else // @header-generator platform
    MCAPI int _getAmmunition(::Player const* player, bool, ::ItemStack& ammo, bool& fromOffhand) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _shootProjectiles(::ItemStack&, ::Player*, int) const;
#else // @header-generator platform
    MCAPI void _shootProjectiles(::ItemStack& shooterStack, ::Player* player, int durationLeft) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool releaseUsing(::ItemStack&, ::Player*, int) const;
#else // @header-generator platform
    MCAPI bool releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::ShooterItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_20_50::ShooterItemComponent const& component);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $checkComponentDataForContentErrors() const;
#else // @header-generator platform
    MCAPI void $_initializeComponent(::ComponentItem& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_initializeComponent(::ComponentItem&);
#else // @header-generator platform
    MCAPI bool $checkComponentDataForContentErrors() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
