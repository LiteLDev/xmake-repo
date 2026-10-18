#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/PackCategory.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/resource/PackIdVersion.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/resources/IContentSourceRepository.h"
#include "mc/resources/IResourcePackRepository.h"
#include "mc/resources/repository_loading/IRepositoryLoader.h"

// auto generated forward declare list
// clang-format off
class IContentAccessibilityProvider;
class IContentKeyProvider;
class IRepositoryFactory;
class InvalidPacks;
class PackInstance;
class PackManifestFactory;
class PackSettingsFactory;
class PackSourceFactory;
class PackSourceReport;
class RepositoryPacks;
class RepositorySources;
class ResourceLocation;
class ResourcePack;
class ResourcePackRepositoryRefreshQueue;
class ResourcePackStack;
class TaskGroup;
struct InvalidPacksFilterGroup;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct PackIdVersion;
#endif // @header-generator platform
struct PackInstanceId;
namespace Core { class FilePathManager; }
namespace Core { class Path; }
namespace PackCommand { class IPackCommandPipeline; }
namespace RepositoryLoading { struct AllRefreshTaskData; }
namespace RepositoryLoading { struct BuildTaskDataOptions; }
namespace RepositoryLoading { struct VanillaPacks; }
namespace mce { class UUID; }
// clang-format on

class ResourcePackRepository : public ::IResourcePackRepository, public ::IContentSourceRepository {
public:
    // ResourcePackRepository inner types declare
    // clang-format off
    class RepositoryLoaderImpl;
    // clang-format on

    // ResourcePackRepository inner types define
    class RepositoryLoaderImpl : public ::RepositoryLoading::IRepositoryLoader {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ResourcePackRepository&> mRepository;
        // NOLINTEND

    public:
        // prevent constructor by default
        RepositoryLoaderImpl& operator=(RepositoryLoaderImpl const&);
        RepositoryLoaderImpl(RepositoryLoaderImpl const&);
        RepositoryLoaderImpl();

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        virtual ~RepositoryLoaderImpl();
    
        virtual std::shared_ptr<RepositoryLoading::AllRefreshTaskData> buildTaskData(::RepositoryLoading::BuildTaskDataOptions const&);
    
        virtual void applyTaskResults(::RepositoryLoading::AllRefreshTaskData&&);
    
        virtual std::shared_ptr<const RepositoryPacks> getPacks() const;
        // clang-format on
        // NOLINTEND
#else // @header-generator platform
        virtual ::std::shared_ptr<::RepositoryLoading::AllRefreshTaskData>
        buildTaskData(::RepositoryLoading::BuildTaskDataOptions const& ops) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual void applyTaskResults(::RepositoryLoading::AllRefreshTaskData&& taskData) /*override*/;

