#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/game/StartupStatistics.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
// clang-format on

class StartupStatisticsWriteCsv {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                mAppPlatform;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    StartupStatisticsWriteCsv();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StartupStatisticsWriteCsv(
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>> const&,
        ::Bedrock::PubSub::Connector<void(const StartupStatistics::StartupData&)>&
    );

    MCNAPI void _write(::StartupStatistics::StartupData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<AppPlatform>> const&,
        ::Bedrock::PubSub::Connector<void(const StartupStatistics::StartupData&)>&
    );
    // NOLINTEND
};
#else // @header-generator platform
class StartupStatisticsWriteCsv {};
#endif // @header-generator platform
