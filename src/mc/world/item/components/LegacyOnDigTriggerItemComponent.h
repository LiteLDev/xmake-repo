#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/LegacyTriggerItemComponent.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class ComponentItem;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 168, ::BlockDescriptor>  filter;
        ::ll::TypedStorage<8, 48, ::DefinitionTrigger> onDig;
#else // @header-generator platform
        ::ll::TypedStorage<8, 176, ::BlockDescriptor>  filter;
        ::ll::TypedStorage<8, 56, ::DefinitionTrigger> onDig;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        DiggerBlockDefinitionTrigger& operator=(DiggerBlockDefinitionTrigger const&);
        DiggerBlockDefinitionTrigger();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mCanUseOnDig;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnMineBlockSubscription;
    ::ll::TypedStorage<8, 56, std::optional<DefinitionTrigger>> mOnDigDefault;
    ::ll::TypedStorage<8, 24, std::vector<LegacyOnDigTriggerItemComponent::DiggerBlockDefinitionTrigger>> mOnDigTriggers;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                  mCanUseOnDig;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mOnMineBlockSubscription;
    ::ll::TypedStorage<8, 64, ::std::optional<::DefinitionTrigger>> mOnDigDefault;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyOnDigTriggerItemComponent::DiggerBlockDefinitionTrigger>>
        mOnDigTriggers;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyOnDigTriggerItemComponent();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LegacyOnDigTriggerItemComponent();
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
    MCNAPI explicit LegacyOnDigTriggerItemComponent(::SharedTypes::v1_20_50::DiggerItemComponent const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& getIdentifier();
#else // @header-generator platform
    MCAPI explicit LegacyOnDigTriggerItemComponent(
        ::SharedTypes::v1_20_50::DiggerItemComponent const& diggerComponentData
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::DiggerItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_20_50::DiggerItemComponent const& diggerComponentData);
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
