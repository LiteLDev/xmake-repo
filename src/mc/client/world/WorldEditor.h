#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/world/AddWorldFromTemplateError.h"
#include "mc/client/world/ClearPlayerDataType.h"
#include "mc/client/world/CloseWorldError.h"
#include "mc/client/world/DeleteWorldError.h"
#include "mc/client/world/ExportWorldFlags.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/IWorldTemplateHandler.h"
#include "mc/client/world/PackActionError.h"
#include "mc/client/world/PackDownloadError.h"
#include "mc/client/world/SaveWorldError.h"
#include "mc/client/world/WorldData.h"
#include "mc/client/world/WorldID.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/world/level/LevelListCacheObserver.h"
#include "mc/world/level/storage/LevelData.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
struct WorldTemplateInfo;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace World { class IWorldResourcePackHandler; }
namespace World { class IWorldStorageHandler; }
namespace World { class IWorldTemplateHandler; }
namespace World { struct PackDownloadProgressInfo; }
namespace World { struct WorldPacksData; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/AddWorldFromTemplateError.h"
#include "mc/client/world/ClearPlayerDataType.h"
#include "mc/client/world/DeleteWorldError.h"
#include "mc/client/world/ExportWorldFlags.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/PackActionError.h"
#include "mc/client/world/PackDownloadError.h"
#include "mc/client/world/SaveWorldError.h"
#include "mc/client/world/WorldID.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
class LevelData;
struct LevelSummary;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
namespace World { class IWorldResourcePackHandler; }
namespace World { class IWorldStorageHandler; }
namespace World { class IWorldTemplateHandler; }
namespace World { struct WorldData; }
namespace World { struct WorldPacksData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class WorldEditor : public ::LevelListCacheObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                   mNextModifier;
    ::ll::TypedStorage<1, 1, bool const>                                            mIsEduMode;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                    mLevelListCache;
    ::ll::TypedStorage<8, 8, ::World::IWorldResourcePackHandler&>                   mWorldResourcePackHandler;
    ::ll::TypedStorage<8, 8, ::World::IWorldStorageHandler&>                        mWorldStorageHandler;
    ::ll::TypedStorage<8, 8, std::unique_ptr<World::IWorldTemplateHandler>>         mWorldTemplateHandler;
    ::ll::UntypedStorage<8, 8>                                                      mOnLevelDataUpdatedPublisher;
    ::ll::UntypedStorage<8, 48>                                                     mOnSaveCompletedCallback;
    ::ll::UntypedStorage<8, 48>                                                     mOnSaveErrorCallback;
    ::ll::TypedStorage<8, 24, std::vector<World::WorldID>>                          mIDs;
    ::ll::TypedStorage<8, 40, std::unordered_map<World::WorldID, World::WorldData>> mWorlds;
    ::ll::TypedStorage<8, 40, std::unordered_map<World::WorldID, LevelData>>        mLevelData;
    ::ll::TypedStorage<8, 40, std::unordered_map<World::WorldID, LevelSummary>>     mLevelSummary;
    ::ll::TypedStorage<8, 24, std::vector<Realms::RealmId>>                         mRealmIDs;
    ::ll::TypedStorage<8, 40, std::unordered_map<long, Realms::World>>              mRealmWorlds;
    ::ll::UntypedStorage<8, 96>                                                     mNotifyWorldsInvalidated;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldEditor& operator=(WorldEditor const&);
    WorldEditor(WorldEditor const&);
    WorldEditor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldEditor();

    virtual void onLevelUpdated(std::string const&);

