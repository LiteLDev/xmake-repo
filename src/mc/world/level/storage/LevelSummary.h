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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                          mId;
    ::ll::TypedStorage<8, 32, ::std::string>                          mName;
    ::ll::TypedStorage<8, 8, int64>                                   mLastSaved;
    ::ll::TypedStorage<4, 4, ::GameType>                              mGameType;
    ::ll::TypedStorage<1, 1, bool>                                    mIsHardcore;
    ::ll::TypedStorage<1, 1, bool>                                    mPlayerHasDied;
    ::ll::TypedStorage<4, 4, int>                                     mTime;
    ::ll::TypedStorage<1, 1, bool>                                    mShowDaysPlayed;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty>       mGameDifficulty;
    ::ll::TypedStorage<8, 8, ::LevelSeed64>                           mSeed;
    ::ll::TypedStorage<4, 4, int>                                     mNetworkProtocolVersion;
    ::ll::TypedStorage<8, 8, uint64>                                  mSizeOnDisk;
    ::ll::TypedStorage<1, 1, bool>                                    mConfirmedPlatformLockedContent;
    ::ll::TypedStorage<1, 1, bool>                                    mIsMultiplayerEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mLANBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>            mXBLBroadcastIntent;
    ::ll::TypedStorage<1, 1, bool>                                    mCommandsEnabled;
    ::ll::TypedStorage<4, 4, ::EducationEditionOfferValue>            mEducationEditionOffer;
    ::ll::TypedStorage<8, 56, ::GameVersion>                          mLastLoadedGameVersion;
    ::ll::TypedStorage<8, 56, ::GameVersion>                          mMinCompatibleClientVersion;
    ::ll::TypedStorage<4, 4, ::StorageVersion>                        mStorageVersion;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mWorldDirectoryPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mWorldIconPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mWorldIconTargetPath;
    ::ll::TypedStorage<4, 4, ::WorldIconType>                         mWorldIconType;
    ::ll::TypedStorage<8, 24, ::ContentIdentity>                      mPremiumTemplateContentIdentity;
    ::ll::TypedStorage<8, 32, ::std::string>                          mEducationOid;
    ::ll::TypedStorage<8, 72, ::Experiments>                          mExperiments;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                      mBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>                                    mIsSingleUseWorld;
    ::ll::TypedStorage<1, 1, bool>                                    mIsBetaRetailLevel;
    ::ll::TypedStorage<8, 64, ::EduSharedUriResource>                 mEduSharedUriResource;
    ::ll::TypedStorage<4, 4, ::Editor::WorldType>                     mEditorWorldType;
    ::ll::TypedStorage<8, 176, ::std::optional<::CloudSaveLevelInfo>> mCloudSaveInfo;
    ::ll::TypedStorage<4, 4, ::EduCloud::WorldSyncState>              mEduCloudWorldSyncState;
    ::ll::TypedStorage<1, 1, bool>                                    mHasUncompleteWorldFileOnDisk;
    ::ll::TypedStorage<8, 32, ::std::string>                          mEducationCreatorId;
    ::ll::TypedStorage<8, 32, ::std::string>                          mEducationCreatorWorldId;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    LevelSummary& operator=(LevelSummary const&);

#else // LL_PLAT_C
#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelSummary();
#else // @header-generator platform
    MCAPI LevelSummary();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelSummary(::LevelSummary const&);