        virtual ::std::shared_ptr<::RepositoryPacks const> getPacks() const /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::shared_ptr<RepositoryLoading::AllRefreshTaskData>
               $buildTaskData(::RepositoryLoading::BuildTaskDataOptions const&);
#else // @header-generator platform
        MCAPI ::std::shared_ptr<::RepositoryLoading::AllRefreshTaskData>
        $buildTaskData(::RepositoryLoading::BuildTaskDataOptions const& ops);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $applyTaskResults(::RepositoryLoading::AllRefreshTaskData&&);
#else // @header-generator platform
        MCAPI void $applyTaskResults(::RepositoryLoading::AllRefreshTaskData&& taskData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::shared_ptr<const RepositoryPacks> $getPacks() const;
        // NOLINTEND
#else // @header-generator platform
        MCAPI ::std::shared_ptr<::RepositoryPacks const> $getPacks() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                                 mFilePathManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<RepositoryPacks>>>                mAllResourcePacks;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<InvalidPacks>>>                    mInvalidPacks;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IRepositoryFactory>>>              mFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<RepositorySources>>>              mSources;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackSourceReport>>                                 mPackSourceReport;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<RepositoryLoading::VanillaPacks>>> mVanillaPacks;
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>>                                       mServicePacks;
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&>                                            mManifestFactory;
    ::ll::UntypedStorage<8, 24>                                                                 mContentAccessibility;
    ::ll::UntypedStorage<8, 24>                                                                 mCurrentWorldPath;
    ::ll::UntypedStorage<8, 24>                                                 mCurrentPremiumWorldTemplatePath;
    ::ll::TypedStorage<8, 40, std::unordered_map<ContentIdentity, std::string>> mTempCacheContentKeys;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackSettingsFactory>>              mPackSettingsFactory;
    ::ll::TypedStorage<8, 8, ::PackSourceFactory&>                              mPackSourceFactory;
    ::ll::UntypedStorage<8, 24>                                                 mCommands;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>>>       mTaskGroup;
    ::ll::TypedStorage<8, 24, ::ContentIdentity>                                mCurrentPremiumWorldTemplateIdentity;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ResourcePackRepositoryRefreshQueue>>> mRefresher;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager>>               mFilePathManager;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::RepositoryPacks>>>                mAllResourcePacks;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::InvalidPacks>>>                    mInvalidPacks;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IRepositoryFactory>>>              mFactory;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::RepositorySources>>>              mSources;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackSourceReport>>                                 mPackSourceReport;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::RepositoryLoading::VanillaPacks>>> mVanillaPacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackIdVersion>>                                       mServicePacks;
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&>                                                mManifestFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider>> mContentAccessibility;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                              mCurrentWorldPath;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                      mCurrentPremiumWorldTemplatePath;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ContentIdentity, ::std::string>> mTempCacheContentKeys;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackSettingsFactory>>                mPackSettingsFactory;
    ::ll::TypedStorage<8, 8, ::PackSourceFactory&>                                    mPackSourceFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>> mCommands;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::TaskGroup>>>                  mTaskGroup;
    ::ll::TypedStorage<8, 24, ::ContentIdentity> mCurrentPremiumWorldTemplateIdentity;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ResourcePackRepositoryRefreshQueue>>> mRefresher;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    LLAPI void addCustomResourcePackPath(std::filesystem::path const& path, PackType type);
#endif // @header-generator platform

public:
    // prevent constructor by default
    ResourcePackRepository& operator=(ResourcePackRepository const&);
    ResourcePackRepository(ResourcePackRepository const&);
    ResourcePackRepository();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ResourcePackRepository();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~ResourcePackRepository() /*override*/;
#else // LL_PLAT_C
    virtual ~ResourcePackRepository() /*override*/ = default;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void getResourcePacksByPackId(std::vector<PackInstanceId> const&, std::vector<PackInstance>&) const;
#else // @header-generator platform
    virtual void getResourcePacksByPackId(
        ::std::vector<::PackInstanceId> const& packInstanceIds,
        ::std::vector<::PackInstance>&         result
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<ResourcePack> getResourcePackForPackId(::PackIdVersion const&) const;
#else // @header-generator platform
    virtual ::std::shared_ptr<::ResourcePack> getResourcePackForPackId(::PackIdVersion const& idAndVersion) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ResourcePack* getResourcePackOfDifferentVersionForPackId(::PackIdVersion const&) const;
#else // @header-generator platform
    virtual ::ResourcePack* getResourcePackOfDifferentVersionForPackId(::PackIdVersion const& idAndVersion) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ResourcePack* getResourcePackForPackIdInPath(::PackIdVersion const&, ::Core::Path const&) const;
#else // @header-generator platform
    virtual ::ResourcePack*
    getResourcePackForPackIdInPath(::PackIdVersion const& idAndVersion, ::Core::Path const& fullPath) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ResourcePack* getResourcePackByUUID(::mce::UUID const&) const;
#else // @header-generator platform
    virtual ::ResourcePack* getResourcePackByUUID(::mce::UUID const& id) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ResourcePack* getResourcePackForPackIdOwned(::PackIdVersion const&) const;
#else // @header-generator platform
    virtual ::ResourcePack* getResourcePackForPackIdOwned(::PackIdVersion const& idAndVersion) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<ResourcePack> getResourcePackSatisfiesPackId(::PackIdVersion const&, bool) const;
#else // @header-generator platform
    virtual ::std::shared_ptr<::ResourcePack>
    getResourcePackSatisfiesPackId(::PackIdVersion const& idAndVersion, bool requireOwnership) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ResourcePack* getResourcePackContainingModule(::PackIdVersion const&) const;
#else // @header-generator platform
    virtual ::ResourcePack* getResourcePackContainingModule(::PackIdVersion const& idAndVersion) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<std::shared_ptr<ResourcePack>> getResourcePackInPath(::Core::Path const&) const;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::std::shared_ptr<::ResourcePack>>
    getResourcePackInPath(::Core::Path const& path) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isResourcePackLoaded(::PackIdVersion const&, ::PackOrigin const&);
#else // @header-generator platform
    virtual bool isResourcePackLoaded(::PackIdVersion const& identity, ::PackOrigin const& location) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackSourceReport const* getPackLoadingReport() const;
#else // @header-generator platform
    virtual ::PackSourceReport const* getPackLoadingReport() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<ResourcePack> getEditorPack() const;
#else // @header-generator platform
    virtual ::std::shared_ptr<::ResourcePack> getEditorPack() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<ResourcePack> getVanillaPack() const;
#else // @header-generator platform
    virtual ::std::shared_ptr<::ResourcePack> getVanillaPack() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool setServicePacks(std::vector<PackIdVersion>);
#else // @header-generator platform
    virtual bool setServicePacks(::std::vector<::PackIdVersion> servicePackIds) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addServicePacksToStack(::ResourcePackStack&) const;
#else // @header-generator platform
    virtual void addServicePacksToStack(::ResourcePackStack& stack) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addSystemPacksToStack(::ResourcePackStack&) const;
#else // @header-generator platform
    virtual void addSystemPacksToStack(::ResourcePackStack& stack) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addCachedResourcePacks(std::unordered_map<ContentIdentity, std::string> const*);
#else // @header-generator platform
    virtual void
    addCachedResourcePacks(::std::unordered_map<::ContentIdentity, ::std::string> const* tempCacheKeys) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addWorldResourcePacks(::Core::Path const&);
#else // @header-generator platform
    virtual void addWorldResourcePacks(::Core::Path const& levelPath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addPremiumWorldTemplateResourcePacks(::Core::Path const&, ::ContentIdentity const&);
#else // @header-generator platform
    virtual void addPremiumWorldTemplateResourcePacks(
        ::Core::Path const&      worldTemplatePath,
        ::ContentIdentity const& premiumWorldIdentity
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addWorldPackSource(::Core::Path const&);
#else // @header-generator platform
    virtual void addTempWorldTemplateResourcePacks(::mce::UUID const& worldTemplateUUID) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addPremiumWorldTemplatePackSource(::Core::Path const&, ::ContentIdentity const&);
#else // @header-generator platform
    virtual void addWorldPackSource(::Core::Path const& levelPath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addTempWorldTemplateResourcePacks(::mce::UUID const&);
#else // @header-generator platform
    virtual void addPremiumWorldTemplatePackSource(
        ::Core::Path const&      worldTemplatePath,
        ::ContentIdentity const& premiumWorldIdentity
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removePacksLoadedFromCache();
#else // @header-generator platform
    virtual void removePacksLoadedFromCache() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removePacksLoadedFromWorld();
#else // @header-generator platform
    virtual void removePacksLoadedFromWorld() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getResourcePacksPath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getResourcePacksPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getBehaviorPacksPath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getBehaviorPacksPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getSkinPacksPath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getSkinPacksPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getCustomSkinDirectoryPath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getCustomSkinDirectoryPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getDevelopmentResourcePacksPath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getDevelopmentResourcePacksPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getDevelopmentBehaviorPacksPath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getDevelopmentBehaviorPacksPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getDevelopmentSkinPacksPath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getDevelopmentSkinPacksPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getTreatmentPacksPath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getTreatmentPacksPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getSystemResourcePacksPath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getSystemBehaviorPacksPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const getSystemBehaviorPacksPath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const getSystemResourcePacksPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void refreshPacks();
#else // @header-generator platform
    virtual void refreshPacks() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> refreshPacksAsync();
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> refreshPacksAsync() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void requestReloadUserPacks();
#else // @header-generator platform
    virtual void requestReloadUserPacks() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> getKeyProvider() const;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> getKeyProvider() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackManifestFactory& getPackManifestFactory();
#else // @header-generator platform
    virtual ::PackManifestFactory& getPackManifestFactory() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackSettingsFactory& getPackSettingsFactory() const;
#else // @header-generator platform
    virtual ::PackSettingsFactory& getPackSettingsFactory() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackSourceFactory& getPackSourceFactory();
#else // @header-generator platform
    virtual ::PackSourceFactory& getPackSourceFactory() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ResourcePack*> getPacksByResourceLocation(::PackOrigin) const;
#else // @header-generator platform
    virtual ::std::vector<::ResourcePack*> getPacksByResourceLocation(::PackOrigin type) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ResourcePack*> getPacksByType(::PackType) const;
#else // @header-generator platform
    virtual ::std::vector<::ResourcePack*> getPacksByType(::PackType type) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<gsl::not_null<std::shared_ptr<ResourcePack>>> getPacksByCategory(::PackCategory) const;
#else // @header-generator platform
    virtual ::std::vector<::gsl::not_null<::std::shared_ptr<::ResourcePack>>>
    getPacksByCategory(::PackCategory category) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachPack(std::function<void (const ResourcePack&)> const&) const;
#else // @header-generator platform
    virtual void forEachPack(::std::function<void(::ResourcePack const&)> const& callback) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ResourceLocation> getInvalidPacks(::InvalidPacksFilterGroup const&) const;
#else // @header-generator platform
    virtual ::std::vector<::ResourceLocation> const& getInvalidPacks(::PackType type) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ResourceLocation> const& getInvalidPacks(::PackType) const;
#else // @header-generator platform
    virtual ::std::vector<::ResourceLocation> getInvalidPacks(::InvalidPacksFilterGroup const& packTypes) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deletePack(::ResourceLocation const&);
#else // @header-generator platform
    virtual void deletePack(::ResourceLocation const& packLocation) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deletePackFiles(::ResourceLocation const&);
#else // @header-generator platform
    virtual void deletePackFiles(::ResourceLocation const& packLocation) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void postDeletePack(::ResourceLocation const&);
#else // @header-generator platform
    virtual void postDeletePack(::ResourceLocation const& packLocation) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void untrackInvalidPack(::ResourceLocation const&);
#else // @header-generator platform
    virtual void untrackInvalidPack(::ResourceLocation const& packLocation) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInitialized() const;
#else // @header-generator platform
    virtual bool isInitialized() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IContentSourceRepository>> getContentSourceRepository();
#else // @header-generator platform
    virtual ::ResourcePackStack createStack(::std::vector<::PackInstanceId> const& identities) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ResourcePackStack createStack(std::vector<PackInstanceId> const&);
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository> getContentSourceRepository() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourcePackRepository(
        ::gsl::not_null<std::shared_ptr<RepositoryPacks>>,
        ::PackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentAccessibilityProvider>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> const&,
        ::Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>,
        ::PackSourceFactory&,
        bool,
        std::unique_ptr<IRepositoryFactory>
#else // @header-generator platform
    MCAPI ResourcePackRepository(
        ::gsl::not_null<::std::shared_ptr<::RepositoryPacks>>                 repositoryPacks,
        ::PackManifestFactory&                                                manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> const& contentAccessibility,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&         pathManager,
        ::Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>       commands,
        ::PackSourceFactory&                                                  packSourceFactory,
        bool                                                                  initAsync,
        ::std::unique_ptr<::IRepositoryFactory>                               factory
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _removePacksIf(::brstd::function_ref<bool(const ResourcePack&)>);

    MCNAPI void cancelInitialization();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<std::string> getBehaviorPacksPath(::Core::FilePathManager const&);

    MCNAPI static ::Core::PathBuffer<std::string> getDevelopmentBehaviorPacksPath(::Core::FilePathManager const&);

    MCNAPI static ::Core::PathBuffer<std::string> getDevelopmentResourcePacksPath(::Core::FilePathManager const&);

    MCNAPI static ::Core::PathBuffer<std::string> getResourcePacksPath(::Core::FilePathManager const&);
#else // @header-generator platform
    MCAPI void _removePacksIf(::brstd::function_ref<bool(::ResourcePack const&)> callback);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<std::shared_ptr<RepositoryPacks>>,
        ::PackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentAccessibilityProvider>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> const&,
        ::Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>,
        ::PackSourceFactory&,
        bool,
        std::unique_ptr<IRepositoryFactory>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::gsl::not_null<::std::shared_ptr<::RepositoryPacks>>                 repositoryPacks,
        ::PackManifestFactory&                                                manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentAccessibilityProvider> const& contentAccessibility,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&         pathManager,
        ::Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>       commands,
        ::PackSourceFactory&                                                  packSourceFactory,
        bool                                                                  initAsync,
        ::std::unique_ptr<::IRepositoryFactory>                               factory
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $getResourcePacksByPackId(std::vector<PackInstanceId> const&, std::vector<PackInstance>&) const;
#else // @header-generator platform
    MCAPI void $getResourcePacksByPackId(
        ::std::vector<::PackInstanceId> const& packInstanceIds,
        ::std::vector<::PackInstance>&         result
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ResourcePack> $getResourcePackForPackId(::PackIdVersion const&) const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ResourcePack> $getResourcePackForPackId(::PackIdVersion const& idAndVersion) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResourcePack* $getResourcePackOfDifferentVersionForPackId(::PackIdVersion const&) const;
#else // @header-generator platform
    MCAPI ::ResourcePack* $getResourcePackOfDifferentVersionForPackId(::PackIdVersion const& idAndVersion) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResourcePack* $getResourcePackForPackIdInPath(::PackIdVersion const&, ::Core::Path const&) const;
#else // @header-generator platform
    MCAPI ::ResourcePack*
    $getResourcePackForPackIdInPath(::PackIdVersion const& idAndVersion, ::Core::Path const& fullPath) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResourcePack* $getResourcePackByUUID(::mce::UUID const&) const;
#else // @header-generator platform
    MCAPI ::ResourcePack* $getResourcePackByUUID(::mce::UUID const& id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResourcePack* $getResourcePackForPackIdOwned(::PackIdVersion const&) const;
#else // @header-generator platform
    MCAPI ::ResourcePack* $getResourcePackForPackIdOwned(::PackIdVersion const& idAndVersion) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ResourcePack> $getResourcePackSatisfiesPackId(::PackIdVersion const&, bool) const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ResourcePack>
    $getResourcePackSatisfiesPackId(::PackIdVersion const& idAndVersion, bool requireOwnership) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResourcePack* $getResourcePackContainingModule(::PackIdVersion const&) const;
#else // @header-generator platform
    MCAPI ::ResourcePack* $getResourcePackContainingModule(::PackIdVersion const& idAndVersion) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<std::shared_ptr<ResourcePack>> $getResourcePackInPath(::Core::Path const&) const;
#else // @header-generator platform
    MCAPI ::Bedrock::Threading::Async<::std::shared_ptr<::ResourcePack>>
    $getResourcePackInPath(::Core::Path const& path) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isResourcePackLoaded(::PackIdVersion const&, ::PackOrigin const&);
#else // @header-generator platform
    MCAPI bool $isResourcePackLoaded(::PackIdVersion const& identity, ::PackOrigin const& location);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSourceReport const* $getPackLoadingReport() const;
#else // @header-generator platform
    MCFOLD ::PackSourceReport const* $getPackLoadingReport() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ResourcePack> $getEditorPack() const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ResourcePack> $getEditorPack() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ResourcePack> $getVanillaPack() const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ResourcePack> $getVanillaPack() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $setServicePacks(std::vector<PackIdVersion>);
#else // @header-generator platform
    MCAPI bool $setServicePacks(::std::vector<::PackIdVersion> servicePackIds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addServicePacksToStack(::ResourcePackStack&) const;
#else // @header-generator platform
    MCAPI void $addServicePacksToStack(::ResourcePackStack& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addSystemPacksToStack(::ResourcePackStack&) const;
#else // @header-generator platform
    MCAPI void $addSystemPacksToStack(::ResourcePackStack& stack) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addCachedResourcePacks(std::unordered_map<ContentIdentity, std::string> const*);
#else // @header-generator platform
    MCAPI void $addCachedResourcePacks(::std::unordered_map<::ContentIdentity, ::std::string> const* tempCacheKeys);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addWorldResourcePacks(::Core::Path const&);
#else // @header-generator platform
    MCAPI void $addWorldResourcePacks(::Core::Path const& levelPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addPremiumWorldTemplateResourcePacks(::Core::Path const&, ::ContentIdentity const&);
#else // @header-generator platform
    MCAPI void $addPremiumWorldTemplateResourcePacks(
        ::Core::Path const&      worldTemplatePath,
        ::ContentIdentity const& premiumWorldIdentity
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addWorldPackSource(::Core::Path const&);
#else // @header-generator platform
    MCAPI void $addTempWorldTemplateResourcePacks(::mce::UUID const& worldTemplateUUID);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addPremiumWorldTemplatePackSource(::Core::Path const&, ::ContentIdentity const&);
#else // @header-generator platform
    MCAPI void $addWorldPackSource(::Core::Path const& levelPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addTempWorldTemplateResourcePacks(::mce::UUID const&);
#else // @header-generator platform
    MCAPI void $addPremiumWorldTemplatePackSource(
        ::Core::Path const&      worldTemplatePath,
        ::ContentIdentity const& premiumWorldIdentity
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removePacksLoadedFromCache();
#else // @header-generator platform
    MCAPI void $removePacksLoadedFromCache();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removePacksLoadedFromWorld();
#else // @header-generator platform
    MCAPI void $removePacksLoadedFromWorld();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const $getResourcePacksPath() const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> const $getResourcePacksPath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const $getBehaviorPacksPath() const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> const $getBehaviorPacksPath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const $getSkinPacksPath() const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> const $getSkinPacksPath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const $getCustomSkinDirectoryPath() const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> const $getCustomSkinDirectoryPath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const $getDevelopmentResourcePacksPath() const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> const $getDevelopmentResourcePacksPath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const $getDevelopmentBehaviorPacksPath() const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> const $getDevelopmentBehaviorPacksPath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const $getDevelopmentSkinPacksPath() const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> const $getDevelopmentSkinPacksPath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const $getTreatmentPacksPath() const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> const $getTreatmentPacksPath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const $getSystemResourcePacksPath() const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> const $getSystemBehaviorPacksPath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> const $getSystemBehaviorPacksPath() const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> const $getSystemResourcePacksPath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $refreshPacks();
#else // @header-generator platform
    MCAPI void $refreshPacks();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<void> $refreshPacksAsync();
#else // @header-generator platform
    MCAPI ::Bedrock::Threading::Async<void> $refreshPacksAsync();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $requestReloadUserPacks();
#else // @header-generator platform
    MCAPI void $requestReloadUserPacks();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> $getKeyProvider() const;
#else // @header-generator platform
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> $getKeyProvider() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackManifestFactory& $getPackManifestFactory();
#else // @header-generator platform
    MCFOLD ::PackManifestFactory& $getPackManifestFactory();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSettingsFactory& $getPackSettingsFactory() const;
#else // @header-generator platform
    MCFOLD ::PackSettingsFactory& $getPackSettingsFactory() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSourceFactory& $getPackSourceFactory();
#else // @header-generator platform
    MCFOLD ::PackSourceFactory& $getPackSourceFactory();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ResourcePack*> $getPacksByResourceLocation(::PackOrigin) const;
#else // @header-generator platform
    MCAPI ::std::vector<::ResourcePack*> $getPacksByResourceLocation(::PackOrigin type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ResourcePack*> $getPacksByType(::PackType) const;
#else // @header-generator platform
    MCAPI ::std::vector<::ResourcePack*> $getPacksByType(::PackType type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<gsl::not_null<std::shared_ptr<ResourcePack>>> $getPacksByCategory(::PackCategory) const;
#else // @header-generator platform
    MCAPI ::std::vector<::gsl::not_null<::std::shared_ptr<::ResourcePack>>>
    $getPacksByCategory(::PackCategory category) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $forEachPack(std::function<void(const ResourcePack&)> const&) const;
#else // @header-generator platform
    MCAPI void $forEachPack(::std::function<void(::ResourcePack const&)> const& callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ResourceLocation> $getInvalidPacks(::InvalidPacksFilterGroup const&) const;
#else // @header-generator platform
    MCAPI ::std::vector<::ResourceLocation> const& $getInvalidPacks(::PackType type) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ResourceLocation> const& $getInvalidPacks(::PackType) const;
#else // @header-generator platform
    MCAPI ::std::vector<::ResourceLocation> $getInvalidPacks(::InvalidPacksFilterGroup const& packTypes) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deletePack(::ResourceLocation const&);
#else // @header-generator platform
    MCAPI void $deletePack(::ResourceLocation const& packLocation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deletePackFiles(::ResourceLocation const&);
#else // @header-generator platform
    MCAPI void $deletePackFiles(::ResourceLocation const& packLocation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $postDeletePack(::ResourceLocation const&);
#else // @header-generator platform
    MCAPI void $postDeletePack(::ResourceLocation const& packLocation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $untrackInvalidPack(::ResourceLocation const&);
#else // @header-generator platform
    MCAPI void $untrackInvalidPack(::ResourceLocation const& packLocation);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInitialized() const;
#else // @header-generator platform
    MCAPI bool $isInitialized() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IContentSourceRepository>> $getContentSourceRepository();
#else // @header-generator platform
    MCAPI ::ResourcePackStack $createStack(::std::vector<::PackInstanceId> const& identities);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResourcePackStack $createStack(std::vector<PackInstanceId> const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IContentSourceRepository> $getContentSourceRepository();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
