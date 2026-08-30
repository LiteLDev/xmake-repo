#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GameVersion.h"
#include "mc/common/editor/WorldType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/options/EduSharedUriResource.h"
#include "mc/options/EducationEditionOffer.h"
#include "mc/options/EducationEditionOfferValue.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/LevelSeed64.h"
#include "mc/world/level/storage/CloudSaveLevelInfo.h"
#include "mc/world/level/storage/Experiments.h"
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/WorldIconType.h"
#include "mc/world/level/storage/edu_cloud/WorldSyncState.h"

// auto generated forward declare list
// clang-format off
class LevelData;
namespace Core { class Path; }
// clang-format on

struct LevelSummary {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                        mId;
    ::ll::TypedStorage<8, 24, std::string>                        mName;
    ::ll::TypedStorage<8, 8, long>                                mLastSaved;
    ::ll::TypedStorage<4, 4, ::GameType>                          mGameType;
    ::ll::TypedStorage<1, 1, bool>                                mIsHardcore;
    ::ll::TypedStorage<1, 1, bool>                                mPlayerHasDied;
    ::ll::TypedStorage<4, 4, int>                                 mTime;
    ::ll::TypedStorage<1, 1, bool>                                mShowDaysPlayed;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty>   mGameDifficulty;
    ::ll::TypedStorage<8, 8, ::LevelSeed64>                       mSeed;
    ::ll::TypedStorage<4, 4, int>                                 mNetworkProtocolVersion;
    ::ll::TypedStorage<8, 8, ulong>                               mSizeOnDisk;
    ::ll::TypedStorage<1, 1, bool>                                mConfirmedPlatformLockedContent;
    ::ll::TypedStorage<1, 1, bool>                                mIsMultiplayerEnabled;
    ::ll::TypedStorage<1, 1, bool>                                mLANBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>        mXBLBroadcastIntent;
    ::ll::TypedStorage<1, 1, bool>                                mCommandsEnabled;
    ::ll::TypedStorage<4, 4, ::EducationEditionOfferValue>        mEducationEditionOffer;
    ::ll::TypedStorage<8, 48, ::GameVersion>                      mLastLoadedGameVersion;
    ::ll::TypedStorage<8, 48, ::GameVersion>                      mMinCompatibleClientVersion;
    ::ll::TypedStorage<4, 4, ::StorageVersion>                    mStorageVersion;
    ::ll::UntypedStorage<8, 24>                                   mWorldDirectoryPath;
    ::ll::UntypedStorage<8, 24>                                   mWorldIconPath;
    ::ll::UntypedStorage<8, 24>                                   mWorldIconTargetPath;
    ::ll::TypedStorage<4, 4, ::WorldIconType>                     mWorldIconType;
    ::ll::TypedStorage<8, 24, ::ContentIdentity>                  mPremiumTemplateContentIdentity;
    ::ll::TypedStorage<8, 24, std::string>                        mEducationOid;
    ::ll::TypedStorage<8, 56, ::Experiments>                      mExperiments;
    ::ll::UntypedStorage<8, 32>                                   mBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>                                mIsSingleUseWorld;
    ::ll::TypedStorage<1, 1, bool>                                mIsBetaRetailLevel;
    ::ll::TypedStorage<8, 48, ::EduSharedUriResource>             mEduSharedUriResource;
    ::ll::TypedStorage<4, 4, ::Editor::WorldType>                 mEditorWorldType;
    ::ll::TypedStorage<8, 136, std::optional<CloudSaveLevelInfo>> mCloudSaveInfo;
    ::ll::TypedStorage<4, 4, ::EduCloud::WorldSyncState>          mEduCloudWorldSyncState;
    ::ll::TypedStorage<1, 1, bool>                                mHasUncompleteWorldFileOnDisk;
    ::ll::TypedStorage<8, 24, std::string>                        mEducationCreatorId;
    ::ll::TypedStorage<8, 24, std::string>                        mEducationCreatorWorldId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelSummary();

    MCNAPI LevelSummary(::LevelSummary const&);

    MCNAPI LevelSummary(std::string const&, ::LevelData const&, ::Core::Path const&, ::Core::Path const&, bool);

