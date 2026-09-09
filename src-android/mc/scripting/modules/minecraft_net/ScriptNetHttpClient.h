#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/scripting/modules/minecraft_net/ScriptNetModuleConfig.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class TaskGroup;
namespace ScriptModuleMinecraftNet { class INativeHttpDelegate; }
namespace ScriptModuleMinecraftNet { class ScriptHttpRequestLimitExceededError; }
namespace ScriptModuleMinecraftNet { class ScriptInternalHttpRequestError; }
namespace ScriptModuleMinecraftNet { class ScriptMalformedUriError; }
namespace ScriptModuleMinecraftNet { class ScriptNetPromiseTracker; }
namespace ScriptModuleMinecraftNet { class ScriptNetSerializationRegistry; }
namespace ScriptModuleMinecraftNet { class ScriptRequestBodyTooLargeError; }
namespace ScriptModuleMinecraftNet { class ScriptTLSOnlyError; }
namespace ScriptModuleMinecraftNet { class ScriptUriNotAllowedError; }
namespace ScriptModuleMinecraftNet { struct ScriptNetRequest; }
namespace ScriptModuleMinecraftNet { struct ScriptNetResponse; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetHttpClient {
public:
    // ScriptNetHttpClient inner types declare
    // clang-format off
    struct RequestProcessor;
    // clang-format on

    // ScriptNetHttpClient inner types define
    struct RequestProcessor
    : public ::std::enable_shared_from_this<ScriptModuleMinecraftNet::ScriptNetHttpClient::RequestProcessor> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 40, std::mutex>                                                        mLifetimeLock;
        ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                                         mTaskGroup;
        ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraftNet::ScriptNetPromiseTracker>> mNetPromiseTracker;
        ::ll::TypedStorage<8, 112, ::ScriptModuleMinecraftNet::ScriptNetModuleConfig>                mConfig;
        ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraftNet::INativeHttpDelegate>>     mDelegate;
        ::ll::UntypedStorage<8, 24> mSerializationRegistry;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequestProcessor();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptModuleMinecraftNet::ScriptNetHttpClient::RequestProcessor>> mRequestProcessor;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetHttpClient();
};

} // namespace ScriptModuleMinecraftNet
