#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentFlags.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CachedHostPackIdProvider;
class ContentIdentity;
class ContentItemCollection;
class ContentManagerProxy;
class IContentManagerContext;
class IVersionedContentItemCollection;
class Pack;
class TaskGroup;
struct ContentItem;
struct ContentSource;
struct InvalidPacksFilterGroup;
struct RealmPackManagerContentSource;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class FilePathManager; }
namespace Realms { struct Content; }
namespace Realms { struct RealmId; }
namespace StorageManager { class ContentItemProvider; }
namespace StorageManager { class IContentHandler; }
namespace StorageManager { class WorldConverter; }
namespace mce { class UUID; }
// clang-format on

class IContentManager {
public:
    // IContentManager inner types define
    using ConstContentItemPtr = std::shared_ptr<const ContentItem>;

    using ContentItemPtr = std::shared_ptr<ContentItem>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IContentManager() = default;

    virtual ::ContentSource* loadContent(::InvalidPacksFilterGroup const&) = 0;

    virtual ::ContentSource* loadContent(::ContentType, ::ContentFlags) = 0;

    virtual ::ContentSource* loadContentForLevel(std::string const&, ::mce::UUID const&) = 0;

    virtual ::ContentSource* loadContentForRealm(long const) = 0;

    virtual std::unique_ptr<ContentSource> loadContentForRealmsWorld(::Realms::RealmId, std::vector<Realms::Content> const&) = 0;

    virtual void addPackSourceFromPremiumTemplate(::RealmPackManagerContentSource*, ::mce::UUID const&, ::PackType) = 0;

    virtual void addRealmsUnknownPackSources(::RealmPackManagerContentSource*) = 0;

    virtual void addPacksToRealmsUnknownPackSource(std::unique_ptr<Pack>) = 0;

    virtual void addCachedHostPackIdProvider(std::weak_ptr<CachedHostPackIdProvider>) = 0;

    virtual void clearRealmsUnknownPackSource() = 0;

    virtual void removeUnneededItemFromRealmsUnknownContentSource(::mce::UUID const&) = 0;

    virtual ::gsl::not_null<std::shared_ptr<ContentItemCollection>> getGlobalResourcePackCollection(bool) = 0;

    virtual std::unique_ptr<IContentManagerContext> createContext(std::function<bool (const std::shared_ptr<const ContentItem>&)>) = 0;

    virtual void removeContext(::IContentManagerContext&) = 0;

    virtual std::vector<std::unique_ptr<ContentSource>> const& getSources() const = 0;

    virtual std::vector<std::shared_ptr<ContentItem>> getContentItems() const = 0;

    virtual std::shared_ptr<const IVersionedContentItemCollection> getVersionedItems() const = 0;

    virtual void enableCatalogPackSource() = 0;

    virtual void generateItems(::ContentSource*) = 0;

    virtual ::Bedrock::Threading::Async<void> reloadSources(bool) = 0;

    virtual void reloadItems() = 0;

    virtual void reloadViews() = 0;

    virtual void populateDependencies() const = 0;

    virtual void deleteContent(std::vector<std::shared_ptr<const ContentItem>> const&) = 0;

    virtual void deleteContent(std::shared_ptr<const ContentItem> const&) = 0;

    virtual void deleteContentFiles(std::vector<std::shared_ptr<const ContentItem>> const&) = 0;

    virtual void deleteContentFiles(std::shared_ptr<const ContentItem> const&) = 0;

    virtual void postDeleteContent(std::vector<std::shared_ptr<const ContentItem>> const&) = 0;

    virtual void postDeleteContent(std::shared_ptr<const ContentItem> const&) = 0;

    virtual ulong generateContentId() = 0;

    virtual ::Core::PathBuffer<std::string> const getWorldResourcePath(std::string const&) const = 0;

    virtual ::Core::PathBuffer<std::string> const getWorldBehaviorPath(std::string const&) const = 0;

    virtual ::Core::PathBuffer<std::string> const getWorldResourceFolder(std::string const&) const = 0;

    virtual ::Core::PathBuffer<std::string> const getWorldBehaviorFolder(std::string const&) const = 0;

    virtual ::Core::PathBuffer<std::string> const getWorldPath(std::string const&) const = 0;

    virtual ::Core::PathBuffer<std::string> const& getPremiumWorldTemplateFolder(::ContentIdentity const&) = 0;

    virtual ::ContentManagerProxy* getProxy() = 0;

    virtual void beginAsyncInit(::TaskGroup&) = 0;

    virtual bool isInitialized() const = 0;

    virtual void onLanguageChanged() = 0;

    virtual ::Bedrock::PubSub::Subscription refreshContentCatalogPackSource(std::function<void ()>&&) = 0;

    virtual void refreshContentCatalogPackSource() = 0;

    virtual void onRealmsReset(::Realms::RealmId const) = 0;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> getFilePathManager() = 0;

    virtual ::Bedrock::PubSub::Subscription subscribeToSourcesReloadedAsyncCompleted(std::function<void ()>&&) = 0;

    virtual std::shared_ptr<StorageManager::ContentItemProvider> getStorageContentItemProvider() = 0;

    virtual ::StorageManager::IContentHandler& getStorageContentHandler() = 0;

    virtual std::shared_ptr<StorageManager::WorldConverter> getStorageWorldConverter() = 0;

    virtual ::Bedrock::PubSub::Subscription registerToReloadViews(std::function<void ()>) = 0;

    virtual ::Bedrock::PubSub::Subscription registerToDeleteContent(std::function<void ()>) = 0;
    // clang-format on
    // NOLINTEND
};
