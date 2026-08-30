#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace ScriptModuleMinecraftNet { class ScriptMalformedUriError; }
namespace ScriptModuleMinecraftNet { class ScriptTLSOnlyError; }
namespace ScriptModuleMinecraftNet { class ScriptUriNotAllowedError; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetModuleConfig {
public:
    // ScriptNetModuleConfig inner types define
    enum class NetType : int {
        Http      = 0,
        WebSocket = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>>>                     mAllowedUris;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                          mForceTLS;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                                          mMaxBodyBytes;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                                          mMaxConcurrentRequests;
    ::ll::TypedStorage<2, 4, std::optional<ushort>>                                        mMaxWebsocketConnections;
    ::ll::TypedStorage<4, 8, std::optional<uint>>                                          mMaxWebSocketPayloadSize;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_map<std::string, std::string>>> mSessionHeaders;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