    virtual void onLevelDeleted(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addWorldEditorEntry(::World::WorldID const&, ::World::IWorldStorageHandler::CachedWorldData const&);

    MCNAPI bool _closeWorld(::World::WorldID const&);

    MCNAPI void _onWorldIconUpdated(::World::WorldID const&);

    MCNAPI std::optional<::World::PackActionError>
           activatePack(::World::WorldID const&, ::ContentType const, std::string const&, bool const);

    MCNAPI ::World::WorldID addWorld();

    MCNAPI void addWorldFromTemplate(
        std::string const&,
        std::function<void(std::variant<World::AddWorldFromTemplateError, World::WorldID>)>
    );

    MCNAPI void cancelDownloadPack();

    MCNAPI std::optional<::World::PackActionError>
           changePackPriority(::World::WorldID const&, ::ContentType const, std::string const&, int const, int const);

    MCNAPI ::Bedrock::Threading::Async<void> clearPlayerData(
        ::World::WorldID const&,
        ::World::ClearPlayerDataType,
        std::optional<World::IWorldStorageHandler::StartClearPlayerDataError>&
    ) const;

    MCNAPI std::optional<World::CloseWorldError> closeWorld(::World::WorldID const&);

    MCNAPI std::optional<::World::PackActionError> continuePackActivation(::World::WorldID const&);

    MCNAPI std::optional<::World::PackActionError> continuePackDeactivation(::World::WorldID const&);

    MCNAPI std::optional<::World::PackActionError>
           deactivatePack(::World::WorldID const&, ::ContentType const, std::string const&, bool const);

    MCNAPI std::optional<World::DeleteWorldError> deleteWorld(::World::WorldID const&);

    MCNAPI void downloadPacks(
        ::World::WorldID const&,
        std::vector<std::string> const&,
        std::function<void()>,
        std::function<void(World::PackDownloadError)>
    );

    MCNAPI void duplicateWorld(
        ::World::WorldID const&,
        std::function<void()>,
        std::function<void()>,
        std::function<void(World::IWorldStorageHandler::DuplicateWorldResult)>
    );

    MCNAPI void exportWorld(
        ::World::WorldID const&,
        ::World::ExportWorldFlags,
        std::function<void(World::IWorldStorageHandler::ExportWorldResult)>
    ) const;

    MCNAPI void exportWorldAsTemplate(
        ::World::WorldID const&,
        ::World::ExportWorldFlags,
        std::function<void(World::IWorldStorageHandler::ExportWorldResult)>
    ) const;

    MCNAPI ::World::IWorldStorageHandler::ExportWorldStatus exportWorldStatus() const;

    MCNAPI ::World::PackDownloadProgressInfo getDownloadPackProgress();

    MCNAPI ::World::WorldData* getWorld(::World::WorldID const&);

    MCNAPI ::World::WorldPacksData getWorldPacksData(::World::WorldID const&);

    MCNAPI bool hasNonAddonBehaviorPacks(::World::WorldID const&) const;

    MCNAPI bool isAchievementsDisabled(::World::WorldID const&, bool) const;

    MCNAPI bool isWorldInEditor(::World::WorldID const&);

    MCNAPI bool isWorldPlatformLocked(::World::WorldID const&) const;

    MCNAPI std::optional<World::IWorldStorageHandler::ReadWorldError> loadWorld(::World::WorldID const&);

    MCNAPI ::Bedrock::PubSub::Subscription registerWorldIconUpdatedListener(std::function<void(const World::WorldID&)>);

    MCNAPI ::Bedrock::PubSub::Subscription registerWorldsInvalidatedListener(std::function<void()>);

    MCNAPI void reloadWorld(::World::WorldID const&);

    MCNAPI void resetWorldIconToDefault(::World::WorldID const&);

    MCNAPI void saveScreenshotAsWorldIcon(::World::WorldID const&, ::Core::PathBuffer<std::string>, std::string const&);

    MCNAPI void saveWorld(::World::WorldID const&, std::function<void()>, std::function<void(World::SaveWorldError)>);

    MCNAPI void setRealmWorldInfo(::Realms::World const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLevelUpdated(std::string const&);

    MCNAPI void $onLevelDeleted(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class WorldEditor : public ::LevelListCacheObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                               mNextModifier;
    ::ll::TypedStorage<1, 1, bool const>                                        mIsEduMode;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                mLevelListCache;
    ::ll::TypedStorage<8, 8, ::World::IWorldResourcePackHandler&>               mWorldResourcePackHandler;
    ::ll::TypedStorage<8, 8, ::World::IWorldStorageHandler&>                    mWorldStorageHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::IWorldTemplateHandler>> mWorldTemplateHandler;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::Bedrock::PubSub::Publisher<void(::World::WorldID), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
                                                                                          mOnLevelDataUpdatedPublisher;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                    mOnSaveCompletedCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::World::SaveWorldError)>>             mOnSaveErrorCallback;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::WorldID>>                            mIDs;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::World::WorldID, ::World::WorldData>> mWorlds;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::World::WorldID, ::LevelData>>        mLevelData;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::World::WorldID, ::LevelSummary>>     mLevelSummary;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::RealmId>>                           mRealmIDs;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int64, ::Realms::World>>               mRealmWorlds;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mNotifyWorldsInvalidated;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldEditor& operator=(WorldEditor const&);
    WorldEditor(WorldEditor const&);
    WorldEditor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onLevelDeleted(::std::string const& levelId) /*override*/;

    virtual void onLevelUpdated(::std::string const& levelId) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldEditor(
        ::ILevelListCache&                                levelListCache,
        bool                                              isEduMode,
        ::World::IWorldResourcePackHandler&               worldResourcePackHandler,
        ::World::IWorldStorageHandler&                    worldStorageHandler,
        ::std::unique_ptr<::World::IWorldTemplateHandler> worldTemplateHandler
    );

    MCAPI ::LevelSummary& _addLevelSummary(::World::WorldID const& worldID);

    MCAPI void _addWorldEditorEntry(
        ::World::WorldID const&                               worldID,
        ::World::IWorldStorageHandler::CachedWorldData const& cachedWorldData
    );

    MCAPI bool _closeWorld(::World::WorldID const& worldID);

    MCAPI void _onWorldIconUpdated(::World::WorldID const& worldID);

    MCAPI bool _refreshWorldData(::World::WorldID const& worldID);

    MCAPI ::std::optional<::World::PackActionError>
    activatePack(::World::WorldID const& worldID, ::ContentType contentType, ::std::string const& packId, bool force);

    MCAPI ::World::WorldID addWorld();

    MCAPI void addWorldFromTemplate(
        ::std::string const&                                                                        templateId,
        ::std::function<void(::std::variant<::World::AddWorldFromTemplateError, ::World::WorldID>)> onComplete
    );

    MCAPI ::std::optional<::World::PackActionError> changePackPriority(
        ::World::WorldID const& worldID,
        ::ContentType           contentType,
        ::std::string const&    packId,
        int                     fromIndex,
        int                     toIndex
    );

    MCAPI ::Bedrock::Threading::Async<void> clearPlayerData(
        ::World::WorldID const&                                                    worldID,
        ::World::ClearPlayerDataType                                               type,
        ::std::optional<::World::IWorldStorageHandler::StartClearPlayerDataError>& error
    ) const;

    MCAPI ::std::optional<::World::PackActionError> continuePackActivation(::World::WorldID const& worldID);

    MCAPI ::std::optional<::World::PackActionError> continuePackDeactivation(::World::WorldID const& worldID);

    MCAPI ::std::optional<::World::PackActionError>
    deactivatePack(::World::WorldID const& worldID, ::ContentType contentType, ::std::string const& packId, bool force);

    MCAPI ::std::optional<::World::DeleteWorldError> deleteWorld(::World::WorldID const& worldID);

    MCAPI void downloadPacks(
        ::World::WorldID const&                           worldID,
        ::std::vector<::std::string> const&               packIds,
        ::std::function<void()>                           onCompleteCallback,
        ::std::function<void(::World::PackDownloadError)> onErrorCallback
    );

    MCAPI void duplicateWorld(
        ::World::WorldID const&                                                    worldID,
        ::std::function<void()>                                                    onCompleteCallback,
        ::std::function<void()>                                                    onCancelCallback,
        ::std::function<void(::World::IWorldStorageHandler::DuplicateWorldResult)> onErrorCallback
    );

    MCAPI void exportWorld(
        ::World::WorldID const&                                                 worldID,
        ::World::ExportWorldFlags                                               flags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    ) const;

    MCAPI void exportWorldAsTemplate(
        ::World::WorldID const&                                                 worldID,
        ::World::ExportWorldFlags                                               flags,
        ::std::function<void(::World::IWorldStorageHandler::ExportWorldResult)> onComplete
    ) const;

    MCAPI ::World::WorldData* getWorld(::World::WorldID const& worldID);

    MCAPI ::World::WorldPacksData getWorldPacksData(::World::WorldID const& worldID);

    MCAPI bool hasNonAddonBehaviorPacks(::World::WorldID const& id) const;

    MCAPI bool isAchievementsDisabled(::World::WorldID const& id, bool isTrial) const;

    MCAPI bool isWorldPlatformLocked(::World::WorldID const& id) const;

    MCAPI ::std::optional<::World::IWorldStorageHandler::ReadWorldError> loadWorld(::World::WorldID const& worldID);

    MCAPI void saveScreenshotAsWorldIcon(
        ::World::WorldID const&           worldID,
        ::Core::PathBuffer<::std::string> screenshotPath,
        ::std::string const&              id
    );

    MCAPI void saveWorld(
        ::World::WorldID const&                        worldID,
        ::std::function<void()>                        onCompleteCallback,
        ::std::function<void(::World::SaveWorldError)> onErrorCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ILevelListCache&                                levelListCache,
        bool                                              isEduMode,
        ::World::IWorldResourcePackHandler&               worldResourcePackHandler,
        ::World::IWorldStorageHandler&                    worldStorageHandler,
        ::std::unique_ptr<::World::IWorldTemplateHandler> worldTemplateHandler
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onLevelDeleted(::std::string const& levelId);

    MCAPI void $onLevelUpdated(::std::string const& levelId);
    // NOLINTEND
};
#else // @header-generator platform
class WorldEditor {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
