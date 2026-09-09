#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
class ItemStack;
class Level;
class Player;
class SemVersion;
struct ItemOnUseResult;
namespace SharedTypes::v1_20_50 { struct ShooterItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ShooterItemComponent : public ::NetworkedItemComponent<ShooterItemComponent> {
public:
    // ShooterItemComponent inner types declare
    // clang-format off
    struct ShooterAmmunitionEntry;
    class DrawDuration;
    // clang-format on

    // ShooterItemComponent inner types define
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

    class DrawDuration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mDuration;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ShooterItemComponent::ShooterAmmunitionEntry>> mAmmunition;
    ::ll::TypedStorage<4, 4, ::ShooterItemComponent::DrawDuration>                       mDrawDuration;
    ::ll::TypedStorage<1, 1, bool>                                                       mScalePowerByDrawDuration;
    ::ll::TypedStorage<1, 1, bool>                                                       mChargeOnDraw;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                           mOnUseTimeDepletedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                           mOnUseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ShooterItemComponent& operator=(ShooterItemComponent const&);
    ShooterItemComponent(ShooterItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShooterItemComponent();

    virtual bool checkComponentDataForContentErrors() const;

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ShooterItemComponent(::SharedTypes::v1_20_50::ShooterItemComponent const&);

    MCNAPI void _consumeAmmunition(::Player*, ::ItemStack const&, int, bool, bool) const;

    MCNAPI int _getAmmunition(::Player const*, bool, ::ItemStack&, bool&) const;

    MCNAPI void _shootProjectiles(::ItemStack&, ::Player*, int) const;

    MCNAPI bool releaseUsing(::ItemStack&, ::Player*, int) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::ShooterItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $checkComponentDataForContentErrors() const;

    MCNAPI void $_initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
