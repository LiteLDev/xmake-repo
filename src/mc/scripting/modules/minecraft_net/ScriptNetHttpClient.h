#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft_net/ScriptNetModuleConfig.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Scheduler;
#if defined(LL_PLAT_A) // @header-generator platform
class TaskGroup;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraftNet { class INativeHttpDelegate; }
namespace ScriptModuleMinecraftNet { class ScriptHttpRequestLimitExceededError; }
namespace ScriptModuleMinecraftNet { class ScriptInternalHttpRequestError; }
namespace ScriptModuleMinecraftNet { class ScriptMalformedUriError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraftNet { class ScriptNetPromiseTracker; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraftNet { class ScriptNetSerializationRegistry; }
namespace ScriptModuleMinecraftNet { class ScriptRequestBodyTooLargeError; }
namespace ScriptModuleMinecraftNet { class ScriptTLSOnlyError; }
namespace ScriptModuleMinecraftNet { class ScriptUriNotAllowedError; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraftNet { struct ScriptNetModuleConfig; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    : public ::std::enable_shared_from_this<ScriptModuleMinecraftNet::ScriptNetHttpClient::RequestProcessor> {
#else // @header-generator platform
    : public ::std::enable_shared_from_this<::ScriptModuleMinecraftNet::ScriptNetHttpClient::RequestProcessor> {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 40, std::mutex>                                                        mLifetimeLock;
        ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                                         mTaskGroup;
        ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraftNet::ScriptNetPromiseTracker>> mNetPromiseTracker;
        ::ll::TypedStorage<8, 112, ::ScriptModuleMinecraftNet::ScriptNetModuleConfig>                mConfig;
        ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptModuleMinecraftNet::INativeHttpDelegate>>     mDelegate;
        ::ll::UntypedStorage<8, 24> mSerializationRegistry;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 80>  mUnk6ca84e;
        ::ll::UntypedStorage<8, 8>   mUnk824904;
        ::ll::UntypedStorage<8, 8>   mUnk3ae71d;
        ::ll::UntypedStorage<8, 136> mUnk701c9f;
        ::ll::UntypedStorage<8, 8>   mUnk6b00db;
        ::ll::UntypedStorage<8, 24>  mUnkb286a1;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        RequestProcessor& operator=(RequestProcessor const&);
        RequestProcessor(RequestProcessor const&);
#endif // @header-generator platform
        RequestProcessor();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void cleanUp();

        MCNAPI ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetResponse>,
            ::Scripting::Error,
            ::ScriptModuleMinecraftNet::ScriptRequestBodyTooLargeError,
            ::ScriptModuleMinecraftNet::ScriptInternalHttpRequestError,
            ::ScriptModuleMinecraftNet::ScriptHttpRequestLimitExceededError,
            ::ScriptModuleMinecraftNet::ScriptTLSOnlyError,
            ::ScriptModuleMinecraftNet::ScriptMalformedUriError,
            ::ScriptModuleMinecraftNet::ScriptUriNotAllowedError>
        process(
            ::Scripting::WeakLifetimeScope const&,
            ::Scripting::ScriptObjectFactory&                                                         factory,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptNetRequest> const& requestHandle
        );
        // NOLINTEND
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptModuleMinecraftNet::ScriptNetHttpClient::RequestProcessor>> mRequestProcessor;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk5f1385;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptNetHttpClient& operator=(ScriptNetHttpClient const&);
    ScriptNetHttpClient(ScriptNetHttpClient const&);
#endif // @header-generator platform
    ScriptNetHttpClient();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptNetHttpClient(
        ::std::string const&                                                                   descriptorString,
        ::Bedrock::NonOwnerPointer<::Scheduler>                                                serverScheduler,
        ::ScriptModuleMinecraftNet::ScriptNetModuleConfig                                      config,
        ::std::unique_ptr<::ScriptModuleMinecraftNet::INativeHttpDelegate>                     delegate,
        ::Bedrock::NonOwnerPointer<::ScriptModuleMinecraftNet::ScriptNetSerializationRegistry> serializationRegistry
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string const&                                                                   descriptorString,
        ::Bedrock::NonOwnerPointer<::Scheduler>                                                serverScheduler,
        ::ScriptModuleMinecraftNet::ScriptNetModuleConfig                                      config,
        ::std::unique_ptr<::ScriptModuleMinecraftNet::INativeHttpDelegate>                     delegate,
        ::Bedrock::NonOwnerPointer<::ScriptModuleMinecraftNet::ScriptNetSerializationRegistry> serializationRegistry
    );
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftNet
