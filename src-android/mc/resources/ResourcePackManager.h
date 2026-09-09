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
class PackReport;
class PackSettings;
class PackSourceReport;
class ResourceGroup;
class ResourceLocation;
class ResourceLocationPair;
class ResourcePack;
class ResourcePackListener;
class ResourcePackMergeStrategy;
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
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ResourcePackManager();

    virtual bool load(::ResourceLocationPair const&, std::string&, ::gsl::span<const std::string>) const;

    virtual bool load(::ResourceLocation const&, std::string&, ::gsl::span<const std::string>) const;

    virtual bool load(::ResourceLocation const&, std::string&) const;

    virtual bool loadText(::ResourceLocation const&, std::string&) const;

    virtual std::vector<LoadedResourceData> loadAllVersionsOf(::ResourceLocation const&) const;

    virtual ::mce::Image loadTexture(::ResourceLocation const&) const;

    virtual bool isInStreamableLocation(::ResourceLocation const&, ::gsl::span<const std::string>) const;

    virtual bool isInStreamableLocation(::ResourceLocation const&) const;

    virtual ::Core::PathBuffer<std::string> getPath(::ResourceLocation const&, ::gsl::span<const std::string>) const;

    virtual ::Core::PathBuffer<std::string> getPath(::ResourceLocation const&) const;

    virtual ::Core::PathBuffer<std::string> getPathContainingResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;

    virtual ::Core::PathBuffer<std::string> getPathContainingResource(::ResourceLocation const&) const;

    virtual std::pair<int, std::string_view> getPackStackIndexOfResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;

    virtual bool hasCapability(std::string_view) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackManager(
        std::function<Core::PathBuffer<std::string>()>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentTierManager>> const&,
        bool
    );

    MCNAPI void _calculateMinEngineVersionFromFullStack();

    MCNAPI void _composeFullStack();

    MCNAPI ::Bedrock::Threading::Async<void> _composeFullStackAsync(::TaskGroup&);

    MCNAPI void _getResourcesOfGroup(::PackInstance const&, std::string const&, std::vector<Core::Path>&) const;

    MCNAPI void _updateLanguageSubpacks();

    MCNAPI bool areGameplayResourcesLoaded() const;

    MCNAPI ::ContentTierIncompatibleReason canSupportPacks();

    MCNAPI void clearPackReports();

    MCNAPI void clearStack(::ResourcePackStackType);

    MCNAPI int composeFullStack(::ResourcePackStack&, ::ResourcePackStack const&, ::ResourcePackStack const&) const;

    MCNAPI void ensureSupportedSubpacks();

    MCNAPI std::vector<ResourceLocationPair> findAllTexturesInUse() const;

    MCNAPI std::vector<PackIdVersion> findInPacks(::ResourceLocation const&) const;

    MCNAPI void finishLoadingLinkedAssets(::LinkedAssetValidator&);

    MCNAPI ::Bedrock::Threading::Async<void> forceStackComposeAsync(::TaskGroup&);

    MCNAPI std::shared_timed_mutex& getFullStackAccess() const;

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::function<Core::PathBuffer<std::string>()>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentTierManager>> const&,
        bool
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
    MCNAPI bool $load(::ResourceLocationPair const&, std::string&, ::gsl::span<const std::string>) const;

    MCNAPI bool $load(::ResourceLocation const&, std::string&, ::gsl::span<const std::string>) const;

    MCNAPI bool $load(::ResourceLocation const&, std::string&) const;

    MCNAPI bool $loadText(::ResourceLocation const&, std::string&) const;

    MCNAPI std::vector<LoadedResourceData> $loadAllVersionsOf(::ResourceLocation const&) const;

    MCNAPI ::mce::Image $loadTexture(::ResourceLocation const&) const;

    MCNAPI bool $isInStreamableLocation(::ResourceLocation const&, ::gsl::span<const std::string>) const;

    MCNAPI bool $isInStreamableLocation(::ResourceLocation const&) const;

    MCNAPI ::Core::PathBuffer<std::string> $getPath(::ResourceLocation const&, ::gsl::span<const std::string>) const;

    MCNAPI ::Core::PathBuffer<std::string> $getPath(::ResourceLocation const&) const;

    MCNAPI ::Core::PathBuffer<std::string>
    $getPathContainingResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;

    MCNAPI ::Core::PathBuffer<std::string> $getPathContainingResource(::ResourceLocation const&) const;

    MCNAPI std::pair<int, std::string_view>
           $getPackStackIndexOfResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;

    MCNAPI bool $hasCapability(std::string_view) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
