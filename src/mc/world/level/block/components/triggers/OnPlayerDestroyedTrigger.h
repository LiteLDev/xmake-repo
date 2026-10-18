#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/level/block/components/IBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerDestroyEvent; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class OnPlayerDestroyedTrigger : public ::IBlockComponent, public ::DefinitionTrigger {
#else // @header-generator platform
class OnPlayerDestroyedTrigger : public ::DefinitionTrigger, public ::IBlockComponent {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mEventSubscription;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    OnPlayerDestroyedTrigger& operator=(OnPlayerDestroyedTrigger const&);
    OnPlayerDestroyedTrigger(OnPlayerDestroyedTrigger const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnPlayerDestroyedTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void onEvent(::BlockEvents::BlockPlayerDestroyEvent const&) const;

    MCNAPI ::OnPlayerDestroyedTrigger& operator=(::OnPlayerDestroyedTrigger&&);
#else // @header-generator platform
    MCAPI void onEvent(::BlockEvents::BlockPlayerDestroyEvent const& eventData) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
