#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/PackCategory.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/deps/core/resource/PackIdVersion.h"
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
        // clang-format off
        virtual ~RepositoryLoaderImpl();
    
        virtual std::shared_ptr<RepositoryLoading::AllRefreshTaskData> buildTaskData(::RepositoryLoading::BuildTaskDataOptions const&);
    
        virtual void applyTaskResults(::RepositoryLoading::AllRefreshTaskData&&);
    
        virtual std::shared_ptr<const RepositoryPacks> getPacks() const;
        // clang-format on
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI std::shared_ptr<RepositoryLoading::AllRefreshTaskData>
               $buildTaskData(::RepositoryLoading::BuildTaskDataOptions const&);

        MCNAPI void $applyTaskResults(::RepositoryLoading::AllRefreshTaskData&&);

        MCNAPI std::shared_ptr<const RepositoryPacks> $getPacks() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackRepository& operator=(ResourcePackRepository const&);
    ResourcePackRepository(ResourcePackRepository const&);
    ResourcePackRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ResourcePackRepository();

    virtual void getResourcePacksByPackId(std::vector<PackInstanceId> const&, std::vector<PackInstance>&) const;

    virtual std::shared_ptr<ResourcePack> getResourcePackForPackId(::PackIdVersion const&) const;

    virtual ::ResourcePack* getResourcePackOfDifferentVersionForPackId(::PackIdVersion const&) const;

    virtual ::ResourcePack* getResourcePackForPackIdInPath(::PackIdVersion const&, ::Core::Path const&) const;

    virtual ::ResourcePack* getResourcePackByUUID(::mce::UUID const&) const;

    virtual ::ResourcePack* getResourcePackForPackIdOwned(::PackIdVersion const&) const;

    virtual std::shared_ptr<ResourcePack> getResourcePackSatisfiesPackId(::PackIdVersion const&, bool) const;

    virtual ::ResourcePack* getResourcePackContainingModule(::PackIdVersion const&) const;

    virtual ::Bedrock::Threading::Async<std::shared_ptr<ResourcePack>> getResourcePackInPath(::Core::Path const&) const;

    virtual bool isResourcePackLoaded(::PackIdVersion const&, ::PackOrigin const&);

    virtual ::PackSourceReport const* getPackLoadingReport() const;

    virtual std::shared_ptr<ResourcePack> getEditorPack() const;

    virtual std::shared_ptr<ResourcePack> getVanillaPack() const;

    virtual bool setServicePacks(std::vector<PackIdVersion>);

    virtual void addServicePacksToStack(::ResourcePackStack&) const;

    virtual void addSystemPacksToStack(::ResourcePackStack&) const;

    virtual void addCachedResourcePacks(std::unordered_map<ContentIdentity, std::string> const*);

    virtual void addWorldResourcePacks(::Core::Path const&);

    virtual void addPremiumWorldTemplateResourcePacks(::Core::Path const&, ::ContentIdentity const&);

    virtual void addWorldPackSource(::Core::Path const&);

    virtual void addPremiumWorldTemplatePackSource(::Core::Path const&, ::ContentIdentity const&);

    virtual void addTempWorldTemplateResourcePacks(::mce::UUID const&);

    virtual void removePacksLoadedFromCache();

    virtual void removePacksLoadedFromWorld();

    virtual ::Core::PathBuffer<std::string> const getResourcePacksPath() const;

    virtual ::Core::PathBuffer<std::string> const getBehaviorPacksPath() const;

    virtual ::Core::PathBuffer<std::string> const getSkinPacksPath() const;

    virtual ::Core::PathBuffer<std::string> const getCustomSkinDirectoryPath() const;

    virtual ::Core::PathBuffer<std::string> const getDevelopmentResourcePacksPath() const;

    virtual ::Core::PathBuffer<std::string> const getDevelopmentBehaviorPacksPath() const;

    virtual ::Core::PathBuffer<std::string> const getDevelopmentSkinPacksPath() const;

    virtual ::Core::PathBuffer<std::string> const getTreatmentPacksPath() const;

    virtual ::Core::PathBuffer<std::string> const getSystemResourcePacksPath() const;

    virtual ::Core::PathBuffer<std::string> const getSystemBehaviorPacksPath() const;

    virtual void refreshPacks();

    virtual ::Bedrock::Threading::Async<void> refreshPacksAsync();

    virtual void requestReloadUserPacks();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> getKeyProvider() const;

    virtual ::PackManifestFactory& getPackManifestFactory();

    virtual ::PackSettingsFactory& getPackSettingsFactory() const;

    virtual ::PackSourceFactory& getPackSourceFactory();

    virtual std::vector<ResourcePack*> getPacksByResourceLocation(::PackOrigin) const;

    virtual std::vector<ResourcePack*> getPacksByType(::PackType) const;

    virtual std::vector<gsl::not_null<std::shared_ptr<ResourcePack>>> getPacksByCategory(::PackCategory) const;

    virtual void forEachPack(std::function<void (const ResourcePack&)> const&) const;

    virtual std::vector<ResourceLocation> getInvalidPacks(::InvalidPacksFilterGroup const&) const;

    virtual std::vector<ResourceLocation> const& getInvalidPacks(::PackType) const;

    virtual void deletePack(::ResourceLocation const&);

    virtual void deletePackFiles(::ResourceLocation const&);

    virtual void postDeletePack(::ResourceLocation const&);

    virtual void untrackInvalidPack(::ResourceLocation const&);

    virtual bool isInitialized() const;

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<IContentSourceRepository>> getContentSourceRepository();

    virtual ::ResourcePackStack createStack(std::vector<PackInstanceId> const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackRepository(
        ::gsl::not_null<std::shared_ptr<RepositoryPacks>>,
        ::PackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentAccessibilityProvider>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> const&,
        ::Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>,
        ::PackSourceFactory&,
        bool,
        std::unique_ptr<IRepositoryFactory>
    );

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<std::shared_ptr<RepositoryPacks>>,
        ::PackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentAccessibilityProvider>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> const&,
        ::Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>,
        ::PackSourceFactory&,
        bool,
        std::unique_ptr<IRepositoryFactory>
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
    MCNAPI void $getResourcePacksByPackId(std::vector<PackInstanceId> const&, std::vector<PackInstance>&) const;

    MCNAPI std::shared_ptr<ResourcePack> $getResourcePackForPackId(::PackIdVersion const&) const;

    MCNAPI ::ResourcePack* $getResourcePackOfDifferentVersionForPackId(::PackIdVersion const&) const;

    MCNAPI ::ResourcePack* $getResourcePackForPackIdInPath(::PackIdVersion const&, ::Core::Path const&) const;

    MCNAPI ::ResourcePack* $getResourcePackByUUID(::mce::UUID const&) const;

    MCNAPI ::ResourcePack* $getResourcePackForPackIdOwned(::PackIdVersion const&) const;

    MCNAPI std::shared_ptr<ResourcePack> $getResourcePackSatisfiesPackId(::PackIdVersion const&, bool) const;

    MCNAPI ::ResourcePack* $getResourcePackContainingModule(::PackIdVersion const&) const;

    MCNAPI ::Bedrock::Threading::Async<std::shared_ptr<ResourcePack>> $getResourcePackInPath(::Core::Path const&) const;

    MCNAPI bool $isResourcePackLoaded(::PackIdVersion const&, ::PackOrigin const&);

    MCNAPI ::PackSourceReport const* $getPackLoadingReport() const;

    MCNAPI std::shared_ptr<ResourcePack> $getEditorPack() const;

    MCNAPI std::shared_ptr<ResourcePack> $getVanillaPack() const;

    MCNAPI bool $setServicePacks(std::vector<PackIdVersion>);

    MCNAPI void $addServicePacksToStack(::ResourcePackStack&) const;

    MCNAPI void $addSystemPacksToStack(::ResourcePackStack&) const;

    MCNAPI void $addCachedResourcePacks(std::unordered_map<ContentIdentity, std::string> const*);

    MCNAPI void $addWorldResourcePacks(::Core::Path const&);

    MCNAPI void $addPremiumWorldTemplateResourcePacks(::Core::Path const&, ::ContentIdentity const&);

    MCNAPI void $addWorldPackSource(::Core::Path const&);

    MCNAPI void $addPremiumWorldTemplatePackSource(::Core::Path const&, ::ContentIdentity const&);

    MCNAPI void $addTempWorldTemplateResourcePacks(::mce::UUID const&);

    MCNAPI void $removePacksLoadedFromCache();

    MCNAPI void $removePacksLoadedFromWorld();

    MCNAPI ::Core::PathBuffer<std::string> const $getResourcePacksPath() const;

    MCNAPI ::Core::PathBuffer<std::string> const $getBehaviorPacksPath() const;

    MCNAPI ::Core::PathBuffer<std::string> const $getSkinPacksPath() const;

    MCNAPI ::Core::PathBuffer<std::string> const $getCustomSkinDirectoryPath() const;

    MCNAPI ::Core::PathBuffer<std::string> const $getDevelopmentResourcePacksPath() const;

    MCNAPI ::Core::PathBuffer<std::string> const $getDevelopmentBehaviorPacksPath() const;

    MCNAPI ::Core::PathBuffer<std::string> const $getDevelopmentSkinPacksPath() const;

    MCNAPI ::Core::PathBuffer<std::string> const $getTreatmentPacksPath() const;

    MCNAPI ::Core::PathBuffer<std::string> const $getSystemResourcePacksPath() const;

    MCNAPI ::Core::PathBuffer<std::string> const $getSystemBehaviorPacksPath() const;

    MCNAPI void $refreshPacks();

    MCNAPI ::Bedrock::Threading::Async<void> $refreshPacksAsync();

    MCNAPI void $requestReloadUserPacks();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> $getKeyProvider() const;

    MCNAPI ::PackManifestFactory& $getPackManifestFactory();

    MCNAPI ::PackSettingsFactory& $getPackSettingsFactory() const;

    MCNAPI ::PackSourceFactory& $getPackSourceFactory();

    MCNAPI std::vector<ResourcePack*> $getPacksByResourceLocation(::PackOrigin) const;

    MCNAPI std::vector<ResourcePack*> $getPacksByType(::PackType) const;

    MCNAPI std::vector<gsl::not_null<std::shared_ptr<ResourcePack>>> $getPacksByCategory(::PackCategory) const;

    MCNAPI void $forEachPack(std::function<void(const ResourcePack&)> const&) const;

    MCNAPI std::vector<ResourceLocation> $getInvalidPacks(::InvalidPacksFilterGroup const&) const;

    MCNAPI std::vector<ResourceLocation> const& $getInvalidPacks(::PackType) const;

    MCNAPI void $deletePack(::ResourceLocation const&);

    MCNAPI void $deletePackFiles(::ResourceLocation const&);

    MCNAPI void $postDeletePack(::ResourceLocation const&);

    MCNAPI void $untrackInvalidPack(::ResourceLocation const&);

    MCNAPI bool $isInitialized() const;

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<IContentSourceRepository>> $getContentSourceRepository();

    MCNAPI ::ResourcePackStack $createStack(std::vector<PackInstanceId> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
