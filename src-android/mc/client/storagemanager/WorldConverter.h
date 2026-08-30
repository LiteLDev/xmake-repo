#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/LegacyWorldConversionManager.h"
#include "mc/client/legacy/RetrieveStatus.h"
#include "mc/client/world/LegacyWorldInfo.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/util/CallbackToken.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
class IDlcBatcher;
class ILevelListCache;
class IMinecraftEventing;
class TaskGroup;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Legacy { class WorldImporter; }
namespace Social { class User; }
// clang-format on

namespace StorageManager {

class WorldConverter : public ::std::enable_shared_from_this<StorageManager::WorldConverter> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::User>>         mUser;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                     mLevelListCache;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>                 mContentAcquisition;
    ::ll::TypedStorage<8, 16, ::IMinecraftEventing&>                 mEventing;
    ::ll::UntypedStorage<8, 48>                                      mIsEditorModeEnabled;
    ::ll::UntypedStorage<8, 48>                                      mSupportsLegacyWorlds;
    ::ll::UntypedStorage<8, 48>                                      mShouldPauseDownloadsWhenEnterGame;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>             mStorageCheckTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IDlcBatcher>>           mDlcBatcher;
    ::ll::TypedStorage<8, 24, std::vector<LegacyWorldInfo>>          mLegacyWorldList;
    ::ll::TypedStorage<8, 24, std::vector<LegacyWorldInfo>>          mRetailToPreviewWorldList;
    ::ll::TypedStorage<1, 1, bool>                                   mFetchingLegacyWorldsInProgress;
    ::ll::TypedStorage<1, 1, bool>                                   mLegacyWorldsFetched;
    ::ll::UntypedStorage<1, 14>                                      mFoundLegacyWorlds;
    ::ll::UntypedStorage<8, 112>                                     mLegacyWorldConversionManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Legacy::WorldImporter>> mLegacyWorldImporter;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                       mRetrieveCallbackToken;
    ::ll::TypedStorage<8, 16, ::CallbackToken>                       mImportCallbackToken;
    ::ll::UntypedStorage<8, 40>                                      mLegacyWorldFetchPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldConverter& operator=(WorldConverter const&);
    WorldConverter(WorldConverter const&);
    WorldConverter();
};

} // namespace StorageManager
