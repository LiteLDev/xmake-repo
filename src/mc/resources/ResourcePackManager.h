#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLoader.h"
#include "mc/deps/core/resource/ResourcePackStackType.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class ContentTierIncompatibleReason;
class IContentTierManager;
class LinkedAssetValidator;
class LoadedResourceData;
class PackInstance;
#if defined(LL_PLAT_A) // @header-generator platform
class PackReport;
class PackSettings;
#else // @header-generator platform
#endif // @header-generator platform
class PackSourceReport;
class ResourceGroup;
class ResourceLocation;
class ResourceLocationPair;
class ResourcePack;
class ResourcePackListener;
#if defined(LL_PLAT_A) // @header-generator platform
class ResourcePackMergeStrategy;
#else // @header-generator platform
#endif // @header-generator platform
class ResourcePackStack;
class TaskGroup;
struct PackIdVersion;
struct StreamableAssetSource;
namespace Core { class Path; }
namespace Core { class PathView; }
namespace mce { class UUID; }
namespace mce { struct Image; }
// clang-format on

class ResourcePackManager : public ::ResourceLoader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_set<gsl::not_null<ResourcePackListener*>>> mListeners;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ResourcePackStack>>                        mLevelStack;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ResourcePackStack>>                        mGlobalStack;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ResourcePackStack>>                        mTreatmentStack;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ResourcePackStack>>                        mBaseGameStack;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ResourcePackStack>>                       mFullStack;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackSourceReport>>                         mLoadingReport;
    ::ll::TypedStorage<8, 24, std::string>                                              mLocaleCode;
    ::ll::TypedStorage<1, 1, bool>                                                      mInitializing;
    ::ll::TypedStorage<1, 1, bool>                                                      mPendingRestack;
    ::ll::TypedStorage<1, 1, bool>                                                      mUseGlobalPackStack;
    ::ll::TypedStorage<1, 1, bool>                                                      mGameplayResourcesLoaded;
    ::ll::UntypedStorage<1, 140>                                                        mFullStackAccess;
    ::ll::TypedStorage<4, 4, uint>                                                      mComposeGeneration;
    ::ll::UntypedStorage<8, 24>                                                         mContentTierManager;
    ::ll::UntypedStorage<8, 24> mFullStackMinEngineVersion_DEPRECATED_DONOTUSE;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::gsl::not_null<::ResourcePackListener*>>> mListeners;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackStack>>                          mLevelStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackStack>>                          mGlobalStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackStack>>                          mTreatmentStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ResourcePackStack>>                          mBaseGameStack;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ResourcePackStack>>                         mFullStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackSourceReport>>                           mLoadingReport;
    ::ll::TypedStorage<8, 32, ::std::string>                                                  mLocaleCode;
    ::ll::TypedStorage<1, 1, bool>                                                            mInitializing;
    ::ll::TypedStorage<1, 1, bool>                                                            mPendingRestack;
    ::ll::TypedStorage<1, 1, bool>                                                            mUseGlobalPackStack;
    ::ll::TypedStorage<1, 1, bool>                                                            mGameplayResourcesLoaded;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                             mFullStackAccess;
    ::ll::TypedStorage<4, 4, uint>                                                            mComposeGeneration;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const>>     mContentTierManager;
    ::ll::TypedStorage<8, 24, ::SemVersion> mFullStackMinEngineVersion_DEPRECATED_DONOTUSE;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ResourcePackManager();
