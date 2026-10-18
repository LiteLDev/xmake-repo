#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class StartupStatistics {
public:
    // StartupStatistics inner types declare
    // clang-format off
    struct StartupData;
    // clang-format on

    // StartupStatistics inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct StartupData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>                                           mMaxMemUsedInBytes;
        ::ll::TypedStorage<8, 8, std::chrono::duration<double, std::ratio<1, 1>>> mBoot;
        ::ll::TypedStorage<8, 8, std::chrono::duration<double, std::ratio<1, 1>>> mLoadingBar;
        ::ll::TypedStorage<8, 8, std::chrono::duration<double, std::ratio<1, 1>>> mPlayButton;
        // NOLINTEND
    };

    using duration = std::chrono::duration<double, std::ratio<1, 1>>;

    using time_point =
        std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mAppPlatform;
    ::ll::TypedStorage<8, 32, ::StartupStatistics::StartupData> mStartupData;
    ::ll::UntypedStorage<8, 88> mStartupDataPublisher;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mPlayButtonWaitStart;
    ::ll::TypedStorage<1, 1, bool> mFinished;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    StartupStatistics();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StartupStatistics(::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>> const&);

    MCNAPI ::Bedrock::PubSub::Connector<void(const StartupStatistics::StartupData&)>& getStartupDataCallback();

    MCNAPI void notifyLoadingBarDone();

    MCNAPI void notifyPlayButtonReady();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>> const&);
    // NOLINTEND
#else // @header-generator platform
    struct StartupData {};
#endif // @header-generator platform
};
