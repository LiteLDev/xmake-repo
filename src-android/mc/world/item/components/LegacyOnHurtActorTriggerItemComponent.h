#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ComponentItem;
class HashedString;
class ItemStack;
class Mob;
namespace SharedTypes::Legacy { struct OnHurtActorTriggerItemComponent; }
// clang-format on

class LegacyOnHurtActorTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>  mOnHurtActorSubscription;
    ::ll::TypedStorage<8, 56, std::optional<DefinitionTrigger>> mOnHurtActor;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnHurtActorTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyOnHurtActorTriggerItemComponent();

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LegacyOnHurtActorTriggerItemComponent(::SharedTypes::Legacy::OnHurtActorTriggerItemComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::Legacy::OnHurtActorTriggerItemComponent&&);
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
