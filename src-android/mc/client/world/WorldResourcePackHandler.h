#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace World {

class WorldResourcePackHandler : public ::World::IWorldResourcePackHandler {
public:
    // WorldResourcePackHandler inner types declare
    // clang-format off
    struct Contexts;
    // clang-format on

    // WorldResourcePackHandler inner types define
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
};

} // namespace World
