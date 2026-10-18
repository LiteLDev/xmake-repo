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
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
class ItemStack;
class Player;
#else // @header-generator platform
#endif // @header-generator platform
class SemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
struct ItemOnUseResult;
#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::Beta { struct UseModifiersItemComponent; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_26_30 { struct UseModifiersItemComponent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class UseModifiersItemComponent : public ::NetworkedItemComponent<UseModifiersItemComponent> {
#else // @header-generator platform
class UseModifiersItemComponent : public ::NetworkedItemComponent<::UseModifiersItemComponent> {
#endif // @header-generator platform
public:
    // UseModifiersItemComponent inner types define
    enum class StartUsing : uchar {
        IfFirst = 0,
        Always  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                   mUseDuration;
    ::ll::TypedStorage<1, 1, bool>                                    mEmitVibrations;
    ::ll::TypedStorage<8, 40, std::optional<SoundEventIdentifier>>    mStartSound;
    ::ll::TypedStorage<4, 8, std::optional<float>>                    mMovementModifier;
    ::ll::TypedStorage<1, 1, ::UseModifiersItemComponent::StartUsing> mStartUsing;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mOnUseSubscription;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                    mUseDuration;
    ::ll::TypedStorage<1, 1, bool>                                     mEmitVibrations;
    ::ll::TypedStorage<8, 48, ::std::optional<::SoundEventIdentifier>> mStartSound;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                   mMovementModifier;
    ::ll::TypedStorage<1, 1, ::UseModifiersItemComponent::StartUsing>  mStartUsing;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mOnUseSubscription;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    UseModifiersItemComponent& operator=(UseModifiersItemComponent const&);
    UseModifiersItemComponent(UseModifiersItemComponent const&);
#else // @header-generator platform
    UseModifiersItemComponent();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~UseModifiersItemComponent();

    virtual void _initializeComponent(::ComponentItem&);
#else // @header-generator platform
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit UseModifiersItemComponent(::SharedTypes::v1_26_30::UseModifiersItemComponent);

    MCNAPI explicit UseModifiersItemComponent(::SharedTypes::Beta::UseModifiersItemComponent);

    MCNAPI bool getEmitVibrations() const;

    MCNAPI float getMovementModifier() const;
#else // @header-generator platform
    MCAPI explicit UseModifiersItemComponent(::SharedTypes::Beta::UseModifiersItemComponent component);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_26_30::UseModifiersItemComponent);

    MCNAPI void* $ctor(::SharedTypes::Beta::UseModifiersItemComponent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::Beta::UseModifiersItemComponent component);
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
