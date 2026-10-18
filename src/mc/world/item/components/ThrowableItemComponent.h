#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
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
class Player;
class ProjectileItemComponent;
class SemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
struct ItemOnUseResult;
namespace SharedTypes::v1_20_50 { struct ThrowableItemComponent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ThrowableItemComponent : public ::NetworkedItemComponent<ThrowableItemComponent> {
#else // @header-generator platform
class ThrowableItemComponent : public ::NetworkedItemComponent<::ThrowableItemComponent> {
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ThrowableItemComponent& operator=(ThrowableItemComponent const&);
    ThrowableItemComponent(ThrowableItemComponent const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ThrowableItemComponent();
#else // @header-generator platform
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleVersionBasedInitialization(::SemVersion const&);

    virtual void _initializeComponent(::ComponentItem&);
#else // @header-generator platform
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ThrowableItemComponent(bool);
#else // @header-generator platform
    MCAPI void _doThrow(
        ::ItemStack&                     item,
        ::Player&                        player,
        ::ProjectileItemComponent const& projectileComponent,
        float                            power
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ThrowableItemComponent(::SharedTypes::v1_20_50::ThrowableItemComponent);

    MCNAPI void _doThrow(::ItemStack&, ::Player&, ::ProjectileItemComponent const&, float) const;

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
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleVersionBasedInitialization(::SemVersion const&);
#else // @header-generator platform
    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);
#endif // @header-generator platform

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
