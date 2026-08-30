#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/LegacyTriggerItemComponent.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class ComponentItem;
class HashedString;
class ItemStack;
class SemVersion;
namespace SharedTypes::v1_20_50 { struct DiggerItemComponent; }
// clang-format on

class LegacyOnDigTriggerItemComponent : public ::LegacyTriggerItemComponent {
public:
    // LegacyOnDigTriggerItemComponent inner types declare
    // clang-format off
    struct DiggerBlockDefinitionTrigger;
    // clang-format on

    // LegacyOnDigTriggerItemComponent inner types define
    struct DiggerBlockDefinitionTrigger {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 168, ::BlockDescriptor>  filter;
        ::ll::TypedStorage<8, 48, ::DefinitionTrigger> onDig;
        // NOLINTEND

    public:
        // prevent constructor by default
        DiggerBlockDefinitionTrigger& operator=(DiggerBlockDefinitionTrigger const&);
        DiggerBlockDefinitionTrigger();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mCanUseOnDig;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnMineBlockSubscription;
    ::ll::TypedStorage<8, 56, std::optional<DefinitionTrigger>> mOnDigDefault;
    ::ll::TypedStorage<8, 24, std::vector<LegacyOnDigTriggerItemComponent::DiggerBlockDefinitionTrigger>> mOnDigTriggers;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnDigTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LegacyOnDigTriggerItemComponent();

    virtual void handleVersionBasedInitialization(::SemVersion const&);

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LegacyOnDigTriggerItemComponent(::SharedTypes::v1_20_50::DiggerItemComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::DiggerItemComponent const&);
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
