#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/LegacyTriggerItemComponent.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
class ItemStack;
class Player;
struct ItemOnUseResult;
namespace SharedTypes::Legacy { struct OnUseTriggerItemComponent; }
// clang-format on

class LegacyOnUseTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>  mOnUseSubscription;
    ::ll::TypedStorage<8, 56, std::optional<DefinitionTrigger>> mOnUseTrigger;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnUseTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyOnUseTriggerItemComponent();

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LegacyOnUseTriggerItemComponent(::SharedTypes::Legacy::OnUseTriggerItemComponent&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::Legacy::OnUseTriggerItemComponent&&);
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
