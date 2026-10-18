#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/persona/DefaultSkinType.h"
#include "mc/client/persona/ISkinRepository.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/persona__PackEvictionState.h"
#include "mc/platform/ImagePickingCallback.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class DirectoryPackSource;
class I18n;
class IContentKeyProvider;
class IEntitlementManager;
class IPackManifestFactory;
class IPackSourceFactory;
class IResourcePackRepository;
class IToastManager;
class Pack;
class PackManifest;
class PackSource;
class ResourceLocation;
class ResourcePackManager;
class SerializedSkinRef;
class Skin;
class SkinHandle;
class SkinPack;
class SkinPackDiskLRUIndex;
class TaskGroup;
class ToastMessage;
struct SkinPackMeta;
namespace Core { class FilePathManager; }
namespace Core { class PathView; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace mce { class TextureGroup; }
namespace persona { struct PackEvictionDrainSnapshot; }
namespace persona { struct PackEvictionPass; }
namespace persona { struct PackEvictionTarget; }
namespace persona { struct PackEvictionTelemetrySnapshot; }
// clang-format on

class SkinRepository : public ::ISkinRepository,
                       public ::std::enable_shared_from_this<SkinRepository>,
                       public ::ImagePickingCallback {
#else // @header-generator platform
class SkinRepository {
#endif // @header-generator platform
public:
    // SkinRepository inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct SkinPackEntry;
#else // @header-generator platform
#endif // @header-generator platform
    struct LoadListener;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct SkinPackEntry;
#endif // @header-generator platform
    // clang-format on

    // SkinRepository inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class SkinPackLoadState : uchar {
        Unloaded = 0,
        Loading  = 1,
        Loaded   = 2,
    };
#else // @header-generator platform
    enum class SkinPackLoadState : uchar {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct SkinPackEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                                   mVersion;
        ::ll::TypedStorage<1, 1, ::SkinRepository::SkinPackLoadState> mState;
        ::ll::TypedStorage<8, 8, std::unique_ptr<SkinPack>>           mSkinPack;
        // NOLINTEND
#else // @header-generator platform
    struct LoadListener {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void markLoaded(std::unique_ptr<SkinPack>);
        // NOLINTEND
    };

    struct LoadListener {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::weak_ptr<bool>> mExistenceTracker;
        ::ll::UntypedStorage<8, 48>                    mCallback;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadListener& operator=(LoadListener const&);
        LoadListener(LoadListener const&);
        LoadListener();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~LoadListener();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using EvictionTarget = ::persona::PackEvictionTarget;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                             mPackRepository;
    ::ll::TypedStorage<8, 16, std::weak_ptr<mce::TextureGroup>>                             mTextureGroup;
    ::ll::UntypedStorage<8, 24>                                                             mManifestFactory;
    ::ll::UntypedStorage<8, 24>                                                             mPackSourceFactory;
    ::ll::UntypedStorage<8, 24>                                                             mEntitlementManager;
    ::ll::UntypedStorage<8, 24>                                                             mKeyProvider;
    ::ll::UntypedStorage<8, 24>                                                             mFilePathManager;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::UUID, SkinRepository::SkinPackEntry>> mPackEntries;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackSource>>                                   mAllSkinPacksSource;
    ::ll::TypedStorage<8, 8, ::DirectoryPackSource*>                                        mPremiumSkinPackSource;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SkinPackDiskLRUIndex>>                         mSkinPackDiskLRUIndex;
    ::ll::TypedStorage<1, 1, bool>                                                          mAutoEvictionEnabled;
    ::ll::TypedStorage<8, 192, ::persona::PackEvictionState>                                mEvictionState;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Pack>>                                        mLoadingPack;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<Pack>>>>            mPendingLoads;
    ::ll::UntypedStorage<8, 48>                                                             mOnPickSkin;
    ::ll::TypedStorage<1, 1, bool>                                                          mIsPickingSkin;
    ::ll::TypedStorage<8, 16, std::weak_ptr<IToastManager>>                                 mToastManager;
    ::ll::TypedStorage<8, 24, std::vector<SkinRepository::LoadListener>>                    mLoadListeners;
    ::ll::TypedStorage<1, 1, bool>                                                          mInitialized;
    ::ll::UntypedStorage<8, 16>                                                             mLocRefreshTask;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                                    mTaskGroup;
    ::ll::UntypedStorage<8, 16>                                                             mDiskTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkinRepository();

    virtual void update(::ResourcePackManager&);

    virtual void flushResourceLoaderTasks();

    virtual void addLoadListener(std::weak_ptr<bool>, std::function<void(const mce::UUID&)>);

    virtual bool importSkinPack(::gsl::not_null<std::shared_ptr<Pack>>, bool);

    virtual bool loadCustomSkin(std::string const&, ::SharedTypes::persona::ArmSizeType);

    virtual bool tryLoadSkinPack(::mce::UUID const&, bool);

    virtual bool loadSkinPack(::mce::UUID const&);

    virtual void loadSkinPackAsync(::mce::UUID const&, ::SkinPackMeta const&);

    virtual void unloadAndDeleteSkinPack(::mce::UUID const&);

    virtual void cancelPendingLoads();

    virtual std::vector<const Pack*> const getKnownSkinPacks() const;

    virtual std::vector<const Pack*> const getKnownSkinPacksInPackage() const;

    virtual std::vector<const Pack*> const getKnownSkinPacksInUserDir() const;

    virtual std::vector<const Pack*> const getKnownSkinPacksInPremiumDir() const;

    virtual void forEachPack(std::function<void(const Pack&)> const&) const;

    virtual void forEachLoadedSkinPack(std::function<void(const SkinPack&)> const&) const;

    virtual ::SkinPack* getSkinPackById(::mce::UUID const&) const;

    virtual ::SkinPack* getSkinPackByIdHash(ulong) const;

    virtual ::SemVersion const& getVersionOfKnownSkinPack(::mce::UUID const&) const;

    virtual bool isSkinPackKnown(::mce::UUID const&) const;

    virtual bool isSkinPackLoaded(::mce::UUID const&) const;

    virtual bool isKnownSkinPackUnLoaded(::mce::UUID const&) const;

    virtual bool isSkinPackLoading(::mce::UUID const&) const;

    virtual bool isSkinPackOwned(::ContentIdentity const&) const;

    virtual ::Skin const* getSkinBySerializableName(std::string const&) const;

    virtual ::Skin const* getSkin(::SkinHandle const&) const;

    virtual bool canUseSkin(::SkinHandle const&) const;

    virtual bool canUseSkin(::Skin const*) const;

    virtual ::Core::PathBuffer<Core::BasicStackString<char, 1024>> storeCustomSkin(::ResourceLocation const&);

    virtual ::SkinHandle addCustomSkin(::SerializedSkinRef const&, ::ResourceLocation const&);

    virtual ::SkinHandle addCustomSkin(::persona::DefaultSkinType, ::ResourceLocation const&);

    virtual ::SkinHandle addCustomSkin(::SkinHandle const&);

    virtual bool canPickSkin() const;

    virtual void pickSkin(std::function<void(bool, std::string)>);

    virtual void reloadSkinPackLocText();

    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> getSkinKeyProvider() const;

    virtual ::Skin const* getDefaultSkinBySerializableName(std::string const&) const;

    virtual bool isValidSkin(::ResourceLocation const&) const;

    virtual void loadSkin(::ResourceLocation const&);

    virtual void unloadSkin(::ResourceLocation const&);

    virtual bool loadCustomSkinTexture(::ResourceLocation const&);

    virtual void beginAsyncInit(::TaskGroup&);

    virtual bool isInitialized() const;

    virtual ulong getLoadedSkinPackCount() const;

    virtual ulong getLoadingSkinPackCount() const;

    virtual ulong getUnloadedSkinPackCount() const;

    virtual void deleteUnreferencedCustomSkinFiles(std::vector<SkinHandle> const&);

    virtual ::Core::PathBuffer<std::string> getCustomSkinDirectoryPath() const;

    virtual std::optional<Core::PathBuffer<std::string>> getLegacyCustomSkinDirectoryPath() const;

    virtual bool migrateCustomSkinFileFromLegacy(::Core::PathView);

    virtual void onImagePickingSuccess(std::string const&);

    virtual void onImagePickingCanceled();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SkinRepository(
        std::shared_ptr<mce::TextureGroup>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IPackManifestFactory>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IPackSourceFactory>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>>
    );

    MCNAPI bool _loadSkinPack(::gsl::not_null<std::shared_ptr<Pack>>, bool);

    MCNAPI bool _tryLoadSkinPack(::gsl::not_null<std::shared_ptr<Pack>>, bool, bool);

    MCNAPI void enableSkinPackAutoEviction();

    MCNAPI void registerToastManager(std::shared_ptr<IToastManager>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<mce::TextureGroup>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IPackManifestFactory>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IPackSourceFactory>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>>
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
    MCNAPI void $update(::ResourcePackManager&);

    MCNAPI void $flushResourceLoaderTasks();

    MCNAPI void $addLoadListener(std::weak_ptr<bool>, std::function<void(const mce::UUID&)>);

    MCNAPI bool $importSkinPack(::gsl::not_null<std::shared_ptr<Pack>>, bool);

    MCNAPI bool $loadCustomSkin(std::string const&, ::SharedTypes::persona::ArmSizeType);

    MCNAPI bool $tryLoadSkinPack(::mce::UUID const&, bool);

    MCNAPI bool $loadSkinPack(::mce::UUID const&);

    MCNAPI void $loadSkinPackAsync(::mce::UUID const&, ::SkinPackMeta const&);

    MCNAPI void $unloadAndDeleteSkinPack(::mce::UUID const&);

    MCNAPI void $cancelPendingLoads();

    MCNAPI std::vector<const Pack*> const $getKnownSkinPacks() const;

    MCNAPI std::vector<const Pack*> const $getKnownSkinPacksInPackage() const;

    MCNAPI std::vector<const Pack*> const $getKnownSkinPacksInUserDir() const;

    MCNAPI std::vector<const Pack*> const $getKnownSkinPacksInPremiumDir() const;

    MCNAPI void $forEachPack(std::function<void(const Pack&)> const&) const;

    MCNAPI void $forEachLoadedSkinPack(std::function<void(const SkinPack&)> const&) const;

    MCNAPI ::SkinPack* $getSkinPackById(::mce::UUID const&) const;

    MCNAPI ::SkinPack* $getSkinPackByIdHash(ulong) const;

    MCNAPI ::SemVersion const& $getVersionOfKnownSkinPack(::mce::UUID const&) const;

    MCNAPI bool $isSkinPackKnown(::mce::UUID const&) const;

    MCNAPI bool $isSkinPackLoaded(::mce::UUID const&) const;

    MCNAPI bool $isKnownSkinPackUnLoaded(::mce::UUID const&) const;

    MCNAPI bool $isSkinPackLoading(::mce::UUID const&) const;

    MCNAPI bool $isSkinPackOwned(::ContentIdentity const&) const;

    MCNAPI ::Skin const* $getSkinBySerializableName(std::string const&) const;

    MCNAPI ::Skin const* $getSkin(::SkinHandle const&) const;

    MCNAPI bool $canUseSkin(::SkinHandle const&) const;

    MCNAPI bool $canUseSkin(::Skin const*) const;

    MCNAPI ::Core::PathBuffer<Core::BasicStackString<char, 1024>> $storeCustomSkin(::ResourceLocation const&);

    MCNAPI ::SkinHandle $addCustomSkin(::SerializedSkinRef const&, ::ResourceLocation const&);

    MCNAPI ::SkinHandle $addCustomSkin(::persona::DefaultSkinType, ::ResourceLocation const&);

    MCNAPI ::SkinHandle $addCustomSkin(::SkinHandle const&);

    MCNAPI bool $canPickSkin() const;

    MCNAPI void $pickSkin(std::function<void(bool, std::string)>);

    MCNAPI void $reloadSkinPackLocText();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> $getSkinKeyProvider() const;

    MCNAPI ::Skin const* $getDefaultSkinBySerializableName(std::string const&) const;

    MCNAPI bool $isValidSkin(::ResourceLocation const&) const;

    MCNAPI void $loadSkin(::ResourceLocation const&);

    MCNAPI void $unloadSkin(::ResourceLocation const&);

    MCNAPI bool $loadCustomSkinTexture(::ResourceLocation const&);

    MCNAPI void $beginAsyncInit(::TaskGroup&);

    MCNAPI bool $isInitialized() const;

    MCNAPI ulong $getLoadedSkinPackCount() const;

    MCNAPI ulong $getLoadingSkinPackCount() const;

    MCNAPI ulong $getUnloadedSkinPackCount() const;

    MCNAPI void $deleteUnreferencedCustomSkinFiles(std::vector<SkinHandle> const&);

    MCNAPI ::Core::PathBuffer<std::string> $getCustomSkinDirectoryPath() const;

    MCNAPI std::optional<Core::PathBuffer<std::string>> $getLegacyCustomSkinDirectoryPath() const;

    MCNAPI bool $migrateCustomSkinFileFromLegacy(::Core::PathView);

    MCNAPI void $onImagePickingSuccess(std::string const&);

    MCNAPI void $onImagePickingCanceled();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct SkinPackEntry {};
#endif // @header-generator platform
};
