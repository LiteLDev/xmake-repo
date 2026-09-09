#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionEvent.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class DefinitionTrigger;
class HashedString;
class ILegacyItemTriggerHandler;
class ItemStackBase;
class RenderParams;
struct ItemOnUseResult;
struct LegacyEventItemComponentData;
// clang-format on

class LegacyEventItemComponent : public ::ItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Bedrock::PubSub::Subscription>>       mTriggerSubscriptions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, DefinitionEvent>> mEventHandlers;
    ::ll::TypedStorage<8, 8, ::ILegacyItemTriggerHandler*>                      mTriggerHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyEventItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyEventItemComponent();

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LegacyEventItemComponent(::LegacyEventItemComponentData&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyEventItemComponentData&&);
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
