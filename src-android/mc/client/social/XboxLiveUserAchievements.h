#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/IdentityEventNotifier.h"
#include "mc/client/social/PlayerAchievementData.h"
#include "mc/client/social/XsapiHandle.h"
#include "mc/identity/XUID.h"

// auto generated forward declare list
// clang-format off
struct XalUser;
struct XblContext;
namespace Social { class ImageService; }
namespace Social { class XalApiWrapper; }
namespace Social { class XblApiWrapper; }
// clang-format on

namespace Social {

class XboxLiveUserAchievements : public ::std::enable_shared_from_this<Social::XboxLiveUserAchievements> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112>                                                       mCurrentUser;
    ::ll::UntypedStorage<8, 112>                                                       mContext;
    ::ll::TypedStorage<8, 8, ::Social::XUID>                                           mXuid;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                                        mAchievementDataReadyForCopy;
    ::ll::TypedStorage<1, 1, bool>                                                     mAchievementDataIsUpdating;
    ::ll::TypedStorage<4, 40, std::mutex>                                              mProcessingAchievementData;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Social::ImageService>>                    mAchievementImageCache;
    ::ll::UntypedStorage<8, 16>                                                        mRefreshAchievementDataTime;
    ::ll::UntypedStorage<8, 48>                                                        mGameScoreUpdateUIBindsCallback;
    ::ll::UntypedStorage<8, 176>                                                       mAchievementUpdateNotifier;
    ::ll::TypedStorage<8, 40, ::PlayerAchievementData>                                 mReadyData;
    ::ll::TypedStorage<8, 40, ::PlayerAchievementData>                                 mAsyncData;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::XalApiWrapper>>> mXalApi;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<Social::XblApiWrapper>>> mXblApi;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _consumeAsyncData();

    MCNAPI int addAchievementUpdateListener(std::function<void()>);

    MCNAPI ::PlayerAchievementData const& getAchievementData();

    MCNAPI void removeAchievementUpdateListener(int);

    MCNAPI void tick();

    MCNAPI void updateAchievementData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000>> const& sRefreshAchievementUpdateInterval();
    // NOLINTEND
};

} // namespace Social
