#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/common/SubClientId.h"
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/NetworkIdentifier.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Mob;
#else // @header-generator platform
class HashedString;
#endif // @header-generator platform
struct ActorDefinitionTriggeredEvent;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class DebugInfoComponent : public ::EventListenerDispatcher<ActorEventListener> {
#else // @header-generator platform
class DebugInfoComponent : public ::EventListenerDispatcher<::ActorEventListener> {
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 40, ::HashedString>       messageType;
        ::ll::TypedStorage<8, 176, ::NetworkIdentifier> networkIdentifier;
        ::ll::TypedStorage<1, 1, ::SubClientId>         subClientId;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 48>  mUnk31d0b2;
        ::ll::UntypedStorage<8, 176> mUnk26c4f6;
        ::ll::UntypedStorage<1, 1>   mUnk7f0325;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Listener& operator=(Listener const&);
        Listener(Listener const&);
        Listener();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<DebugInfoComponent::Listener>> mListeners;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ulong>>   mPacketHashes;
    ::ll::TypedStorage<8, 48, std::deque<std::string>>                   mSentEvents;
    ::ll::TypedStorage<1, 1, bool>                                       mEventListenerRegistered;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                            mMobUniqueId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::DebugInfoComponent::Listener>> mListeners;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, uint64>>  mPacketHashes;
    ::ll::TypedStorage<8, 40, ::std::deque<::std::string>>                   mSentEvents;
    ::ll::TypedStorage<1, 1, bool>                                           mEventListenerRegistered;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mMobUniqueId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::ActorDefinitionTriggeredEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::ActorDefinitionTriggeredEvent const&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};
