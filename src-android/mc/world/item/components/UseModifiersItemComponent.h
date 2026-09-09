#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/sound/SoundEventIdentifier.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
class ItemStack;
class Player;
class SemVersion;
struct ItemOnUseResult;
namespace SharedTypes::Beta { struct UseModifiersItemComponent; }
namespace SharedTypes::v1_26_30 { struct UseModifiersItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class UseModifiersItemComponent : public ::NetworkedItemComponent<UseModifiersItemComponent> {
public:
    // UseModifiersItemComponent inner types define
    enum class StartUsing : uchar {
        IfFirst = 0,
        Always  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                   mUseDuration;
    ::ll::TypedStorage<1, 1, bool>                                    mEmitVibrations;
    ::ll::TypedStorage<8, 40, std::optional<SoundEventIdentifier>>    mStartSound;
    ::ll::TypedStorage<4, 8, std::optional<float>>                    mMovementModifier;
    ::ll::TypedStorage<1, 1, ::UseModifiersItemComponent::StartUsing> mStartUsing;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mOnUseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    UseModifiersItemComponent& operator=(UseModifiersItemComponent const&);
    UseModifiersItemComponent(UseModifiersItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UseModifiersItemComponent();

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UseModifiersItemComponent(::SharedTypes::v1_26_30::UseModifiersItemComponent);

    MCNAPI explicit UseModifiersItemComponent(::SharedTypes::Beta::UseModifiersItemComponent);

    MCNAPI bool getEmitVibrations() const;

    MCNAPI float getMovementModifier() const;
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
    MCNAPI void* $ctor(::SharedTypes::v1_26_30::UseModifiersItemComponent);

    MCNAPI void* $ctor(::SharedTypes::Beta::UseModifiersItemComponent);
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
