#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/world/DownloadWorldTemplateError.h"
#include "mc/client/world/DownloadableTemplateManagerBase.h"
#include "mc/client/world/OwnedWorldTemplateData.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class CatalogCollection;
class ExternalContentManager;
class FileArchiver;
class GenericEntitlementChangeListener;
class IContentAcquisition;
class IEntitlementManager;
class IMinecraftEventing;
class IResourcePackRepository;
class IStoreCatalogRepository;
class IToastManager;
class ImportContext;
class ResourcePackManager;
class WorldTemplateManager;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace catalog { struct ImageInfo; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/world/DownloadWorldTemplateError.h"
#include "mc/client/world/DownloadableTemplateManagerBase.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class CatalogCollection;
class ExternalContentManager;
class FileArchiver;
class GenericEntitlementChangeListener;
class IContentAcquisition;
class IEntitlementManager;
class IMinecraftEventing;
class IResourcePackRepository;
class IStoreCatalogRepository;
class IToastManager;
class ImportContext;
class ResourcePackManager;
class WorldTemplateManager;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace World { struct OwnedWorldTemplateData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class OwnedWorldTemplateManager : public ::World::DownloadableTemplateManagerBase {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::map<std::string, std::function<void (std::optional<World::DownloadWorldTemplateError>)>>> mDownloadCallbacks;
    ::ll::UntypedStorage<8, 8> mStoreCatalogRepository;
    ::ll::UntypedStorage<8, 24> mWorldTemplateManager;
    ::ll::UntypedStorage<8, 24> mFileArchiver;
    ::ll::UntypedStorage<8, 24> mContentManager;
    ::ll::UntypedStorage<8, 24> mEntitlementManager;
    ::ll::UntypedStorage<8, 24> mAppPlatform;
    ::ll::UntypedStorage<8, 88> mRefreshPublishder;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTemplateManagerModificationSubscription;
    ::ll::TypedStorage<8, 24, std::vector<World::OwnedWorldTemplateData>> mOwnedTemplateDataList;
    ::ll::UntypedStorage<8, 32> mTemporaryOwnedTemplateDataList;
    ::ll::UntypedStorage<8, 48> mImportTemplateCallback;
    ::ll::TypedStorage<8, 16, std::shared_ptr<CatalogCollection>> mCatalogCollection;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ImportContext>> mImportContext;
    ::ll::UntypedStorage<8, 24> mCachedImagePaths;
    ::ll::TypedStorage<4, 4, int> mItemsFoundOnMarketplace;
    ::ll::TypedStorage<4, 4, int> mItemsThumbnailsFetched;
    ::ll::UntypedStorage<8, 16> mEntitlementChangeListener;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    OwnedWorldTemplateManager& operator=(OwnedWorldTemplateManager const&);
    OwnedWorldTemplateManager(OwnedWorldTemplateManager const&);
    OwnedWorldTemplateManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~OwnedWorldTemplateManager();

    virtual std::optional<World::DownloadWorldTemplateError> downloadWorldTemplate(std::string const&, std::function<void (std::optional<World::DownloadWorldTemplateError>)>);

    virtual void _templateDownloadedCallback(std::string const&, bool);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _localWorldUpdateCallback(std::pair<std::string, bool> const&);

    MCNAPI void getMarketplaceIdFromLocalId(std::string const&, std::function<void(std::optional<const std::string>)>);

    MCNAPI std::vector<World::OwnedWorldTemplateData> const& getOwnedTemplateDataList();

    MCNAPI void importWorldTemplate(std::function<void(std::optional<ImportFailure>, const std::string&)>);

    MCNAPI void isTemplateOwned(std::string const&, std::function<void(bool)>);

