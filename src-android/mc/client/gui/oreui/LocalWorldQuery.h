#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/GameVersionObject.h"
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/world/SyncState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class GenericEntitlementChangeListener;
class IContentAccessibilityProvider;
class IEntitlementManager;
class ILevelListCache;
namespace OreUI { class IResourceAllowList; }
namespace World { class IWorldCloudSyncer; }
namespace World { class LocalWorldList; }
// clang-format on

namespace OreUI {

class LocalWorldQuery : public ::OreUI::QueryBase<OreUI::LocalWorldQuery>, public ::LevelListCacheObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                      mLevelListCache;
    ::ll::TypedStorage<8, 16, std::shared_ptr<World::LocalWorldList>> mLocalWorldList;
    ::ll::TypedStorage<8, 8, ::World::IWorldCloudSyncer&>             mWorldCloudSyncer;
    ::ll::UntypedStorage<8, 24>                                       mResourceAllowList;
    ::ll::UntypedStorage<8, 24>                                       mAccessibilityProvider;
    ::ll::UntypedStorage<8, 24>                                       mEntitlementManager;
    ::ll::UntypedStorage<8, 16>                                       mEntitlementChangeListener;
    ::ll::UntypedStorage<8, 168>                                      mId;
    ::ll::UntypedStorage<8, 168>                                      mName;
    ::ll::UntypedStorage<8, 152>                                      mLastSaved;
    ::ll::UntypedStorage<8, 152>                                      mGameMode;
    ::ll::UntypedStorage<8, 168>                                      mFileSize;
    ::ll::UntypedStorage<8, 168>                                      mPreviewImgPath;
    ::ll::UntypedStorage<8, 152>                                      mIsExperimental;
    ::ll::UntypedStorage<8, 152>                                      mIsHardcore;
    ::ll::UntypedStorage<8, 152>                                      mPlayerHasDied;
    ::ll::UntypedStorage<8, 152>                                      mDaysPlayed;
    ::ll::UntypedStorage<8, 152>                                      mShowDaysPlayed;
    ::ll::UntypedStorage<8, 976>                                      mGameVersion;
    ::ll::UntypedStorage<8, 976>                                      mTemplateVersion;
    ::ll::UntypedStorage<8, 152>                                      mIsTemplateCompatibleWithAnyVersion;
    ::ll::UntypedStorage<8, 152>                                      mAllContentOwned;
    ::ll::UntypedStorage<8, 152>                                      mRequiresCloudSync;
    ::ll::UntypedStorage<8, 152>                                      mIsMultiplayerEnabled;
    ::ll::UntypedStorage<8, 152>                                      mXblBroadcastIntent;
    ::ll::UntypedStorage<8, 152>                                      mIsEditorWorld;
    ::ll::UntypedStorage<8, 152>                                      mCloudSyncState;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalWorldQuery& operator=(LocalWorldQuery const&);
    LocalWorldQuery(LocalWorldQuery const&);
    LocalWorldQuery();
};

} // namespace OreUI
