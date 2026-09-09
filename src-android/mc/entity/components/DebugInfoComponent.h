#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct ActorDefinitionTriggeredEvent;
// clang-format on

class DebugInfoComponent : public ::EventListenerDispatcher<ActorEventListener> {
public:
    // DebugInfoComponent inner types declare
    // clang-format off
    struct Listener;
    // clang-format on

    // DebugInfoComponent inner types define
    struct Listener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString>       messageType;
        ::ll::TypedStorage<8, 176, ::NetworkIdentifier> networkIdentifier;
        ::ll::TypedStorage<1, 1, ::SubClientId>         subClientId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<DebugInfoComponent::Listener>> mListeners;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ulong>>   mPacketHashes;
    ::ll::TypedStorage<8, 48, std::deque<std::string>>                   mSentEvents;
    ::ll::TypedStorage<1, 1, bool>                                       mEventListenerRegistered;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                            mMobUniqueId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onEvent(::ActorDefinitionTriggeredEvent const&);
    // NOLINTEND
};
