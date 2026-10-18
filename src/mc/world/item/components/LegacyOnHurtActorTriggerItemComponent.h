#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
#else // @header-generator platform
#endif // @header-generator platform
class ComponentItem;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
class ItemStack;
class Mob;
#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::Legacy { struct OnHurtActorTriggerItemComponent; }
// clang-format on

class LegacyOnHurtActorTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>  mOnHurtActorSubscription;
    ::ll::TypedStorage<8, 56, std::optional<DefinitionTrigger>> mOnHurtActor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnHurtActorSubscription;
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>> mOnHurtActor;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnHurtActorTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LegacyOnHurtActorTriggerItemComponent();

    virtual void _initializeComponent(::ComponentItem&);
#else // @header-generator platform
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit LegacyOnHurtActorTriggerItemComponent(::SharedTypes::Legacy::OnHurtActorTriggerItemComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& getIdentifier();
#else // @header-generator platform
    MCAPI explicit LegacyOnHurtActorTriggerItemComponent(
        ::SharedTypes::Legacy::OnHurtActorTriggerItemComponent&& componentData
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::Legacy::OnHurtActorTriggerItemComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::Legacy::OnHurtActorTriggerItemComponent&& componentData);
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
