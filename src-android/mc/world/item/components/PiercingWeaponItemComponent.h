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
class HashedString;
class ItemStack;
class Player;
class SemVersion;
class Vec3;
namespace SharedTypes::v1_21_90 { struct PiercingWeaponItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PiercingWeaponItemComponent : public ::NetworkedItemComponent<PiercingWeaponItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>               mReach;
    ::ll::TypedStorage<4, 12, std::optional<SharedTypes::FloatRange>> mCreativeReach;
    ::ll::TypedStorage<4, 4, float>                                   mHitboxMargin;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mOnUseAsAttackSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    PiercingWeaponItemComponent& operator=(PiercingWeaponItemComponent const&);
    PiercingWeaponItemComponent(PiercingWeaponItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PiercingWeaponItemComponent();

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PiercingWeaponItemComponent(::SharedTypes::v1_21_90::PiercingWeaponItemComponent const&);
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
    MCNAPI void* $ctor(::SharedTypes::v1_21_90::PiercingWeaponItemComponent const&);
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
