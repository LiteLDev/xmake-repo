#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentFlags.h"
#include "mc/client/gui/screens/models/ContentManagerContextCollection.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/gui/screens/models/IContentManager.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class CachedHostPackIdProvider;
class ClientPackSourceFactory;
class ContentCatalogService;
class ContentIdentity;
class ContentItemCollection;
class ContentManagerProxy;
class IContentCatalogPackSource;
class IContentManagerContext;
class IContentManagerFactory;
class IContentTierManager;
class IEntitlementManager;
class ILevelListCache;
class IPackManifestFactory;
class IResourcePackRepository;
class IVersionedContentItemCollection;
class IWorldTemplateManager;
class MutableContentItemCollection;
class Pack;
class PackManifestFactory;
class PackSource;
class ResourcePackManager;
class StoreCatalogRepository;
class TaskGroup;
class WorldTemplateManager;
struct ContentItem;
struct ContentSource;
struct InvalidPacksFilterGroup;
struct RealmPackManagerContentSource;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace ContentManagerUtils { class SourcesAsyncReloader; }
namespace Core { class FilePathManager; }
namespace Realms { class RealmsServicePackSource; }
namespace Realms { struct Content; }
namespace Realms { struct RealmId; }
namespace StorageManager { class ContentItemProvider; }
namespace StorageManager { class IContentHandler; }
namespace StorageManager { class WorldConverter; }
namespace mce { class UUID; }
// clang-format on

