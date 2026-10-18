#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class DebugInfoListenerHandle;
class PacketSender;
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class DebugInfoMessageDispatcher {
public:
    // DebugInfoMessageDispatcher inner types declare
    // clang-format off
    struct Listener;
    // clang-format on

    // DebugInfoMessageDispatcher inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Listener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>             listenerId;
        ::ll::TypedStorage<8, 40, ::HashedString> messageType;
        ::ll::UntypedStorage<8, 16>               actorId;
        ::ll::UntypedStorage<8, 48>               callback;
        // NOLINTEND
    };

    using ListenerCallback = std::function<void(const Json::Value&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<DebugInfoMessageDispatcher::Listener>> mListeners;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                    mPacketSender;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugInfoMessageDispatcher& operator=(DebugInfoMessageDispatcher const&);
    DebugInfoMessageDispatcher(DebugInfoMessageDispatcher const&);
    DebugInfoMessageDispatcher();
#else // @header-generator platform
    struct Listener {};
#endif // @header-generator platform
};
