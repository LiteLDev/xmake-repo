#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
class ItemStack;
class Player;
#else // @header-generator platform
#endif // @header-generator platform
class SemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
namespace SharedTypes::v1_21_90 { struct PiercingWeaponItemComponent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class PiercingWeaponItemComponent : public ::NetworkedItemComponent<PiercingWeaponItemComponent> {
#else // @header-generator platform
class PiercingWeaponItemComponent : public ::NetworkedItemComponent<::PiercingWeaponItemComponent> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>               mReach;
    ::ll::TypedStorage<4, 12, std::optional<SharedTypes::FloatRange>> mCreativeReach;
    ::ll::TypedStorage<4, 4, float>                                   mHitboxMargin;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mOnUseAsAttackSubscription;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                   mReach;
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::FloatRange>> mCreativeReach;
    ::ll::TypedStorage<4, 4, float>                                       mHitboxMargin;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mOnUseAsAttackSubscription;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PiercingWeaponItemComponent& operator=(PiercingWeaponItemComponent const&);
    PiercingWeaponItemComponent(PiercingWeaponItemComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PiercingWeaponItemComponent();

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PiercingWeaponItemComponent(::SharedTypes::v1_21_90::PiercingWeaponItemComponent const&);
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

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_90::PiercingWeaponItemComponent const&);
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