class ContentManager : public ::IContentManager,
                       public ::std::enable_shared_from_this<ContentManager>,
                       public ::LevelListCacheObserver {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::weak_ptr<ContentManager>> mSelf;
    ::ll::UntypedStorage<8, 24> mWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::IPackManifestFactory&> mPackManifestFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<MutableContentItemCollection>>> mContent;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ContentSource>>> mContentSources;
    ::ll::TypedStorage<8, 24, ::ContentManagerContextCollection> mContexts;
    ::ll::TypedStorage<8, 8, ulong> mContentId;
    ::ll::UntypedStorage<8, 24> mCatalogResourcePackSource;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<Realms::RealmsServicePackSource>>> mRealmsServicePackSources;
    ::ll::TypedStorage<8, 16, std::weak_ptr<CachedHostPackIdProvider>> mCachedHostPackIdProvider;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentManagerProxy>> mProxy;
    ::ll::TypedStorage<1, 1, bool> mInitialized;
    ::ll::TypedStorage<8, 24, std::string const> WORLD_RESOURCE_PACK_FILENAME;
    ::ll::TypedStorage<8, 24, std::string const> WORLD_BEHAVIOR_PACK_FILENAME;
    ::ll::UntypedStorage<8, 24> mFilePathManager;
    ::ll::UntypedStorage<1, 144> mMutex;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IContentManagerFactory>> mFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ContentManagerUtils::SourcesAsyncReloader>>> mReloadSourcesAsync;
    ::ll::UntypedStorage<8, 24> mEntitlementManager;
    ::ll::UntypedStorage<8, 40> mReloadViewsPublisher;
    ::ll::UntypedStorage<8, 40> mDeleteContentPublisher;
    ::ll::TypedStorage<8, 16, std::weak_ptr<StorageManager::ContentItemProvider>> mWeakStorageContentItemProvider;
    ::ll::UntypedStorage<8, 8> mStorageContentHandler;
    ::ll::UntypedStorage<8, 48> mStorageWorldConverterConstructor;
    ::ll::TypedStorage<8, 16, std::weak_ptr<StorageManager::WorldConverter>> mWeakStorageWorldConverter;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ContentManager& operator=(ContentManager const&);
    ContentManager(ContentManager const&);
    ContentManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ContentManager();

    virtual ::ContentSource* loadContent(::InvalidPacksFilterGroup const&);

    virtual ::ContentSource* loadContent(::ContentType, ::ContentFlags);

    virtual ::ContentSource* loadContentForLevel(std::string const&, ::mce::UUID const&);

    virtual ::ContentSource* loadContentForRealm(long const);

    virtual std::unique_ptr<ContentSource> loadContentForRealmsWorld(::Realms::RealmId, std::vector<Realms::Content> const&);

    virtual void addPackSourceFromPremiumTemplate(::RealmPackManagerContentSource*, ::mce::UUID const&, ::PackType);

    virtual void addRealmsUnknownPackSources(::RealmPackManagerContentSource*);

    virtual void addPacksToRealmsUnknownPackSource(std::unique_ptr<Pack>);

    virtual void addCachedHostPackIdProvider(std::weak_ptr<CachedHostPackIdProvider>);

    virtual void clearRealmsUnknownPackSource();

    virtual void removeUnneededItemFromRealmsUnknownContentSource(::mce::UUID const&);

    virtual ::gsl::not_null<std::shared_ptr<ContentItemCollection>> getGlobalResourcePackCollection(bool);

    virtual std::unique_ptr<IContentManagerContext> createContext(std::function<bool (const std::shared_ptr<const ContentItem>&)>);

    virtual void removeContext(::IContentManagerContext&);

    virtual std::vector<std::unique_ptr<ContentSource>> const& getSources() const;

    virtual std::vector<std::shared_ptr<ContentItem>> getContentItems() const;

    virtual std::shared_ptr<const IVersionedContentItemCollection> getVersionedItems() const;

    virtual void enableCatalogPackSource();

    virtual void generateItems(::ContentSource*);

    virtual ::Bedrock::Threading::Async<void> reloadSources(bool);

    virtual void reloadItems();

    virtual void reloadViews();

    virtual void populateDependencies() const;

    virtual void deleteContent(std::vector<std::shared_ptr<const ContentItem>> const&);

    virtual void deleteContent(std::shared_ptr<const ContentItem> const&);

    virtual void deleteContentFiles(std::vector<std::shared_ptr<const ContentItem>> const&);

    virtual void deleteContentFiles(std::shared_ptr<const ContentItem> const&);

    virtual void postDeleteContent(std::vector<std::shared_ptr<const ContentItem>> const&);

    virtual void postDeleteContent(std::shared_ptr<const ContentItem> const&);

    virtual ulong generateContentId();

    virtual ::Core::PathBuffer<std::string> const getWorldResourcePath(std::string const&) const;

    virtual ::Core::PathBuffer<std::string> const getWorldBehaviorPath(std::string const&) const;

    virtual ::Core::PathBuffer<std::string> const getWorldResourceFolder(std::string const&) const;

    virtual ::Core::PathBuffer<std::string> const getWorldBehaviorFolder(std::string const&) const;

    virtual ::Core::PathBuffer<std::string> const getWorldPath(std::string const&) const;

    virtual ::Core::PathBuffer<std::string> const& getPremiumWorldTemplateFolder(::ContentIdentity const&);

    virtual ::ContentManagerProxy* getProxy();

    virtual void beginAsyncInit(::TaskGroup&);

    virtual bool isInitialized() const;

    virtual void onLanguageChanged();

    virtual ::Bedrock::PubSub::Subscription refreshContentCatalogPackSource(std::function<void ()>&&);

    virtual void refreshContentCatalogPackSource();

    virtual void onRealmsReset(::Realms::RealmId const);

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> getFilePathManager();

    virtual ::Bedrock::PubSub::Subscription subscribeToSourcesReloadedAsyncCompleted(std::function<void ()>&&);

    virtual std::shared_ptr<StorageManager::ContentItemProvider> getStorageContentItemProvider();

    virtual ::StorageManager::IContentHandler& getStorageContentHandler();

    virtual std::shared_ptr<StorageManager::WorldConverter> getStorageWorldConverter();

    virtual ::Bedrock::PubSub::Subscription registerToReloadViews(std::function<void ()>);

    virtual ::Bedrock::PubSub::Subscription registerToDeleteContent(std::function<void ()>);

    virtual void onLevelDeleted(std::string const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContentManager(
        ::ILevelListCache&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::PackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentTierManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<StoreCatalogRepository>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>> const&,
        ::ClientPackSourceFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> const&,
        std::unique_ptr<StorageManager::IContentHandler>,
        std::function<std::shared_ptr<StorageManager::WorldConverter>()>
    );

    MCNAPI ::ContentSource* _addContentSource(std::unique_ptr<ContentSource>);

    MCNAPI ::IContentCatalogPackSource& _createContentCatalogPackSource(bool);

    MCNAPI void _removeContentItemsFromSource(::gsl::not_null<ContentSource*>);

    MCNAPI void _retrievePackSources(::PackType, std::vector<PackSource*>&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Realms::RealmsServicePackSource>>
    _updateOrCreateRealmsServicePackSource(long, ::PackType, std::vector<gsl::not_null<std::shared_ptr<Pack>>>&&);

    MCNAPI void initExistanceTracking(std::weak_ptr<ContentManager>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _addPackSourceIfValid(std::vector<PackSource*>&, ::PackSource*);

    MCNAPI static void _deleteContent(
        std::vector<std::shared_ptr<const ContentItem>> const&,
        std::function<void(ContentSource&, const std::vector<std::shared_ptr<const ContentItem>>&)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ILevelListCache&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::PackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentTierManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<StoreCatalogRepository>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>> const&,
        ::ClientPackSourceFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> const&,
        std::unique_ptr<StorageManager::IContentHandler>,
        std::function<std::shared_ptr<StorageManager::WorldConverter>()>
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
    MCNAPI ::ContentSource* $loadContent(::InvalidPacksFilterGroup const&);

    MCNAPI ::ContentSource* $loadContent(::ContentType, ::ContentFlags);

    MCNAPI ::ContentSource* $loadContentForLevel(std::string const&, ::mce::UUID const&);

    MCNAPI ::ContentSource* $loadContentForRealm(long const);

    MCNAPI std::unique_ptr<ContentSource>
           $loadContentForRealmsWorld(::Realms::RealmId, std::vector<Realms::Content> const&);

    MCNAPI void $addPackSourceFromPremiumTemplate(::RealmPackManagerContentSource*, ::mce::UUID const&, ::PackType);

    MCNAPI void $addRealmsUnknownPackSources(::RealmPackManagerContentSource*);

    MCNAPI void $addPacksToRealmsUnknownPackSource(std::unique_ptr<Pack>);

    MCNAPI void $addCachedHostPackIdProvider(std::weak_ptr<CachedHostPackIdProvider>);

    MCNAPI void $clearRealmsUnknownPackSource();

    MCNAPI void $removeUnneededItemFromRealmsUnknownContentSource(::mce::UUID const&);

    MCNAPI ::gsl::not_null<std::shared_ptr<ContentItemCollection>> $getGlobalResourcePackCollection(bool);

    MCNAPI std::unique_ptr<IContentManagerContext>
           $createContext(std::function<bool(const std::shared_ptr<const ContentItem>&)>);

    MCNAPI void $removeContext(::IContentManagerContext&);

    MCNAPI std::vector<std::unique_ptr<ContentSource>> const& $getSources() const;

    MCNAPI std::vector<std::shared_ptr<ContentItem>> $getContentItems() const;

    MCNAPI std::shared_ptr<const IVersionedContentItemCollection> $getVersionedItems() const;

    MCNAPI void $enableCatalogPackSource();

    MCNAPI void $generateItems(::ContentSource*);

    MCNAPI ::Bedrock::Threading::Async<void> $reloadSources(bool);

    MCNAPI void $reloadItems();

    MCNAPI void $reloadViews();

    MCNAPI void $populateDependencies() const;

    MCNAPI void $deleteContent(std::vector<std::shared_ptr<const ContentItem>> const&);

    MCNAPI void $deleteContent(std::shared_ptr<const ContentItem> const&);

    MCNAPI void $deleteContentFiles(std::vector<std::shared_ptr<const ContentItem>> const&);

    MCNAPI void $deleteContentFiles(std::shared_ptr<const ContentItem> const&);

    MCNAPI void $postDeleteContent(std::vector<std::shared_ptr<const ContentItem>> const&);

    MCNAPI void $postDeleteContent(std::shared_ptr<const ContentItem> const&);

    MCNAPI ulong $generateContentId();

    MCNAPI ::Core::PathBuffer<std::string> const $getWorldResourcePath(std::string const&) const;

    MCNAPI ::Core::PathBuffer<std::string> const $getWorldBehaviorPath(std::string const&) const;

    MCNAPI ::Core::PathBuffer<std::string> const $getWorldResourceFolder(std::string const&) const;

    MCNAPI ::Core::PathBuffer<std::string> const $getWorldBehaviorFolder(std::string const&) const;

    MCNAPI ::Core::PathBuffer<std::string> const $getWorldPath(std::string const&) const;

    MCNAPI ::Core::PathBuffer<std::string> const& $getPremiumWorldTemplateFolder(::ContentIdentity const&);

    MCNAPI ::ContentManagerProxy* $getProxy();

    MCNAPI void $beginAsyncInit(::TaskGroup&);

    MCNAPI bool $isInitialized() const;

    MCNAPI void $onLanguageChanged();

    MCNAPI ::Bedrock::PubSub::Subscription $refreshContentCatalogPackSource(std::function<void()>&&);

    MCNAPI void $refreshContentCatalogPackSource();

    MCNAPI void $onRealmsReset(::Realms::RealmId const);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> $getFilePathManager();

    MCNAPI ::Bedrock::PubSub::Subscription $subscribeToSourcesReloadedAsyncCompleted(std::function<void()>&&);

    MCNAPI std::shared_ptr<StorageManager::ContentItemProvider> $getStorageContentItemProvider();

    MCNAPI ::StorageManager::IContentHandler& $getStorageContentHandler();

    MCNAPI std::shared_ptr<StorageManager::WorldConverter> $getStorageWorldConverter();

    MCNAPI ::Bedrock::PubSub::Subscription $registerToReloadViews(std::function<void()>);

    MCNAPI ::Bedrock::PubSub::Subscription $registerToDeleteContent(std::function<void()>);

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
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentFlags.h"
#include "mc/client/gui/screens/models/ContentManagerContextCollection.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/gui/screens/models/IContentManager.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class CachedHostPackIdProvider;
class ClientPackSourceFactory;
class ContentCatalogService;
class ContentIdentity;
class ContentItemCollection;
class ContentManagerProxy;
class IContentCatalogPackSource;
class IContentManagerContext;
class IContentManagerFactory;
class IContentTierManager;
class IEntitlementManager;
class ILevelListCache;
class IPackManifestFactory;
class IResourcePackRepository;
class IVersionedContentItemCollection;
class IWorldTemplateManager;
class MutableContentItemCollection;
class Pack;
class PackManifestFactory;
class PackSource;
class ResourcePackManager;
class StoreCatalogRepository;
class TaskGroup;
class WorldTemplateManager;
struct ContentItem;
struct ContentSource;
struct InvalidPacksFilterGroup;
struct RealmPackManagerContentSource;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace ContentManagerUtils { class SourcesAsyncReloader; }
namespace Core { class FilePathManager; }
namespace Realms { class RealmsServicePackSource; }
namespace Realms { struct Content; }
namespace Realms { struct RealmId; }
namespace StorageManager { class ContentItemProvider; }
namespace StorageManager { class IContentHandler; }
namespace StorageManager { class WorldConverter; }
namespace mce { class UUID; }
// clang-format on

class ContentManager : public ::IContentManager,
                       public ::LevelListCacheObserver,
                       public ::std::enable_shared_from_this<::ContentManager> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ContentManager>>                                  mSelf;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager>>             mWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::IPackManifestFactory&>                                             mPackManifestFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::MutableContentItemCollection>>> mContent;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ContentSource>>>                  mContentSources;
    ::ll::TypedStorage<8, 24, ::ContentManagerContextCollection>                                  mContexts;
    ::ll::TypedStorage<8, 8, uint64>                                                              mContentId;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IContentCatalogPackSource>> mCatalogResourcePackSource;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::Realms::RealmsServicePackSource>>>
                                                                                      mRealmsServicePackSources;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::CachedHostPackIdProvider>>            mCachedHostPackIdProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContentManagerProxy>>                mProxy;
    ::ll::TypedStorage<1, 1, bool>                                                    mInitialized;
    ::ll::TypedStorage<8, 32, ::std::string const>                                    WORLD_RESOURCE_PACK_FILENAME;
    ::ll::TypedStorage<8, 32, ::std::string const>                                    WORLD_BEHAVIOR_PACK_FILENAME;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager>> mFilePathManager;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                     mMutex;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerFactory>>             mFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::ContentManagerUtils::SourcesAsyncReloader>>>
                                                                                    mReloadSourcesAsync;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>> mEntitlementManager;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mReloadViewsPublisher;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
                                                                                      mDeleteContentPublisher;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::StorageManager::ContentItemProvider>> mWeakStorageContentItemProvider;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::StorageManager::IContentHandler>>>
        mStorageContentHandler;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::StorageManager::WorldConverter>()>>
                                                                                 mStorageWorldConverterConstructor;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::StorageManager::WorldConverter>> mWeakStorageWorldConverter;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentManager& operator=(ContentManager const&);
    ContentManager(ContentManager const&);
    ContentManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentManager() /*override*/ = default;

    virtual ::ContentSource* loadContent(::ContentType contentType, ::ContentFlags flags) /*override*/;

    virtual ::ContentSource* loadContent(::InvalidPacksFilterGroup const& invalidFilter) /*override*/;

    virtual ::ContentSource*
    loadContentForLevel(::std::string const& levelId, ::mce::UUID const& premiumTemplateId) /*override*/;

    virtual ::ContentSource* loadContentForRealm(int64 const realmId) /*override*/;

    virtual ::std::unique_ptr<::ContentSource> loadContentForRealmsWorld(
        ::Realms::RealmId                       realmId,
        ::std::vector<::Realms::Content> const& servicePackData
    ) /*override*/;

    virtual void addPackSourceFromPremiumTemplate(
        ::RealmPackManagerContentSource* source,
        ::mce::UUID const&               premiumTemplateId,
        ::PackType                       packType
    ) /*override*/;

    virtual void addRealmsUnknownPackSources(::RealmPackManagerContentSource* contentSource) /*override*/;

    virtual void addPacksToRealmsUnknownPackSource(::std::unique_ptr<::Pack> pack) /*override*/;

    virtual void addCachedHostPackIdProvider(::std::weak_ptr<::CachedHostPackIdProvider> provider) /*override*/;

    virtual void clearRealmsUnknownPackSource() /*override*/;

    virtual void removeUnneededItemFromRealmsUnknownContentSource(::mce::UUID const& id) /*override*/;

    virtual ::gsl::not_null<::std::shared_ptr<::ContentItemCollection>>
    getGlobalResourcePackCollection(bool isEditorMode) /*override*/;

    virtual ::std::unique_ptr<::IContentManagerContext>
    createContext(::std::function<bool(::std::shared_ptr<::ContentItem const> const&)> contextPredicate) /*override*/;

    virtual void removeContext(::IContentManagerContext& context) /*override*/;

    virtual ::std::vector<::std::unique_ptr<::ContentSource>> const& getSources() const /*override*/;

    virtual ::std::vector<::std::shared_ptr<::ContentItem>> getContentItems() const /*override*/;

    virtual ::std::shared_ptr<::IVersionedContentItemCollection const> getVersionedItems() const /*override*/;

    virtual void enableCatalogPackSource() /*override*/;

    virtual void generateItems(::ContentSource* source) /*override*/;

    virtual ::Bedrock::Threading::Async<void> reloadSources(bool saveSources) /*override*/;

    virtual void reloadItems() /*override*/;

    virtual void reloadViews() /*override*/;

    virtual void populateDependencies() const /*override*/;

    virtual void deleteContent(::std::shared_ptr<::ContentItem const> const& contentItem) /*override*/;

    virtual void deleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& contentItems) /*override*/;

    virtual void deleteContentFiles(::std::shared_ptr<::ContentItem const> const& contentItem) /*override*/;

    virtual void
    deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& contentItems) /*override*/;

    virtual void postDeleteContent(::std::shared_ptr<::ContentItem const> const& contentItem) /*override*/;

    virtual void
    postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& contentItems) /*override*/;

    virtual uint64 generateContentId() /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getWorldResourcePath(::std::string const& levelId) const
        /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getWorldBehaviorPath(::std::string const& levelId) const
        /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getWorldResourceFolder(::std::string const& levelId) const
        /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getWorldBehaviorFolder(::std::string const& levelId) const
        /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getWorldPath(::std::string const& levelId) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const&
    getPremiumWorldTemplateFolder(::ContentIdentity const& templateId) /*override*/;

    virtual ::ContentManagerProxy* getProxy() /*override*/;

    virtual void beginAsyncInit(::TaskGroup& taskGroup) /*override*/;

    virtual bool isInitialized() const /*override*/;

    virtual void onLanguageChanged() /*override*/;

    virtual void refreshContentCatalogPackSource() /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    refreshContentCatalogPackSource(::std::function<void()>&& callback) /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> getFilePathManager() /*override*/;

    virtual void onLevelDeleted(::std::string const& levelId) /*override*/;

    virtual void onRealmsReset(::Realms::RealmId const realmsId) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    subscribeToSourcesReloadedAsyncCompleted(::std::function<void()>&& onSourcesReloadedAsyncCallback) /*override*/;

    virtual ::std::shared_ptr<::StorageManager::ContentItemProvider> getStorageContentItemProvider() /*override*/;

    virtual ::StorageManager::IContentHandler& getStorageContentHandler() /*override*/;

    virtual ::std::shared_ptr<::StorageManager::WorldConverter> getStorageWorldConverter() /*override*/;

    virtual ::Bedrock::PubSub::Subscription registerToReloadViews(::std::function<void()> callback) /*override*/;

    virtual ::Bedrock::PubSub::Subscription registerToDeleteContent(::std::function<void()> callback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContentManager(
        ::ILevelListCache&                                                     levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&           worldTemplateManager,
        ::IResourcePackRepository&                                             resourcePackRepository,
        ::ResourcePackManager&                                                 resourcePackManager,
        ::PackManifestFactory&                                                 packManifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>                   entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const&      contentTierManager,
        ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> const&         storeCatalog,
        ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const&          contentCatalogService,
        ::ClientPackSourceFactory&                                             packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&          filePathManager,
        ::std::unique_ptr<::StorageManager::IContentHandler>                   storageContentHandler,
        ::std::function<::std::shared_ptr<::StorageManager::WorldConverter>()> storageWorldConverterConstructor
    );

    MCAPI ::ContentSource* _loadResourceContent(::ContentType type, ::ContentFlags flags);

    MCAPI void _removeContentItemsFromSource(::gsl::not_null<::ContentSource*> source);

    MCAPI void _retrievePackSources(::PackType packType, ::std::vector<::PackSource*>& packSources);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsServicePackSource> _updateOrCreateRealmsServicePackSource(
        int64                                                       realmId,
        ::PackType                                                  packType,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&& servicePackData
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _deleteContent(
        ::std::vector<::std::shared_ptr<::ContentItem const>> const& contentItems,
        ::std::function<void(::ContentSource&, ::std::vector<::std::shared_ptr<::ContentItem const>> const&)>
            deleteItemCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ILevelListCache&                                                     levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&           worldTemplateManager,
        ::IResourcePackRepository&                                             resourcePackRepository,
        ::ResourcePackManager&                                                 resourcePackManager,
        ::PackManifestFactory&                                                 packManifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>                   entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const&      contentTierManager,
        ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> const&         storeCatalog,
        ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const&          contentCatalogService,
        ::ClientPackSourceFactory&                                             packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&          filePathManager,
        ::std::unique_ptr<::StorageManager::IContentHandler>                   storageContentHandler,
        ::std::function<::std::shared_ptr<::StorageManager::WorldConverter>()> storageWorldConverterConstructor
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ContentSource* $loadContent(::ContentType contentType, ::ContentFlags flags);

    MCAPI ::ContentSource* $loadContent(::InvalidPacksFilterGroup const& invalidFilter);

    MCAPI ::ContentSource* $loadContentForLevel(::std::string const& levelId, ::mce::UUID const& premiumTemplateId);

    MCAPI ::ContentSource* $loadContentForRealm(int64 const realmId);

    MCAPI ::std::unique_ptr<::ContentSource>
    $loadContentForRealmsWorld(::Realms::RealmId realmId, ::std::vector<::Realms::Content> const& servicePackData);

    MCAPI void $addPackSourceFromPremiumTemplate(
        ::RealmPackManagerContentSource* source,
        ::mce::UUID const&               premiumTemplateId,
        ::PackType                       packType
    );

    MCAPI void $addRealmsUnknownPackSources(::RealmPackManagerContentSource* contentSource);

    MCAPI void $addPacksToRealmsUnknownPackSource(::std::unique_ptr<::Pack> pack);

    MCAPI void $addCachedHostPackIdProvider(::std::weak_ptr<::CachedHostPackIdProvider> provider);

    MCAPI void $clearRealmsUnknownPackSource();

    MCAPI void $removeUnneededItemFromRealmsUnknownContentSource(::mce::UUID const& id);

    MCAPI ::gsl::not_null<::std::shared_ptr<::ContentItemCollection>>
    $getGlobalResourcePackCollection(bool isEditorMode);

    MCAPI ::std::unique_ptr<::IContentManagerContext>
    $createContext(::std::function<bool(::std::shared_ptr<::ContentItem const> const&)> contextPredicate);

    MCAPI void $removeContext(::IContentManagerContext& context);

    MCFOLD ::std::vector<::std::unique_ptr<::ContentSource>> const& $getSources() const;

    MCAPI ::std::vector<::std::shared_ptr<::ContentItem>> $getContentItems() const;

    MCFOLD ::std::shared_ptr<::IVersionedContentItemCollection const> $getVersionedItems() const;

    MCAPI void $enableCatalogPackSource();

    MCAPI void $generateItems(::ContentSource* source);

    MCAPI ::Bedrock::Threading::Async<void> $reloadSources(bool saveSources);

    MCAPI void $reloadItems();

    MCAPI void $reloadViews();

    MCAPI void $populateDependencies() const;

    MCAPI void $deleteContent(::std::shared_ptr<::ContentItem const> const& contentItem);

    MCAPI void $deleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& contentItems);

    MCAPI void $deleteContentFiles(::std::shared_ptr<::ContentItem const> const& contentItem);

    MCAPI void $deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& contentItems);

    MCAPI void $postDeleteContent(::std::shared_ptr<::ContentItem const> const& contentItem);

    MCAPI void $postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& contentItems);

    MCAPI uint64 $generateContentId();

    MCAPI ::Core::PathBuffer<::std::string> const $getWorldResourcePath(::std::string const& levelId) const;

    MCAPI ::Core::PathBuffer<::std::string> const $getWorldBehaviorPath(::std::string const& levelId) const;

    MCAPI ::Core::PathBuffer<::std::string> const $getWorldResourceFolder(::std::string const& levelId) const;

    MCAPI ::Core::PathBuffer<::std::string> const $getWorldBehaviorFolder(::std::string const& levelId) const;

    MCAPI ::Core::PathBuffer<::std::string> const $getWorldPath(::std::string const& levelId) const;

    MCAPI ::Core::PathBuffer<::std::string> const& $getPremiumWorldTemplateFolder(::ContentIdentity const& templateId);

    MCAPI ::ContentManagerProxy* $getProxy();

    MCAPI void $beginAsyncInit(::TaskGroup& taskGroup);

    MCFOLD bool $isInitialized() const;

    MCAPI void $onLanguageChanged();

    MCAPI void $refreshContentCatalogPackSource();

    MCAPI ::Bedrock::PubSub::Subscription $refreshContentCatalogPackSource(::std::function<void()>&& callback);

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> $getFilePathManager();

    MCAPI void $onLevelDeleted(::std::string const& levelId);

    MCAPI void $onRealmsReset(::Realms::RealmId const realmsId);

    MCAPI ::Bedrock::PubSub::Subscription
    $subscribeToSourcesReloadedAsyncCompleted(::std::function<void()>&& onSourcesReloadedAsyncCallback);

    MCAPI ::std::shared_ptr<::StorageManager::ContentItemProvider> $getStorageContentItemProvider();

    MCAPI ::StorageManager::IContentHandler& $getStorageContentHandler();

    MCAPI ::std::shared_ptr<::StorageManager::WorldConverter> $getStorageWorldConverter();

    MCAPI ::Bedrock::PubSub::Subscription $registerToReloadViews(::std::function<void()> callback);

    MCAPI ::Bedrock::PubSub::Subscription $registerToDeleteContent(::std::function<void()> callback);
    // NOLINTEND
};
#else // @header-generator platform
class ContentManager {};
#endif // @header-generator platform
#endif // @header-generator platform
