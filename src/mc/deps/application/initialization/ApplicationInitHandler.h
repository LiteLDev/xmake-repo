#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DeviceIdManager; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock {

class ApplicationInitHandler {
public:
    // ApplicationInitHandler inner types declare
    // clang-format off
    struct InstallCrashHandlerResult;
    // clang-format on

    // ApplicationInitHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct InstallCrashHandlerResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mShouldSetStdTerminateHandler;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ApplicationInitHandler();

    virtual void onFatalInitializationError(char const*) = 0;

    virtual void onMemoryHeapInit() = 0;

    virtual void onConfigureMainThread() = 0;

    virtual void onCrashDumpInit() = 0;

    virtual void onCrashDumpTerminate() = 0;

    virtual ::Bedrock::ApplicationInitHandler::InstallCrashHandlerResult onInstallCrashHandler() = 0;

    virtual void onShutdownCompleted() = 0;

    virtual std::unique_ptr<Bedrock::DeviceIdManager> createDeviceIdManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<Bedrock::DeviceIdManager> $createDeviceIdManager();
    // NOLINTEND
#else // @header-generator platform
    struct InstallCrashHandlerResult {};
#endif // @header-generator platform
};

} // namespace Bedrock
