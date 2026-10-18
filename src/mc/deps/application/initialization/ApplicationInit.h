#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/UniqueService.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock { class ApplicationInitHandler; }
namespace Bedrock { class CrashManager; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock { class DeviceIdManager; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock { class SessionInfoManager; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 16> mDeviceIdManager;
        ::ll::UntypedStorage<8, 16> mSessionInfoManager;
        ::ll::UntypedStorage<8, 16> mCrashManager;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16> mUnk82e612;
        ::ll::UntypedStorage<8, 16> mUnkffe70a;
        ::ll::UntypedStorage<8, 16> mUnk18199e;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Objects& operator=(Objects const&);
        Objects(Objects const&);
        Objects();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~Objects();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI ~Objects();
#endif
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Bedrock::ApplicationInitHandler*>                 mHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::ApplicationInit::Objects>> mObjects;
    ::ll::TypedStorage<1, 1, bool>                                               mShutDown;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkd026dd;
    ::ll::UntypedStorage<8, 8> mUnk9ce3e0;
    ::ll::UntypedStorage<1, 1> mUnkc6a30f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ApplicationInit& operator=(ApplicationInit const&);
    ApplicationInit(ApplicationInit const&);
#endif // @header-generator platform
    ApplicationInit();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ApplicationInit(::gsl::not_null<Bedrock::ApplicationInitHandler*>);

    MCNAPI void run();

    MCNAPI void shutDown();

    MCNAPI ~ApplicationInit();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void run();

    MCNAPI ~ApplicationInit();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::ApplicationInitHandler*>);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI static ::Bedrock::UniqueService<::Bedrock::DeviceIdManager>
    createAndInitDeviceIdManager(::std::unique_ptr<::Bedrock::DeviceIdManager> manager);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
