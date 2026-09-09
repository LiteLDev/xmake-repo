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

class OnPlayerDestroyedTrigger : public ::IBlockComponent, public ::DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mEventSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    OnPlayerDestroyedTrigger& operator=(OnPlayerDestroyedTrigger const&);
    OnPlayerDestroyedTrigger(OnPlayerDestroyedTrigger const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnPlayerDestroyedTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onEvent(::BlockEvents::BlockPlayerDestroyEvent const&) const;

    MCNAPI ::OnPlayerDestroyedTrigger& operator=(::OnPlayerDestroyedTrigger&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
