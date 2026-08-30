#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/UniqueService.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ApplicationInitHandler; }
namespace Bedrock { class CrashManager; }
namespace Bedrock { class DeviceIdManager; }
namespace Bedrock { class SessionInfoManager; }
// clang-format on

namespace Bedrock {

class ApplicationInit {
public:
    // ApplicationInit inner types declare
    // clang-format off
    struct Objects;
    // clang-format on

    // ApplicationInit inner types define
    struct Objects {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mDeviceIdManager;
        ::ll::UntypedStorage<8, 16> mSessionInfoManager;
        ::ll::UntypedStorage<8, 16> mCrashManager;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Objects();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::ApplicationInitHandler*>                 mHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::ApplicationInit::Objects>> mObjects;
    ::ll::TypedStorage<1, 1, bool>                                               mShutDown;
    // NOLINTEND

public:
    // prevent constructor by default
    ApplicationInit();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ApplicationInit(::gsl::not_null<Bedrock::ApplicationInitHandler*>);

    MCNAPI void run();

    MCNAPI void shutDown();

    MCNAPI ~ApplicationInit();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::ApplicationInitHandler*>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
