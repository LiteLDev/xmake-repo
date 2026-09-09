#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/DisplayOrientation.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
class IMinecraftGame;
class PropertyBag;
class PushNotificationMessage;
namespace Bedrock { class ActivationArguments; }
namespace Bedrock { struct PlatformBuildInfo; }
namespace Bedrock { struct PlatformRuntimeInfo; }
// clang-format on

namespace Bedrock {

class CommonPlatform {
public:
    // CommonPlatform inner types define
    using MCGameFactory = ::brstd::move_only_function<std::unique_ptr<IMinecraftGame>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PlatformRuntimeInfo>> mPlatformRuntimeInfo;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PlatformBuildInfo>>   mPlatformBuildInfo;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IMinecraftGame>>               mApp;
    ::ll::UntypedStorage<8, 64>                                             mCreateGame;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                             mbQueueRenderParameterSignal;
    ::ll::UntypedStorage<1, 15>                                             mHasInitialized;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonPlatform();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~CommonPlatform() = default;

    virtual bool updatePlatformInfo() = 0;

    virtual bool updatePlatformGraphicsInfo() = 0;

    virtual void issueShutdown();

    virtual void issueSuspend();

    virtual void issueResume();

    virtual void issueBack();

    virtual void issueLowMemory();

    virtual void issueFocusLost();

    virtual void issueFocusGained();

    virtual void issueInputPaneVisible();

    virtual void issueInputPaneHidden();

    virtual void issueSuspendWarning();

    virtual void issueVisibilityChange(bool);

    virtual void issueWindowSizeChange(int, int);

    virtual void issueDPIChange(float);

    virtual void issueOrientationChange(::DisplayOrientation const&);

    virtual void feedButtonPress(int const&);

    virtual void feedKeyPress(char const);

    virtual void setTextboxText(std::string const&);

    virtual void setStorageDirectory(::FileStorageDirectory, bool, ::PropertyBag const&, std::function<void (bool)>);

    virtual ::FileStorageDirectory setInitialStorageDirectory(::FileStorageDirectory);

    virtual ::FileStorageDirectory getStorageDirectory() const;

    virtual bool _preAppCreation(::Bedrock::ActivationArguments const&) = 0;

    virtual bool _postAppCreation(::Bedrock::ActivationArguments const&) = 0;

    virtual void _processActivationArguments(::Bedrock::ActivationArguments const&) = 0;

    virtual bool _update(bool) = 0;

    virtual bool _isShuttingDown() = 0;

    virtual bool _isShutdown() = 0;

    virtual void pushNotificationReceived_Shim(::PushNotificationMessage const&) = 0;

    virtual void notifyUriListeners_Shim(::ActivationUri const&) = 0;

    virtual std::string getDeviceId_Shim() const = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock
