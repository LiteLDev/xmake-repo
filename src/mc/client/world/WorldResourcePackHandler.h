#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/IWorldResourcePackHandler.h"
#include "mc/client/world/PackAction.h"
#include "mc/client/world/PackActionError.h"
#include "mc/client/world/PackDownloadError.h"
#include "mc/client/world/PackStatus.h"
#include "mc/client/world/PendingPackActionHash.h"
#include "mc/client/world/PendingPackActionKey.h"
#include "mc/client/world/PendingPackActivation.h"
#include "mc/client/world/PendingPackRemoval.h"
#include "mc/client/world/WorldID.h"
#include "mc/client/world/WorldPacks.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/resources/PackScope.h"

// auto generated forward declare list
// clang-format off
class ContentView;
class IContentAcquisition;
class IContentManager;
class IContentManagerContext;
class IContentTierManager;
class IEntitlementManager;
class IMinecraftEventing;
class IResourcePackRepository;
struct ContentItem;
struct ContentViews;
struct LevelSummary;
struct MoveResourcePackResult;
struct PackIdVersion;
namespace World { class IWorldResourcePackDownloader; }
namespace World { struct PackCheckResult; }
namespace World { struct PackCollection; }
namespace World { struct PackDetails; }
namespace World { struct PackDownloadProgressInfo; }
namespace World { struct PackViewAndItem; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/IWorldResourcePackHandler.h"
#include "mc/client/world/PackAction.h"
#include "mc/client/world/PackActionError.h"
#include "mc/client/world/PackDownloadError.h"
#include "mc/client/world/PackStatus.h"
#include "mc/client/world/PendingPackActionHash.h"
#include "mc/client/world/PendingPackActionKey.h"
#include "mc/client/world/PendingPackActivation.h"
#include "mc/client/world/PendingPackRemoval.h"
#include "mc/client/world/WorldID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/resources/PackScope.h"

// auto generated forward declare list
// clang-format off
class ContentView;
class IContentAcquisition;
class IContentManager;
class IContentManagerContext;
class IContentTierManager;
class IEntitlementManager;
class IMinecraftEventing;
class IResourcePackRepository;
struct ContentItem;
struct ContentViews;
struct LevelSummary;
struct PackIdVersion;
namespace World { class IWorldResourcePackDownloader; }
namespace World { struct PackCheckResult; }
namespace World { struct PackCollection; }
namespace World { struct PackDetails; }
namespace World { struct PackDownloadProgressInfo; }
namespace World { struct PackViewAndItem; }
namespace World { struct WorldPacks; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class WorldResourcePackHandler : public ::World::IWorldResourcePackHandler {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class WorldResourcePackHandler : public ::World::IWorldResourcePackHandler {
#else // @header-generator platform
class WorldResourcePackHandler {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // WorldResourcePackHandler inner types declare
    // clang-format off
    struct Contexts;
    // clang-format on

    // WorldResourcePackHandler inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Contexts {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<IContentManagerContext>> mContext;
        ::ll::TypedStorage<8, 8, std::unique_ptr<IContentManagerContext>> mGlobalContext;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Contexts();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using ContentItemPtr = std::shared_ptr<ContentItem>;

    using ConstContentItemPtr = std::shared_ptr<const ContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::IContentManager&> mContentManager;
    ::ll::UntypedStorage<8, 24> mResourcePackRepository;
    ::ll::UntypedStorage<8, 24> mEntitlementManager;
    ::ll::UntypedStorage<8, 24> mContentTierManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<World::IWorldResourcePackDownloader>> mWorldResourcePackDownloader;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&> mContentAcquisition;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSourcesReloadedSubscription;
    ::ll::TypedStorage<8, 40, std::unordered_map<World::WorldID, World::WorldPacks>> mWorldPacks;
    ::ll::TypedStorage<8, 40, std::unordered_map<::World::PendingPackActionKey, std::variant<World::PendingPackActivation, World::PendingPackRemoval>, ::World::PendingPackActionHash, std::equal_to<::World::PendingPackActionKey>, std::allocator<std::pair<const ::World::PendingPackActionKey, std::variant<World::PendingPackActivation, World::PendingPackRemoval>>>>> mPendingPackActions;
    ::ll::UntypedStorage<1, 1> mIsEditorWorld;
    ::ll::UntypedStorage<8, 24> mCurrentWorldID;
    ::ll::TypedStorage<1, 1, bool> mDirty;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    WorldResourcePackHandler& operator=(WorldResourcePackHandler const&);
    WorldResourcePackHandler(WorldResourcePackHandler const&);
    WorldResourcePackHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldResourcePackHandler();

    virtual ::World::WorldPacks& loadPackContentForWorld(::LevelSummary const&);

    virtual ::World::PackCollection getWorldPackCollection(::LevelSummary const&, ::ContentType const, bool const);

    virtual std::optional<::World::PackActionError> activatePack(::LevelSummary const&, ::ContentType const, std::string const&, bool const, bool const);

    virtual std::optional<::World::PackActionError> deactivatePack(::LevelSummary const&, ::ContentType const, std::string const&, bool const, bool const);

    virtual std::optional<::World::PackActionError> continuePackActivation(::LevelSummary const&);

    virtual std::optional<::World::PackActionError> continuePackDeactivation(::LevelSummary const&);

    virtual void downloadPacks(::LevelSummary const&, std::vector<std::string> const&, std::function<void ()>, std::function<void (World::PackDownloadError)>);

    virtual void getPackSizes(::LevelSummary const&, std::vector<std::string> const&, std::function<void (ulong)>, std::function<void (::World::PackActionError)>);

    virtual ::World::PackDownloadProgressInfo getDownloadPackProgress();

    virtual void getDownloadingPackTitles(std::function<void (std::vector<std::string>)>);

    virtual void cancelDownloadPack();

    virtual void savePacksData();

    virtual bool hasNonAddonBehaviorPacks(::LevelSummary const&);

    virtual bool hasBehaviorPacks(::LevelSummary const&);

    virtual bool hasLockedPacks(::LevelSummary const&) const;

    virtual std::optional<::World::PackActionError> changePackPriority(::LevelSummary const&, ::ContentType const, std::string const&, int const, int const);

    virtual ::World::PackCheckResult checkDlc(std::string const&, ::PackIdVersion const&, bool const);

    virtual std::vector<World::PackDetails> getPackDetailsForWorld(::LevelSummary const&, std::vector<std::string> const&);

    virtual bool getResourcePacksDirty();

    virtual void refreshPacksData();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::World::WorldPacks&
    _cacheWorldPackData(::World::WorldResourcePackHandler::Contexts&&, ::LevelSummary const&);

    MCNAPI std::unique_ptr<ContentViews>
           _createContentViews(::World::WorldResourcePackHandler::Contexts&, ::ContentType, ::PackScope) const;

    MCNAPI std::variant<::World::PackActionError, World::PackViewAndItem>
           _findPackByType(::World::WorldPacks&, ::ContentType const, std::string const&) const;

    MCNAPI std::variant<::World::PackActionError, World::PackViewAndItem> _findPackViewAndContent(
        ::World::WorldPacks&,
        ::ContentType const,
        ::World::PackStatus const,
        std::string const&
    ) const;

    MCNAPI void _getMissingPackIds(
        ::LevelSummary const&,
        std::vector<std::string> const&,
        std::function<void(::World::PackActionError)>,
        std::function<void(const std::vector<std::string>&)>
    );

    MCNAPI ::World::PackDetails _getPackDetails(
        ::World::WorldID const,
        std::shared_ptr<ContentItem> const&,
        ::ContentViews const&,
        ::World::PackStatus const,
        bool const
    );

    MCNAPI ::World::WorldResourcePackHandler::Contexts _initializeContentManagerForWorld(::LevelSummary const&);

    MCNAPI bool _needToDownloadPack(std::shared_ptr<ContentItem> const&) const;

    MCNAPI std::optional<::World::PackActionError> _performPackMovement(
        ::World::PackAction const,
        ::LevelSummary const&,
        ::ContentType const,
        std::string const&,
        bool const,
        bool const
    );

    MCNAPI void _populatePackDetails(
        ::World::WorldID const,
        std::vector<World::PackDetails>&,
        ::Bedrock::NonOwnerPointer<ContentView>,
        ::World::PackCollection const&,
        ::ContentViews const&,
        ::World::PackStatus const,
        bool const
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::World::WorldPacks& $loadPackContentForWorld(::LevelSummary const&);

    MCNAPI ::World::PackCollection $getWorldPackCollection(::LevelSummary const&, ::ContentType const, bool const);

    MCNAPI std::optional<::World::PackActionError>
           $activatePack(::LevelSummary const&, ::ContentType const, std::string const&, bool const, bool const);

    MCNAPI std::optional<::World::PackActionError>
           $deactivatePack(::LevelSummary const&, ::ContentType const, std::string const&, bool const, bool const);

    MCNAPI std::optional<::World::PackActionError> $continuePackActivation(::LevelSummary const&);

    MCNAPI std::optional<::World::PackActionError> $continuePackDeactivation(::LevelSummary const&);

    MCNAPI void $downloadPacks(
        ::LevelSummary const&,
        std::vector<std::string> const&,
        std::function<void()>,
        std::function<void(World::PackDownloadError)>
    );

    MCNAPI void $getPackSizes(
        ::LevelSummary const&,
        std::vector<std::string> const&,
        std::function<void(ulong)>,
        std::function<void(::World::PackActionError)>
    );

    MCNAPI ::World::PackDownloadProgressInfo $getDownloadPackProgress();

    MCNAPI void $getDownloadingPackTitles(std::function<void(std::vector<std::string>)>);

    MCNAPI void $cancelDownloadPack();

    MCNAPI void $savePacksData();

    MCNAPI bool $hasNonAddonBehaviorPacks(::LevelSummary const&);

    MCNAPI bool $hasBehaviorPacks(::LevelSummary const&);

    MCNAPI bool $hasLockedPacks(::LevelSummary const&) const;

    MCNAPI std::optional<::World::PackActionError>
           $changePackPriority(::LevelSummary const&, ::ContentType const, std::string const&, int const, int const);

    MCNAPI ::World::PackCheckResult $checkDlc(std::string const&, ::PackIdVersion const&, bool const);

    MCNAPI std::vector<World::PackDetails>
           $getPackDetailsForWorld(::LevelSummary const&, std::vector<std::string> const&);

    MCNAPI bool $getResourcePacksDirty();

    MCNAPI void $refreshPacksData();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct Contexts {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>> mContext;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>> mGlobalContext;
        // NOLINTEND
    };

    using ConstContentItemPtr = ::std::shared_ptr<::ContentItem const>;

    using ContentItemPtr = ::std::shared_ptr<::ContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                          mContentManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>>   mResourcePackRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>       mEntitlementManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const>> mContentTierManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::World::IWorldResourcePackDownloader>>    mWorldResourcePackDownloader;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>                                      mContentAcquisition;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                       mEventing;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSourcesReloadedSubscription;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::World::WorldID, ::World::WorldPacks>> mWorldPacks;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::World::PendingPackActionKey,
            ::std::variant<::World::PendingPackActivation, ::World::PendingPackRemoval>,
            ::World::PendingPackActionHash,
            ::std::equal_to<::World::PendingPackActionKey>>>
                                                mPendingPackActions;
    ::ll::TypedStorage<1, 1, bool>              mIsEditorWorld;
    ::ll::TypedStorage<8, 32, ::World::WorldID> mCurrentWorldID;
    ::ll::TypedStorage<1, 1, bool>              mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldResourcePackHandler& operator=(WorldResourcePackHandler const&);
    WorldResourcePackHandler(WorldResourcePackHandler const&);
    WorldResourcePackHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldResourcePackHandler() /*override*/ = default;

    virtual ::World::WorldPacks& loadPackContentForWorld(::LevelSummary const& levelSummary) /*override*/;

    virtual ::World::PackCollection getWorldPackCollection(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        bool const            isEduMode
    ) /*override*/;

    virtual ::std::optional<::World::PackActionError> activatePack(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        ::std::string const&  packId,
        bool const            isEduMode,
        bool const            force
    ) /*override*/;

    virtual ::std::optional<::World::PackActionError> deactivatePack(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        ::std::string const&  packId,
        bool const            isEduMode,
        bool const            force
    ) /*override*/;

    virtual ::std::optional<::World::PackActionError>
    continuePackActivation(::LevelSummary const& levelSummary) /*override*/;

    virtual ::std::optional<::World::PackActionError>
    continuePackDeactivation(::LevelSummary const& levelSummary) /*override*/;

    virtual void downloadPacks(
        ::LevelSummary const&                             levelSummary,
        ::std::vector<::std::string> const&               packIds,
        ::std::function<void()>                           onCompleteCallback,
        ::std::function<void(::World::PackDownloadError)> onErrorCallback
    ) /*override*/;

    virtual ::World::PackDownloadProgressInfo getDownloadPackProgress() /*override*/;

    virtual void
    getDownloadingPackTitles(::std::function<void(::std::vector<::std::string>)> packTitlesCallback) /*override*/;

    virtual void cancelDownloadPack() /*override*/;

    virtual void getPackSizes(
        ::LevelSummary const&                           levelSummary,
        ::std::vector<::std::string> const&             packIds,
        ::std::function<void(uint64)>                   onCompleteCallback,
        ::std::function<void(::World::PackActionError)> onErrorCallback
    ) /*override*/;

    virtual void savePacksData() /*override*/;

    virtual bool hasNonAddonBehaviorPacks(::LevelSummary const& levelSummary) /*override*/;

    virtual bool hasBehaviorPacks(::LevelSummary const& levelSummary) /*override*/;

    virtual bool hasLockedPacks(::LevelSummary const& levelSummary) const /*override*/;

    virtual ::std::optional<::World::PackActionError> changePackPriority(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        ::std::string const&  packId,
        int const             fromIndex,
        int const             toIndex
    ) /*override*/;

    virtual ::World::PackCheckResult
    checkDlc(::std::string const& levelId, ::PackIdVersion const& packIdVersion, bool const isForRealms) /*override*/;

    virtual ::std::vector<::World::PackDetails> getPackDetailsForWorld(
        ::LevelSummary const&               levelSummary,
        ::std::vector<::std::string> const& packIds
    ) /*override*/;

    virtual bool getResourcePacksDirty() /*override*/;

    virtual void refreshPacksData() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldResourcePackHandler(
        ::IContentManager&                                         contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>   resourcePackRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> contentTierManager,
        ::IContentAcquisition&                                     contentAcquisition,
        ::std::unique_ptr<::World::IWorldResourcePackDownloader>   worldResourcePackDownloader,
        ::IMinecraftEventing&                                      eventing
    );

    MCAPI ::World::WorldPacks&
    _cacheWorldPackData(::World::WorldResourcePackHandler::Contexts&& contexts, ::LevelSummary const& levelSummary);

    MCAPI ::std::unique_ptr<::ContentViews> _createContentViews(
        ::World::WorldResourcePackHandler::Contexts& contexts,
        ::ContentType                                contentType,
        ::PackScope                                  scope
    ) const;

    MCAPI ::std::variant<::World::PackActionError, ::World::PackViewAndItem> _findPackByType(
        ::World::WorldPacks& worldPacks,
        ::ContentType const  contentType,
        ::std::string const& packId
    ) const;

    MCAPI ::std::variant<::World::PackActionError, ::World::PackViewAndItem> _findPackViewAndContent(
        ::World::WorldPacks&      worldPacks,
        ::ContentType const       contentType,
        ::World::PackStatus const packStatus,
        ::std::string const&      packId
    ) const;

    MCAPI void _getMissingPackIds(
        ::LevelSummary const&                                      levelSummary,
        ::std::vector<::std::string> const&                        packIds,
        ::std::function<void(::World::PackActionError)>            onErrorCallback,
        ::std::function<void(::std::vector<::std::string> const&)> onCompleteCallback
    );

    MCAPI ::World::PackDetails _getPackDetails(
        ::World::WorldID const                  worldID,
        ::std::shared_ptr<::ContentItem> const& contentItem,
        ::ContentViews const&                   contentViews,
        ::World::PackStatus const               packStatus,
        bool const                              isEduMode
    );

    MCAPI ::World::WorldResourcePackHandler::Contexts
    _initializeContentManagerForWorld(::LevelSummary const& levelSummary);

    MCAPI bool _needToDownloadPack(::std::shared_ptr<::ContentItem> const& contentItem) const;

    MCAPI ::std::optional<::World::PackActionError> _performPackMovement(
        ::World::PackAction const packAction,
        ::LevelSummary const&     levelSummary,
        ::ContentType const       contentType,
        ::std::string const&      packId,
        bool const                isEduMode,
        bool const                force
    );

    MCAPI void _populatePackDetails(
        ::World::WorldID const                    worldID,
        ::std::vector<::World::PackDetails>&      packDetails,
        ::Bedrock::NonOwnerPointer<::ContentView> contentView,
        ::World::PackCollection const&            packCollection,
        ::ContentViews const&                     contentViews,
        ::World::PackStatus const                 packStatus,
        bool const                                isEduMode
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IContentManager&                                         contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>   resourcePackRepository,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>       entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> contentTierManager,
        ::IContentAcquisition&                                     contentAcquisition,
        ::std::unique_ptr<::World::IWorldResourcePackDownloader>   worldResourcePackDownloader,
        ::IMinecraftEventing&                                      eventing
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::World::WorldPacks& $loadPackContentForWorld(::LevelSummary const& levelSummary);

    MCAPI ::World::PackCollection
    $getWorldPackCollection(::LevelSummary const& levelSummary, ::ContentType const contentType, bool const isEduMode);

    MCAPI ::std::optional<::World::PackActionError> $activatePack(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        ::std::string const&  packId,
        bool const            isEduMode,
        bool const            force
    );

    MCAPI ::std::optional<::World::PackActionError> $deactivatePack(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        ::std::string const&  packId,
        bool const            isEduMode,
        bool const            force
    );

    MCAPI ::std::optional<::World::PackActionError> $continuePackActivation(::LevelSummary const& levelSummary);

    MCAPI ::std::optional<::World::PackActionError> $continuePackDeactivation(::LevelSummary const& levelSummary);

    MCAPI void $downloadPacks(
        ::LevelSummary const&                             levelSummary,
        ::std::vector<::std::string> const&               packIds,
        ::std::function<void()>                           onCompleteCallback,
        ::std::function<void(::World::PackDownloadError)> onErrorCallback
    );

    MCAPI ::World::PackDownloadProgressInfo $getDownloadPackProgress();

    MCAPI void $getDownloadingPackTitles(::std::function<void(::std::vector<::std::string>)> packTitlesCallback);

    MCFOLD void $cancelDownloadPack();

    MCAPI void $getPackSizes(
        ::LevelSummary const&                           levelSummary,
        ::std::vector<::std::string> const&             packIds,
        ::std::function<void(uint64)>                   onCompleteCallback,
        ::std::function<void(::World::PackActionError)> onErrorCallback
    );

    MCAPI void $savePacksData();

    MCAPI bool $hasNonAddonBehaviorPacks(::LevelSummary const& levelSummary);

    MCAPI bool $hasBehaviorPacks(::LevelSummary const& levelSummary);

    MCAPI bool $hasLockedPacks(::LevelSummary const& levelSummary) const;

    MCAPI ::std::optional<::World::PackActionError> $changePackPriority(
        ::LevelSummary const& levelSummary,
        ::ContentType const   contentType,
        ::std::string const&  packId,
        int const             fromIndex,
        int const             toIndex
    );

    MCAPI ::World::PackCheckResult
    $checkDlc(::std::string const& levelId, ::PackIdVersion const& packIdVersion, bool const isForRealms);

    MCAPI ::std::vector<::World::PackDetails>
    $getPackDetailsForWorld(::LevelSummary const& levelSummary, ::std::vector<::std::string> const& packIds);

    MCAPI bool $getResourcePacksDirty();

    MCAPI void $refreshPacksData();
    // NOLINTEND
#else // @header-generator platform
    struct Contexts {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace World
