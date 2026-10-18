#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/identity/IdentityEventNotifier.h"
#include "mc/client/social/XsapiHandle.h"
#include "mc/identity/XUID.h"

// auto generated forward declare list
// clang-format off
struct XalUser;
struct XblContext;
struct XblRequestedStatistics;
namespace Social { class XblApiWrapper; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class XboxLiveUserStatistics : public ::std::enable_shared_from_this<Social::XboxLiveUserStatistics> {
#else // @header-generator platform
class XboxLiveUserStatistics {
#endif // @header-generator platform
public:
    // XboxLiveUserStatistics inner types declare
    // clang-format off
    struct Statistic;
    // clang-format on

    // XboxLiveUserStatistics inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Statistic {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> name;
        ::ll::TypedStorage<8, 24, std::string> label;
        ::ll::TypedStorage<8, 8, double>       valueRaw;
        ::ll::TypedStorage<8, 24, std::string> valueDisplay;
        ::ll::TypedStorage<8, 24, std::string> valueNarration;
        // NOLINTEND

    public:
        // prevent constructor by default
        Statistic& operator=(Statistic const&);
        Statistic();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Statistic(::Social::XboxLiveUserStatistics::Statistic const&);

        MCNAPI ~Statistic();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Social::XboxLiveUserStatistics::Statistic const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using StatisticsData = std::unordered_map<std::string, Social::XboxLiveUserStatistics::Statistic>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 48> mStatisticLabelMap;
    ::ll::UntypedStorage<8, 112> mCurrentUser;
    ::ll::UntypedStorage<8, 112> mContext;
    ::ll::TypedStorage<8, 8, ::Social::XUID> mXuid;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mRefreshDataTime;
    ::ll::UntypedStorage<8, 176> mStatisticsUpdateNotifier;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Social::XboxLiveUserStatistics::Statistic>> mData;
    ::ll::UntypedStorage<8, 24> mRequestedStats;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::XblApiWrapper>>> mXblApi;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int addStatisticsUpdateListener(std::function<void()>);

    MCNAPI std::unordered_map<std::string, Social::XboxLiveUserStatistics::Statistic> const& getStatisticsData();

    MCNAPI void removeStatisticsUpdateListener(int);

    MCNAPI void tick();

    MCNAPI void updateStatisticsData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::array<const char*, 4>& XBL_REQUESTED_STATISTICS_NAMES();

    MCNAPI static char const* const& XBL_STATISTIC_NAME_BLOCKS_BROKEN();

    MCNAPI static char const* const& XBL_STATISTIC_NAME_DISTANCE_TRAVELLED();

    MCNAPI static char const* const& XBL_STATISTIC_NAME_MINUTES_PLAYED();

    MCNAPI static char const* const& XBL_STATISTIC_NAME_MONSTERS_KILLED();
    // NOLINTEND
#else // @header-generator platform
    struct Statistic {};
#endif // @header-generator platform
};

} // namespace Social