    MCNAPI LevelSummary(
        std::string const&,
        std::string const&,
        long,
        ::GameType,
        bool,
        bool,
        int,
        bool,
        ::SharedTypes::Legacy::Difficulty,
        ::LevelSeed64,
        int,
        ulong,
        bool,
        bool,
        bool,
        ::Social::GamePublishSetting,
        bool,
        ::EducationEditionOffer,
        ::GameVersion const&,
        ::GameVersion const&,
        ::StorageVersion,
        ::Core::Path const&,
        ::ContentIdentity const&,
        std::string const&,
        bool const,
        ::EduSharedUriResource const&,
        ::Experiments const&,
        ::BaseGameVersion const&,
        ::Editor::WorldType,
        bool const,
        std::optional<CloudSaveLevelInfo>
    );

    MCNAPI void _initializeWorldIconPath(::Core::Path const&);

    MCNAPI ::CloudSaveLevelInfo const& getCloudSaveInfo() const;

    MCNAPI ::EduCloud::WorldSyncState const getEduCloudWorldSyncState() const;

    MCNAPI std::string getEducationCreatorId() const;

    MCNAPI std::string getEducationCreatorWorldId() const;

    MCNAPI bool getPlayerHasDied() const;

    MCNAPI bool getShowDaysPlayed() const;

    MCNAPI int getTime() const;

    MCNAPI bool hasCloudSaveAssociation() const;

    MCNAPI bool hasValidId() const;

    MCNAPI bool isEditionCompatible() const;

    MCNAPI bool isHardcore() const;

    MCNAPI bool isVersionCompatible() const;

    MCNAPI bool operator<(::LevelSummary const&) const;

    MCNAPI ::LevelSummary& operator=(::LevelSummary const&);

    MCNAPI bool operator==(::LevelSummary const&) const;

    MCNAPI void removeCloudSave();

    MCNAPI void setCloudSave(::CloudSaveLevelInfo const&);

    MCNAPI void setCloudSaveFileName(std::string const&);

    MCNAPI void setEduCloudWorldSyncState(::EduCloud::WorldSyncState const);

    MCNAPI void setEducationCreatorId(std::string const&);

    MCNAPI void setEducationCreatorWorldId(std::string const&);

    MCNAPI ~LevelSummary();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<std::string> buildCustomIconPath(::Core::Path const&);

    MCNAPI static ::Core::PathBuffer<std::string> buildScreenshotIconPath(::Core::Path const&, ::Core::Path const&);

    MCNAPI static ::Core::PathBuffer<std::string> buildWorldIconPath(::Core::Path const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<std::string> const& CUSTOM_ICON_FILENAME();

    MCNAPI static std::string const& DEFAULT_EDU_CLOUD_WORLD_ICON_FILENAME();

    MCNAPI static std::string const& DEFAULT_WORLD_ICON_FILENAME();

    MCNAPI static std::string const& INVALID_LEVEL_ID();

    MCNAPI static std::string const& SCREENSHOT_WORLD_ICON_FILENAME_EXTENSION();

    MCNAPI static std::string const& SCREENSHOT_WORLD_ICON_FILENAME_PREFIX();

    MCNAPI static ::Core::PathBuffer<std::string> const& WORLD_ICON_FILENAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::LevelSummary const&);

    MCNAPI void* $ctor(std::string const&, ::LevelData const&, ::Core::Path const&, ::Core::Path const&, bool);

    MCNAPI void* $ctor(
        std::string const&,
        std::string const&,
        long,
        ::GameType,
        bool,
        bool,
        int,
        bool,
        ::SharedTypes::Legacy::Difficulty,
        ::LevelSeed64,
        int,
        ulong,
        bool,
        bool,
        bool,
        ::Social::GamePublishSetting,
        bool,
        ::EducationEditionOffer,
        ::GameVersion const&,
        ::GameVersion const&,
        ::StorageVersion,
        ::Core::Path const&,
        ::ContentIdentity const&,
        std::string const&,
        bool const,
        ::EduSharedUriResource const&,
        ::Experiments const&,
        ::BaseGameVersion const&,
        ::Editor::WorldType,
        bool const,
        std::optional<CloudSaveLevelInfo>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
