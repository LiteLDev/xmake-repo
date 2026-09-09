#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { class ScriptHttpRequestLimitExceededError; }
namespace ScriptModuleMinecraftNet { class ScriptInternalHttpRequestError; }
namespace ScriptModuleMinecraftNet { class ScriptMalformedUriError; }
namespace ScriptModuleMinecraftNet { class ScriptNetSerializationRegistry; }
namespace ScriptModuleMinecraftNet { class ScriptRequestBodyTooLargeError; }
namespace ScriptModuleMinecraftNet { class ScriptTLSOnlyError; }
namespace ScriptModuleMinecraftNet { class ScriptUriNotAllowedError; }
namespace ScriptModuleMinecraftNet { struct ScriptNetHeader; }
namespace ScriptModuleMinecraftNet { struct ScriptNetRequest; }
namespace ScriptModuleMinecraftNet { struct ScriptNetResponse; }
namespace Scripting { struct BaseError; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNetPromiseTracker {
public:
    // ScriptNetPromiseTracker inner types declare
    // clang-format off
    struct InProgressRequest;
    // clang-format on

    // ScriptNetPromiseTracker inner types define
    struct InProgressRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mPromise;
        ::ll::UntypedStorage<8, 32> mRequestHandle;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> mLastRequestId;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, ScriptModuleMinecraftNet::ScriptNetPromiseTracker::InProgressRequest>> mRequests;
    ::ll::UntypedStorage<8, 24> mSerializationRegistry;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetPromiseTracker();
};

} // namespace ScriptModuleMinecraftNet