#else // @header-generator platform
    MCAPI LevelSummary(::LevelSummary const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI LevelSummary(
        ::std::string const& levelId,
        ::LevelData const&   levelData,
        ::Core::Path const&  levelDirectory,
        ::Core::Path const&  levelInfoDirectory,
        bool                 isBetaRetailLevel
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initializeWorldIconPath(::Core::Path const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI LevelSummary(
        ::std::string const&                  id,
        ::std::string const&                  name,
        int64                                 lastSaved,
        ::GameType                            gameType,
        bool                                  isHardcore,
        bool                                  playerHasDied,
        int                                   time,
        bool                                  showDaysPlayed,
        ::SharedTypes::Legacy::Difficulty     gameDifficulty,
        ::LevelSeed64                         seed,
        int                                   npv,
        uint64                                sizeOnDisk,
        bool                                  confirmedPlatformLockedContent,
        bool                                  isMultiplayerEnabled,
        bool                                  lanBroadcastIntent,
        ::Social::GamePublishSetting          xblBroadcastIntent,
        bool                                  commandsEnabled,
        ::EducationEditionOffer               eduOffer,
        ::GameVersion const&                  lastLoadedWithGameVersion,
        ::GameVersion const&                  minCompatibleClientVersion,
        ::StorageVersion                      storageVersion,
        ::Core::Path const&                   path,
        ::ContentIdentity const&              premiumContentIdentity,
        ::std::string const&                  educationOid,
        bool                                  isSingleUseWorld,
        ::EduSharedUriResource const&         eduSharedUriResource,
        ::Experiments const&                  experiments,
        ::BaseGameVersion const&              baseGameVersion,
        ::Editor::WorldType                   editorWorldType,
        bool                                  uncompleteWorldFileOnDisk,
        ::std::optional<::CloudSaveLevelInfo> cloudSaveInfo
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CloudSaveLevelInfo const& getCloudSaveInfo() const;
#else // @header-generator platform
    MCAPI void _initializeWorldIconPath(::Core::Path const& directory);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EduCloud::WorldSyncState const getEduCloudWorldSyncState() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string getEducationCreatorId() const;

    MCAPI ::std::string getEducationCreatorWorldId() const;

    MCAPI bool hasCloudSaveAssociation() const;

    MCAPI bool isEditionCompatible() const;

    MCAPI bool isGameVersionCompatible() const;

    MCAPI ::LevelSummary& operator=(::LevelSummary const&);

    MCAPI bool operator==(::LevelSummary const& rhs) const;

    MCAPI void setCloudSave(::CloudSaveLevelInfo const& value);

    MCAPI ::LevelSummary& setId(::std::string Id);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getEducationCreatorId() const;
#else // @header-generator platform
    MCAPI ::LevelSummary& setName(::std::string Name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~LevelSummary();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<std::string> buildCustomIconPath(::Core::Path const&);

    MCNAPI static ::Core::PathBuffer<std::string> buildScreenshotIconPath(::Core::Path const&, ::Core::Path const&);

    MCNAPI static ::Core::PathBuffer<std::string> buildWorldIconPath(::Core::Path const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::Core::PathBuffer<::std::string>
    buildScreenshotIconPath(::Core::Path const& worldDirectory, ::Core::Path const& previousScreenshotIconPath);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<std::string> const& CUSTOM_ICON_FILENAME();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::std::string> const& CUSTOM_ICON_FILENAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DEFAULT_EDU_CLOUD_WORLD_ICON_FILENAME();
#else // @header-generator platform
    MCAPI static ::std::string const& DEFAULT_EDU_CLOUD_WORLD_ICON_FILENAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DEFAULT_WORLD_ICON_FILENAME();
#else // @header-generator platform
    MCAPI static ::std::string const& DEFAULT_WORLD_ICON_FILENAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& INVALID_LEVEL_ID();
#else // @header-generator platform
    MCAPI static ::std::string const& INVALID_LEVEL_ID();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& SCREENSHOT_WORLD_ICON_FILENAME_EXTENSION();
#else // @header-generator platform
    MCAPI static ::std::string const& SCREENSHOT_WORLD_ICON_FILENAME_EXTENSION();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& SCREENSHOT_WORLD_ICON_FILENAME_PREFIX();
#else // @header-generator platform
    MCAPI static ::std::string const& SCREENSHOT_WORLD_ICON_FILENAME_PREFIX();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<std::string> const& WORLD_ICON_FILENAME();
#else // @header-generator platform
    MCAPI static ::Core::PathBuffer<::std::string> const& WORLD_ICON_FILENAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::LevelSummary const&);
#else // @header-generator platform
    MCAPI void* $ctor(::LevelSummary const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const& levelId,
        ::LevelData const&   levelData,
        ::Core::Path const&  levelDirectory,
        ::Core::Path const&  levelInfoDirectory,
        bool                 isBetaRetailLevel
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::std::string const&                  id,
        ::std::string const&                  name,
        int64                                 lastSaved,
        ::GameType                            gameType,
        bool                                  isHardcore,
        bool                                  playerHasDied,
        int                                   time,
        bool                                  showDaysPlayed,
        ::SharedTypes::Legacy::Difficulty     gameDifficulty,
        ::LevelSeed64                         seed,
        int                                   npv,
        uint64                                sizeOnDisk,
        bool                                  confirmedPlatformLockedContent,
        bool                                  isMultiplayerEnabled,
        bool                                  lanBroadcastIntent,
        ::Social::GamePublishSetting          xblBroadcastIntent,
        bool                                  commandsEnabled,
        ::EducationEditionOffer               eduOffer,
        ::GameVersion const&                  lastLoadedWithGameVersion,
        ::GameVersion const&                  minCompatibleClientVersion,
        ::StorageVersion                      storageVersion,
        ::Core::Path const&                   path,
        ::ContentIdentity const&              premiumContentIdentity,
        ::std::string const&                  educationOid,
        bool                                  isSingleUseWorld,
        ::EduSharedUriResource const&         eduSharedUriResource,
        ::Experiments const&                  experiments,
        ::BaseGameVersion const&              baseGameVersion,
        ::Editor::WorldType                   editorWorldType,
        bool                                  uncompleteWorldFileOnDisk,
        ::std::optional<::CloudSaveLevelInfo> cloudSaveInfo
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
