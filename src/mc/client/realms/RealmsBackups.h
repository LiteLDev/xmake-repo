#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/Realms__RealmsBackupsDownloadState.h"
#include "mc/client/network/realms/WorldBackup.h"
#include "mc/client/realms/RealmsBackupsState.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Realms { class RealmsDownloader; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsBackups : public ::std::enable_shared_from_this<Realms::RealmsBackups> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>>                  mRealmsAPI;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsDownloader>> mRealmsDownloader;
    ::ll::TypedStorage<8, 232, ::Realms::WorldBackup>                    mWorldBackup;
    ::ll::UntypedStorage<8, 696>                                         mLevelSummary;
    ::ll::TypedStorage<1, 1, ::Realms::RealmsBackupsState>               mState;
    ::ll::TypedStorage<1, 1, ::Realms::RealmsBackupsDownloadState>       mDownloadState;
    ::ll::UntypedStorage<8, 88>                                          mNotifyRealmBackupsStateUpdated;
    ::ll::UntypedStorage<8, 88>                                          mNotifyRealmBackupsDownloadStateChanged;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsBackups();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmsBackups(std::weak_ptr<RealmsAPI>, std::shared_ptr<Realms::RealmsDownloader>);

    MCNAPI void _fireBackupDownloadFailedEvent(std::string const&, std::string const&, long);

    MCNAPI void downloadRealmWorld(std::string const&, std::string const&, int);

    MCNAPI void fetchBackupsList(std::string const&, int);

    MCNAPI ::LevelSummary& getCurrentLevelSummary();

    MCNAPI ::Realms::RealmsBackupsDownloadState getDownloadState() const;

    MCNAPI ::Realms::RealmsBackupsState getState() const;

    MCNAPI ::Bedrock::PubSub::Subscription registerRealmBackupsStateListener(std::function<void(bool)>);

    MCNAPI ::Bedrock::PubSub::Subscription
    registerRealmsBackupsDownloadStateListener(std::function<void(Realms::RealmsBackupsDownloadState)>&&);

    MCNAPI void resetDownloadState();

    MCNAPI void resetState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<RealmsAPI>, std::shared_ptr<Realms::RealmsDownloader>);
    // NOLINTEND
};
#else // @header-generator platform
class RealmsBackups {};
#endif // @header-generator platform

} // namespace Realms