    MCNAPI void refresh();

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToRefresh(std::function<void()>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<World::DownloadWorldTemplateError>
    $downloadWorldTemplate(std::string const&, std::function<void(std::optional<World::DownloadWorldTemplateError>)>);

    MCNAPI void $_templateDownloadedCallback(std::string const&, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class OwnedWorldTemplateManager : public ::World::DownloadableTemplateManagerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::std::string, ::std::function<void(::std::optional<::World::DownloadWorldTemplateError>)>>>
                                                                                       mDownloadCallbacks;
    ::ll::TypedStorage<8, 8, ::IStoreCatalogRepository&>                               mStoreCatalogRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>>   mWorldTemplateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FileArchiver>>           mFileArchiver;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager>> mContentManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>    mEntitlementManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>>            mAppPlatform;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                                              mRefreshPublishder;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mTemplateManagerModificationSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::OwnedWorldTemplateData>> mOwnedTemplateDataList;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::OwnedWorldTemplateData>> mTemporaryOwnedTemplateDataList;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::optional<::ImportFailure>, ::std::string const&)>>
                                                                                            mImportTemplateCallback;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CatalogCollection>>                       mCatalogCollection;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ImportContext>>                           mImportContext;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::Core::PathBuffer<::std::string>>> mCachedImagePaths;
    ::ll::TypedStorage<4, 4, int>                                                           mItemsFoundOnMarketplace;
    ::ll::TypedStorage<4, 4, int>                                                           mItemsThumbnailsFetched;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GenericEntitlementChangeListener>>        mEntitlementChangeListener;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnedWorldTemplateManager& operator=(OwnedWorldTemplateManager const&);
    OwnedWorldTemplateManager(OwnedWorldTemplateManager const&);
    OwnedWorldTemplateManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::World::DownloadWorldTemplateError> downloadWorldTemplate(
        ::std::string const&                                                        id,
        ::std::function<void(::std::optional<::World::DownloadWorldTemplateError>)> callback
    ) /*override*/;

    virtual void _templateDownloadedCallback(::std::string const& templateId, bool success) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OwnedWorldTemplateManager(
        ::IStoreCatalogRepository&                              storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver>           fileArchiver,
        ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager> contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>    entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>   worldTemplateManager,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>            appPlatform,
        ::IResourcePackRepository&                              resourcePackRepository,
        ::ResourcePackManager&                                  resourcePackManager,
        ::IMinecraftEventing&                                   eventing,
        ::IToastManager&                                        toastManager,
        ::IContentAcquisition&                                  contentAquisition
    );

    MCAPI void _localWorldUpdateCallback(::std::pair<::std::string, bool> const& updatedTemplateData);

    MCAPI ::std::vector<::std::string> _populateListWithLocalTemplates();

    MCAPI void _populateListWithOwnedNonLocalTemplates(::std::vector<::std::string> const& localPremiumTemplates);

    MCAPI void getMarketplaceIdFromLocalId(
        ::std::string const&                                        localId,
        ::std::function<void(::std::optional<::std::string const>)> callback
    );

    MCAPI void
    importWorldTemplate(::std::function<void(::std::optional<::ImportFailure>, ::std::string const&)> callback);

    MCAPI void isTemplateOwned(::std::string const& templateId, ::std::function<void(bool)> callback);

    MCAPI void refresh();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IStoreCatalogRepository&                              storeCatalogRepository,
        ::Bedrock::NotNullNonOwnerPtr<::FileArchiver>           fileArchiver,
        ::Bedrock::NotNullNonOwnerPtr<::ExternalContentManager> contentManager,
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>    entitlementManager,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>   worldTemplateManager,
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>            appPlatform,
        ::IResourcePackRepository&                              resourcePackRepository,
        ::ResourcePackManager&                                  resourcePackManager,
        ::IMinecraftEventing&                                   eventing,
        ::IToastManager&                                        toastManager,
        ::IContentAcquisition&                                  contentAquisition
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::World::DownloadWorldTemplateError> $downloadWorldTemplate(
        ::std::string const&                                                        id,
        ::std::function<void(::std::optional<::World::DownloadWorldTemplateError>)> callback
    );

    MCAPI void $_templateDownloadedCallback(::std::string const& templateId, bool success);
    // NOLINTEND
};
#else // @header-generator platform
class OwnedWorldTemplateManager {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
