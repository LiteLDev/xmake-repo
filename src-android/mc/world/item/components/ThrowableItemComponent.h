#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
class ItemStack;
class Player;
class ProjectileItemComponent;
class SemVersion;
class Vec3;
struct ItemOnUseResult;
namespace SharedTypes::v1_20_50 { struct ThrowableItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ThrowableItemComponent : public ::NetworkedItemComponent<ThrowableItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mDoSwing;
    ::ll::TypedStorage<4, 4, float>                            mMinDrawDuration;
    ::ll::TypedStorage<4, 4, float>                            mDrawDuration;
    ::ll::TypedStorage<4, 4, float>                            mLaunchPowerScale;
    ::ll::TypedStorage<4, 4, float>                            mMaxLaunchPower;
    ::ll::TypedStorage<1, 1, bool>                             mScalePowerByDrawDuration;
    ::ll::TypedStorage<1, 1, bool>                             mTriggerActorUseItemEvent;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrowableItemComponent& operator=(ThrowableItemComponent const&);
    ThrowableItemComponent(ThrowableItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ThrowableItemComponent();

    virtual void handleVersionBasedInitialization(::SemVersion const&);

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ThrowableItemComponent(bool);

    MCNAPI explicit ThrowableItemComponent(::SharedTypes::v1_20_50::ThrowableItemComponent);

    MCNAPI void _doThrow(::ItemStack&, ::Player&, ::ProjectileItemComponent const&, float) const;

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
    MCNAPI void* $ctor(bool);

    MCNAPI void* $ctor(::SharedTypes::v1_20_50::ThrowableItemComponent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $handleVersionBasedInitialization(::SemVersion const&);

    MCNAPI void $_initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