#else // @header-generator platform
    virtual ~ResourcePackManager() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool load(::ResourceLocationPair const&, std::string&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    virtual bool load(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool load(::ResourceLocation const&, std::string&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    virtual bool load(
        ::ResourceLocation const&        resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool load(::ResourceLocation const&, std::string&) const;
#else // @header-generator platform
    virtual bool load(
        ::ResourceLocationPair const&    resourceLocationPair,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool loadText(::ResourceLocation const&, std::string&) const;
#else // @header-generator platform
    virtual bool loadText(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<LoadedResourceData> loadAllVersionsOf(::ResourceLocation const&) const;
#else // @header-generator platform
    virtual ::std::vector<::LoadedResourceData> loadAllVersionsOf(::ResourceLocation const& resourceLocation) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::Image loadTexture(::ResourceLocation const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    virtual ::mce::Image loadTexture(::ResourceLocation const& resourceLocation) const /*override*/;

#endif
    virtual bool isInStreamableLocation(::ResourceLocation const& resourceLocation) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInStreamableLocation(::ResourceLocation const&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    virtual bool isInStreamableLocation(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInStreamableLocation(::ResourceLocation const&) const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getPath(::ResourceLocation const& resourceLocation) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getPath(::ResourceLocation const&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string>
    getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensionList) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getPath(::ResourceLocation const&) const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string>
    getPathContainingResource(::ResourceLocation const& resourceLocation) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getPathContainingResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getPathContainingResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getPathContainingResource(::ResourceLocation const&) const;
#else // @header-generator platform
    virtual ::std::pair<int, ::std::string_view> getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::pair<int, std::string_view> getPackStackIndexOfResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;

    virtual bool hasCapability(std::string_view) const;
    // clang-format on
#else // @header-generator platform
    virtual bool hasCapability(::std::string_view requiredCapability) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourcePackManager(
        std::function<Core::PathBuffer<std::string>()>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentTierManager>> const&,
        bool
#else // @header-generator platform
    MCAPI ResourcePackManager(
        ::std::function<::Core::PathBuffer<::std::string>()>              getPath,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        bool                                                              needsToInitialize
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _calculateMinEngineVersionFromFullStack();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _calculateMinEngineVersionFromFullStack();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _composeFullStack();
#else // @header-generator platform
    MCAPI void _composeFullStack();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<void> _composeFullStackAsync(::TaskGroup&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Bedrock::Threading::Async<void> _composeFullStackAsync(::TaskGroup& taskGroup);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _getResourcesOfGroup(::PackInstance const&, std::string const&, std::vector<Core::Path>&) const;
#else // @header-generator platform
    MCAPI bool _doStackOperation(
        ::ResourcePackStackType                                                          stackType,
        ::brstd::move_only_function<bool(::std::unique_ptr<::ResourcePackStack>*) const> operation
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _updateLanguageSubpacks();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _updateLanguageSubpacks();

    MCAPI ::ContentTierIncompatibleReason canSupportPacks();

    MCAPI void clearPackReports();

    MCAPI int composeFullStack(
        ::ResourcePackStack&       output,
        ::ResourcePackStack const& globalStack,
        ::ResourcePackStack const& levelStack
    ) const;

    MCAPI void ensureSupportedSubpacks();

    MCAPI ::std::vector<::ResourceLocationPair> findAllTexturesInUse() const;

    MCAPI ::std::vector<::PackIdVersion> findInPacks(::ResourceLocation const& resourceLocation) const;

    MCAPI void finishLoadingLinkedAssets(::LinkedAssetValidator& validator);

    MCAPI ::SemVersion getFullStackMinEngineVersion_DEPRECATED() const;

    MCAPI ::std::vector<::PackInstance> getIncompatiblePacks() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool areGameplayResourcesLoaded() const;
#else // @header-generator platform
    MCAPI ::PackInstance*
    getPackForResource(::Core::Path const& resourceName, ::std::optional<::mce::UUID> const& packId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContentTierIncompatibleReason canSupportPacks();
#else // @header-generator platform
    MCAPI ::ResourceGroup getResourcesOfGroup(::std::string const& group) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearPackReports();
#else // @header-generator platform
    MCAPI ::ResourceGroup getResourcesOfGroup(::PackInstance const& packInstance, ::std::string const& group) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearStack(::ResourcePackStackType);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::optional<::StreamableAssetSource> getStreamableSource(
        ::ResourceLocation const&         resourceLocation,
        ::gsl::span<::std::string const>  extensionList,
        ::std::optional<::Core::PathView> tempDirectory
    ) const;

    MCAPI bool
    hasResource(::ResourceLocation const& resourceLocation, ::std::optional<::mce::UUID> const& packIdToMatch) const;

    MCAPI bool hasResource(
        ::ResourcePackStack const&       resourcePackStack,
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int composeFullStack(::ResourcePackStack&, ::ResourcePackStack const&, ::ResourcePackStack const&) const;
#else // @header-generator platform
    MCAPI bool isAssetExtractionViableForFullStack(
        ::std::function<::std::string(::ContentIdentity const&)> getContentKey,
        ::std::string const&                                     sourceContext
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void ensureSupportedSubpacks();
#else // @header-generator platform
    MCAPI void iteratePacks(::std::function<void(::PackInstance const&)> const& pred) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ResourceLocationPair> findAllTexturesInUse() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool load(
        ::ResourceLocation const&    resourceLocation,
        ::std::string&               resourceStream,
        ::std::optional<::mce::UUID> packId
    ) const;

    MCAPI void onLanguageChanged();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<PackIdVersion> findInPacks(::ResourceLocation const&) const;
#else // @header-generator platform
    MCAPI void removeIf(::std::function<bool(::PackInstance const&)> const& pred);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void finishLoadingLinkedAssets(::LinkedAssetValidator&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void removePacks(::std::vector<::gsl::not_null<::ResourcePack const*>> const& packs);

    MCAPI void removeUnsupportedPacks();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<void> forceStackComposeAsync(::TaskGroup&);
#else // @header-generator platform
    MCAPI void setPackSourceReport(::PackSourceReport&& report);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_timed_mutex& getFullStackAccess() const;
#else // @header-generator platform
    MCAPI bool setStack(::std::unique_ptr<::ResourcePackStack> stack, ::ResourcePackStackType stackType);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SemVersion getFullStackMinEngineVersion_DEPRECATED() const;

    MCNAPI std::vector<PackInstance> getIncompatiblePacks() const;

    MCNAPI ::PackInstance* getPackForResource(::Core::Path const&, std::optional<mce::UUID> const&) const;

    MCNAPI ::PackSourceReport const* getPackSourceReport() const;

    MCNAPI std::vector<PackInstance>
    getPacksWhereAssetExtractionNotViable(std::function<std::string(const ContentIdentity&)>, std::string const&) const;

    MCNAPI ::ResourceGroup getResourcesOfGroup(std::string const&) const;

    MCNAPI ::ResourceGroup getResourcesOfGroup(::PackInstance const&, std::string const&) const;

    MCNAPI ::ResourcePackStack const& getStack(::ResourcePackStackType) const;

    MCNAPI std::optional<StreamableAssetSource>
    getStreamableSource(::ResourceLocation const&, ::gsl::span<const std::string>, std::optional<Core::PathView>) const;

    MCNAPI void handlePendingStackChanges();

    MCNAPI ::Bedrock::Threading::Async<void> handlePendingStackChangesAsync(::TaskGroup&);

    MCNAPI bool hasResource(::ResourceLocation const&, std::optional<mce::UUID> const&) const;

    MCNAPI bool
    hasResource(::ResourcePackStack const&, ::ResourceLocation const&, ::gsl::span<const std::string>) const;

    MCNAPI bool hasTexture(::ResourceLocation const&) const;

    MCNAPI bool hasTexture(::ResourcePackStackType, ::ResourceLocation const&) const;

    MCNAPI bool
    isAssetExtractionViableForFullStack(std::function<std::string(const ContentIdentity&)>, std::string const&) const;

    MCNAPI bool isOnlyBaseGamePacks() const;

    MCNAPI void iteratePacks(std::function<void(const PackInstance&)> const&) const;

    MCNAPI bool load(::ResourceLocation const&, std::string&, std::optional<mce::UUID>) const;

    MCNAPI bool loadAllVersionsOf(::ResourceLocation const&, ::ResourcePackMergeStrategy&) const;

    MCNAPI void mergePackReports(std::vector<PackReport>&);

    MCNAPI void notifyJsonResourcesChanged();

    MCNAPI void onBaseGamePackDownloadComplete();

    MCNAPI void onLanguageChanged();

    MCNAPI void onLoadingFinished();

    MCNAPI bool refreshStack(::ResourcePackStackType);

    MCNAPI void regeneratePackAssetSet();

    MCNAPI void registerResourcePackListener(::ResourcePackListener&);

    MCNAPI void removeIf(std::function<bool(const PackInstance&)> const&);

    MCNAPI void removePacks(std::vector<gsl::not_null<const ResourcePack*>> const&);

    MCNAPI void removeUnsupportedPacks();

    MCNAPI void setCanUseGlobalPackStack(bool);

    MCNAPI void setGameplayResourcesLoaded(bool);

    MCNAPI void setPackSourceReport(::PackSourceReport&&);

    MCNAPI bool setStack(std::unique_ptr<ResourcePackStack>, ::ResourcePackStackType);

    MCNAPI bool supportsVibrantVisuals() const;

    MCNAPI void unRegisterAllResourcePackListener();

    MCNAPI void unRegisterResourcePackListener(::ResourcePackListener&);
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _getResourcesOfGroup(
        ::PackInstance const&        packInstance,
        ::std::string const&         group,
        ::std::vector<::Core::Path>& resources
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::function<Core::PathBuffer<std::string>()>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentTierManager>> const&,
        bool
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::function<::Core::PathBuffer<::std::string>()>              getPath,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        bool                                                              needsToInitialize
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $load(::ResourceLocationPair const&, std::string&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    MCAPI bool $load(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $load(::ResourceLocation const&, std::string&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    MCAPI bool $load(
        ::ResourceLocation const&        resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $load(::ResourceLocation const&, std::string&) const;
#else // @header-generator platform
    MCAPI bool $load(
        ::ResourceLocationPair const&    resourceLocationPair,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $loadText(::ResourceLocation const&, std::string&) const;
#else // @header-generator platform
    MCAPI bool $loadText(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<LoadedResourceData> $loadAllVersionsOf(::ResourceLocation const&) const;
#else // @header-generator platform
    MCAPI ::std::vector<::LoadedResourceData> $loadAllVersionsOf(::ResourceLocation const& resourceLocation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Image $loadTexture(::ResourceLocation const&) const;
#else // @header-generator platform
    MCAPI bool $isInStreamableLocation(::ResourceLocation const& resourceLocation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInStreamableLocation(::ResourceLocation const&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    MCAPI bool $isInStreamableLocation(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInStreamableLocation(::ResourceLocation const&) const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> $getPath(::ResourceLocation const& resourceLocation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getPath(::ResourceLocation const&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string>
    $getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensionList) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getPath(::ResourceLocation const&) const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string>
    $getPathContainingResource(::ResourceLocation const& resourceLocation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string>
    $getPathContainingResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> $getPathContainingResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getPathContainingResource(::ResourceLocation const&) const;
#else // @header-generator platform
    MCAPI ::std::pair<int, ::std::string_view> $getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::pair<int, std::string_view>
           $getPackStackIndexOfResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    MCAPI bool $hasCapability(::std::string_view requiredCapability) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasCapability(std::string_view) const;
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::mce::Image $loadTexture(::ResourceLocation const& resourceLocation) const;
#endif
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
