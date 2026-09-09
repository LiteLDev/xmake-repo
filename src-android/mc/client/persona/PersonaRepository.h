#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/DefaultAppearanceManager.h"
#include "mc/client/persona/ICharacterCollection.h"
#include "mc/client/persona/IPersonaCharacterEditor.h"
#include "mc/client/persona/IPersonaPiecePackLoader.h"
#include "mc/client/persona/IPersonaPieceProvider.h"
#include "mc/client/persona/IPersonaRepository.h"
#include "mc/client/persona/PendingAppearance.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/deps/shared_types/BodySizeType.h"
#include "mc/deps/shared_types/PieceSide.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/player/persona/PersonaError.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
class DateManager;
class DlcBatchModel;
class GeometryGroup;
class IAdvancedGraphicsOptions;
class IContentAcquisition;
class IContentKeyProvider;
class IEntitlementManager;
class IMinecraftEventing;
class IOptionRegistry;
class IPackManifestFactory;
class IPackSourceFactory;
class IPersonaImageProvider;
class ISkinRepository;
class Pack;
class PersonaAppearance;
class PersonaCharacterEditor;
class PersonaGeometryBuilder;
class PersonaPiece;
class PersonaPiecePackLoader;
class PersonaRepositoryOfflineManager;
class PersonaSkinRegistrar;
class PersonaTextureBuilder;
class ResourceLoadManager;
class ResourcePackManager;
class SemVersion;
class SkinHandle;
class StoreCatalogRepository;
class TaskGroup;
class TintMapColor;
struct PersonaCharacter;
struct TextureHotReloader;
namespace Core { class PathView; }
namespace Json { class Value; }
namespace Social { class XboxLiveUser; }
namespace mce { class Color; }
namespace persona { class AchievementOfferCollectionManager; }
namespace persona { class CharacterCollection; }
namespace persona { class PersonaCharacterHandleArray; }
namespace persona { class PieceHandle; }
namespace persona { class PieceOfferWrapper; }
namespace persona { struct DefaultAppearance; }
namespace persona { struct FreeItemState; }
namespace persona { struct PersonaCharacterHandle; }
namespace persona { struct PieceToChange; }
namespace persona::color { class ColorInfo; }
namespace splitscreen { class SplitscreenJsonAppearanceManager; }
// clang-format on

class PersonaRepository : public ::IPersonaRepository,
                          public ::IPersonaCharacterEditor,
                          public ::IPersonaPieceProvider,
                          public ::IPersonaPiecePackLoader,
                          public ::persona::ICharacterCollection {
public:
    // PersonaRepository inner types declare
    // clang-format off
    struct PendingPieceDownloadBatch;
    struct StartupParams;
    // clang-format on

    // PersonaRepository inner types define
    struct PendingPieceDownloadBatch {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<std::string>>       mPieceIds;
        ::ll::TypedStorage<8, 16, std::shared_ptr<DlcBatchModel>> mDlcBatch;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingPieceDownloadBatch& operator=(PendingPieceDownloadBatch const&);
        PendingPieceDownloadBatch(PendingPieceDownloadBatch const&);
        PendingPieceDownloadBatch();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PendingPieceDownloadBatch();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct StartupParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>                                     mPersonaDefaultPath;
        ::ll::UntypedStorage<8, 24>                                     mPersonaPremiumPath;
        ::ll::UntypedStorage<8, 24>                                     mPersonaPremiumDevPath;
        ::ll::UntypedStorage<8, 24>                                     mSourceFactory;
        ::ll::UntypedStorage<8, 24>                                     mManifestFactory;
        ::ll::UntypedStorage<8, 24>                                     mKeyProvider;
        ::ll::TypedStorage<8, 16, std::shared_ptr<ActorAnimationGroup>> mActorAnimationGroup;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~StartupParams();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPersonaImageProvider>> mImageProvider;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<ISkinRepository>>> mSkinRepository;
    ::ll::UntypedStorage<8, 24> mResourceLoadManager;
    ::ll::UntypedStorage<8, 24> mEventing;
    ::ll::UntypedStorage<8, 24> mStoreCatalog;
    ::ll::UntypedStorage<8, 24> mContentAcquisition;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>>> mTaskGroup;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<PersonaPiecePackLoader>>> mPiecePackLoader;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<PersonaGeometryBuilder>>> mGeometryBuilder;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<PersonaTextureBuilder>>> mTextureBuilder;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<PersonaRepositoryOfflineManager>>> mOfflineRepositoryManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<PersonaSkinRegistrar>>> mSkinRegistrar;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<persona::CharacterCollection>>> mCharacterRepository;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<PersonaCharacterEditor>>> mCharacterEditor;
    ::ll::TypedStorage<8, 8, std::unique_ptr<splitscreen::SplitscreenJsonAppearanceManager>> mSplitscreenAppearanceManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<persona::AchievementOfferCollectionManager>> mAchievementOfferCollectionManager;
    ::ll::TypedStorage<8, 48, ::persona::DefaultAppearanceManager> mPersonaDefaults;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, persona::PendingAppearance>> mLoadingPersonaAppearances;
    ::ll::TypedStorage<4, 40, std::mutex> mLoadingPersonaAppearancesLock;
    ::ll::TypedStorage<8, 24, std::vector<PersonaRepository::PendingPieceDownloadBatch>> mPendingPieceDownloadBatches;
    ::ll::TypedStorage<8, 40, std::unordered_set<mce::UUID>> mAllQueuedPieceDownloads;
    ::ll::TypedStorage<4, 40, std::mutex> mEmoteParseLock;
    ::ll::TypedStorage<8, 24, std::vector<uint>> mGeneralErrorQueue;
    ::ll::TypedStorage<8, 8, long> mGeneralErrorTimer;
    ::ll::TypedStorage<1, 1, bool> mInitialized;
    ::ll::UntypedStorage<8, 24> mInitPromise;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PersonaRepository();

    virtual bool isInitialized() const;

    virtual bool isOfferLoading(::persona::PieceOfferWrapper const&) const;

    virtual bool isPieceLoaded(::mce::UUID const&) const;

    virtual bool isKnownPersonaPiece(::mce::UUID const&) const;

    virtual bool isKnownPersonaPieceUnloaded(::mce::UUID const&) const;

    virtual bool isLoadingAppearances(::persona::PersonaCharacterHandleArray const&) const;

    virtual bool isLoadingAppearance(::persona::PersonaCharacterHandle const&) const;

    virtual bool isPersonaPieceLoading(::mce::UUID const&) const;

    virtual bool isPersonaPieceInRepo(std::string const&) const;

    virtual bool isPersonaPieceInRepo(::mce::UUID const&) const;

    virtual ::PersonaPiece const& getPersonaPieceFromRepo(std::string const&) const;

    virtual void forEachPersonaPack(std::function<void (const Pack&)> const&) const;

    virtual std::vector<persona::PieceOfferWrapper> getDefaultPieceWrappersOfTypes(std::vector<SharedTypes::persona::PieceType> const&) const;

    virtual ::SemVersion const& getVersionOfKnownPersonaPiecePack(::mce::UUID const&) const;

    virtual ::persona::PersonaCharacterHandle createPersonaOnUser(::persona::ProfileType, ::PersonaAppearance const&, std::string const&, std::function<void (const std::string&)>);

    virtual ::persona::PersonaCharacterHandle createAStartingPersonaOnUser(::persona::ProfileType, std::string const&, int, std::function<void (const std::string&)>);

    virtual ::PersonaAppearance createAppearancefromData(std::vector<persona::PieceHandle> const&, std::unordered_map<SharedTypes::persona::PieceType, TintMapColor> const&, ::mce::Color const&, ::SharedTypes::persona::ArmSizeType const&);

    virtual ::SkinHandle createPersona(::persona::ProfileType, ::PersonaAppearance const&, std::string const&, std::function<void (const std::string&)>);

    virtual ::SkinHandle createAStartingPersona(::persona::ProfileType, ::mce::UUID const&, std::string const&, std::function<void (const std::string&)>);

    virtual ::SkinHandle createAStartingPersona(::persona::ProfileType, std::string const&, uint const, std::function<void (const std::string&)>);

    virtual void tryToReloadPersona(::persona::PersonaCharacterHandle const&, ::PersonaAppearance const&, std::function<void (const std::string&)>);

    virtual bool isAppearanceDefault(::PersonaAppearance const&) const;

    virtual ::PersonaPiece const& getPieceFromClassicSkin(std::string const&, bool const) const;

    virtual void saveOfflinePersonaCatalogCache();

    virtual void loadOfflinePersonaCatalogCache();

    virtual void loadPiecePack(::mce::UUID);

    virtual void queueImportOfPersonaPiecePack(::gsl::not_null<std::shared_ptr<Pack>>);

    virtual ::PersonaCharacter& getCharacter(::persona::PersonaCharacterHandle const&);

    virtual ::PersonaCharacter& getCharacter(std::string const&);

    virtual void removeCharacter(::persona::PersonaCharacterHandle const&);

    virtual void removeCharacter(std::string const&);

    virtual void registerPersonaSkinsForCharacter(::PersonaCharacter&, std::string const&);

    virtual ::persona::PieceHandle getPieceHandle(std::string const&) const;

    virtual ::persona::DefaultAppearance const& getDefaultAppearance(uint const&);

    virtual ::persona::DefaultAppearanceManager const& getDefaultAppearanceManager() const;

    virtual void createSplitscreenUser(std::string, int, ::Json::Value&&);

    virtual ::PersonaAppearance const getSplitscreenAppearance(std::string const&, int const);

    virtual void saveSplitscreenAppearanceData(std::string const&, int, ::Json::Value&&);

    virtual void loadDefaultCharactersIfNeeded();

    virtual void addToOfflinePersonaCatalogMap(::persona::PieceOfferWrapper const&, std::string const);

    virtual std::vector<std::string> const getAllPiecesFromOfflineMapForPlayfabId(std::string const&) const;

    virtual void loadOfflinePieceMapIntoStoreCatalog(::DateManager const&);

    virtual void queuePersonaGeneralError(::persona::PersonaError);

    virtual void downloadAndLoadPieces(std::vector<std::string> const&, std::vector<std::string> const&);

    virtual void update(bool, std::shared_ptr<ActorAnimationGroup>);

    virtual void reloadEmoteAnimationData(std::shared_ptr<ActorAnimationGroup>);

    virtual ::PersonaCharacter& _addCharacter(::persona::ProfileType, std::string const&);

    virtual void changePiece(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const, ::mce::UUID const&, std::string const&, ::persona::FreeItemState const&, ::SharedTypes::persona::PieceSide, std::function<void (bool)>);

    virtual void changePieces(::persona::PersonaCharacterHandle const&, std::vector<persona::PieceToChange> const&, std::function<void (bool)>);

    virtual void removePieceByType(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const, ::SharedTypes::persona::PieceSide const, std::function<void (bool)>);

    virtual void changeEmote(::persona::PersonaCharacterHandle const&, std::string const&, ::persona::FreeItemState const&, int, std::function<void (bool)>);

    virtual void removeEmote(::persona::PersonaCharacterHandle const&, int);

    virtual void removeAllEmotes(::persona::PersonaCharacterHandle const&);

    virtual void removeEmotesWithId(::persona::PersonaCharacterHandle const&, std::string const&);

    virtual void changeClassicSkin(::persona::PersonaCharacterHandle const&, ::SkinHandle const&);

    virtual void changeArmSize(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::ArmSizeType const&, std::function<void (bool)>);

    virtual void changeHeight(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::BodySizeType const&, std::function<void (bool)>);

    virtual void changePersonaTintColor(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const, ::mce::Color const&, ushort, std::function<void (bool)>);

    virtual void changePersonaTintColors(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const, std::vector<persona::color::ColorInfo> const&, std::function<void (bool)>);

    virtual void savePersonaItems(::persona::PersonaCharacterHandle const&);

    virtual void revertPersona(::persona::PersonaCharacterHandle const&, std::function<void (bool)>);

    virtual void revertPersonaPiece(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const&);

    virtual bool doesCharacterHavePieceOfTypeX(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const&);

    virtual bool isPieceOwned(::persona::PieceHandle const&);

    virtual void updatePersonaWithNewAppearance(::PersonaAppearance const&, ::PersonaCharacter&, std::function<void (bool)>);

    virtual std::vector<std::string> const& getPieceIdsByType(::SharedTypes::persona::PieceType) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaRepository(
        std::unique_ptr<IPersonaImageProvider>,
        std::shared_ptr<ISkinRepository>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourcePackManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftEventing>>,
        ::Bedrock::NonOwnerPointer<TextureHotReloader>,
        std::shared_ptr<GeometryGroup>
    );

    MCNAPI ::PersonaAppearance _createAppearanceFromJson(::Json::Value const&);

    MCNAPI void _processEmotesFromLoadedPieces(std::vector<std::string> const&, std::shared_ptr<ActorAnimationGroup>);

    MCNAPI void
    _updatePersona(::PersonaCharacter&, ::PersonaAppearance const&, std::function<void(const std::string&)>);

    MCNAPI ::Bedrock::Threading::Async<void> beginStartupAsyncInit(::PersonaRepository::StartupParams&&);

    MCNAPI void createSplitScreenAppearanceManager(std::string const&);

    MCNAPI ::persona::AchievementOfferCollectionManager&
    getAchievementOfferCollectionManager(::Social::XboxLiveUser&, ::IOptionRegistry&);

    MCNAPI bool isSplitscreenAppearanceManagerReady();

    MCNAPI void onAppResumed();

    MCNAPI void onAppSuspended();

    MCNAPI void onStoreCatalogReady(
        ::gsl::not_null<Bedrock::NonOwnerPointer<StoreCatalogRepository>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentAcquisition>>
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<std::string> getPersonaDevPath();

    MCNAPI static ::Core::PathBuffer<std::string> getPersonaPath();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unique_ptr<IPersonaImageProvider>,
        std::shared_ptr<ISkinRepository>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IAdvancedGraphicsOptions>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourcePackManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IMinecraftEventing>>,
        ::Bedrock::NonOwnerPointer<TextureHotReloader>,
        std::shared_ptr<GeometryGroup>
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
    MCNAPI bool $isInitialized() const;

    MCNAPI bool $isOfferLoading(::persona::PieceOfferWrapper const&) const;

    MCNAPI bool $isPieceLoaded(::mce::UUID const&) const;

    MCNAPI bool $isKnownPersonaPiece(::mce::UUID const&) const;

    MCNAPI bool $isKnownPersonaPieceUnloaded(::mce::UUID const&) const;

    MCNAPI bool $isLoadingAppearances(::persona::PersonaCharacterHandleArray const&) const;

    MCNAPI bool $isLoadingAppearance(::persona::PersonaCharacterHandle const&) const;

    MCNAPI bool $isPersonaPieceLoading(::mce::UUID const&) const;

    MCNAPI bool $isPersonaPieceInRepo(std::string const&) const;

    MCNAPI bool $isPersonaPieceInRepo(::mce::UUID const&) const;

    MCNAPI ::PersonaPiece const& $getPersonaPieceFromRepo(std::string const&) const;

    MCNAPI void $forEachPersonaPack(std::function<void(const Pack&)> const&) const;

    MCNAPI std::vector<persona::PieceOfferWrapper>
           $getDefaultPieceWrappersOfTypes(std::vector<SharedTypes::persona::PieceType> const&) const;

    MCNAPI ::SemVersion const& $getVersionOfKnownPersonaPiecePack(::mce::UUID const&) const;

    MCNAPI ::persona::PersonaCharacterHandle $createPersonaOnUser(
        ::persona::ProfileType,
        ::PersonaAppearance const&,
        std::string const&,
        std::function<void(const std::string&)>
    );

    MCNAPI ::persona::PersonaCharacterHandle $createAStartingPersonaOnUser(
        ::persona::ProfileType,
        std::string const&,
        int,
        std::function<void(const std::string&)>
    );

    MCNAPI ::PersonaAppearance $createAppearancefromData(
        std::vector<persona::PieceHandle> const&,
        std::unordered_map<SharedTypes::persona::PieceType, TintMapColor> const&,
        ::mce::Color const&,
        ::SharedTypes::persona::ArmSizeType const&
    );

    MCNAPI ::SkinHandle $createPersona(
        ::persona::ProfileType,
        ::PersonaAppearance const&,
        std::string const&,
        std::function<void(const std::string&)>
    );

    MCNAPI ::SkinHandle $createAStartingPersona(
        ::persona::ProfileType,
        ::mce::UUID const&,
        std::string const&,
        std::function<void(const std::string&)>
    );

    MCNAPI ::SkinHandle $createAStartingPersona(
        ::persona::ProfileType,
        std::string const&,
        uint const,
        std::function<void(const std::string&)>
    );

    MCNAPI void $tryToReloadPersona(
        ::persona::PersonaCharacterHandle const&,
        ::PersonaAppearance const&,
        std::function<void(const std::string&)>
    );

    MCNAPI bool $isAppearanceDefault(::PersonaAppearance const&) const;

    MCNAPI ::PersonaPiece const& $getPieceFromClassicSkin(std::string const&, bool const) const;

    MCNAPI void $saveOfflinePersonaCatalogCache();

    MCNAPI void $loadOfflinePersonaCatalogCache();

    MCNAPI void $loadPiecePack(::mce::UUID);

    MCNAPI void $queueImportOfPersonaPiecePack(::gsl::not_null<std::shared_ptr<Pack>>);

    MCNAPI ::PersonaCharacter& $getCharacter(::persona::PersonaCharacterHandle const&);

    MCNAPI ::PersonaCharacter& $getCharacter(std::string const&);

    MCNAPI void $removeCharacter(::persona::PersonaCharacterHandle const&);

    MCNAPI void $removeCharacter(std::string const&);

    MCNAPI void $registerPersonaSkinsForCharacter(::PersonaCharacter&, std::string const&);

    MCNAPI ::persona::PieceHandle $getPieceHandle(std::string const&) const;

    MCNAPI ::persona::DefaultAppearance const& $getDefaultAppearance(uint const&);

    MCNAPI ::persona::DefaultAppearanceManager const& $getDefaultAppearanceManager() const;

    MCNAPI void $createSplitscreenUser(std::string, int, ::Json::Value&&);

    MCNAPI ::PersonaAppearance const $getSplitscreenAppearance(std::string const&, int const);

    MCNAPI void $saveSplitscreenAppearanceData(std::string const&, int, ::Json::Value&&);

    MCNAPI void $loadDefaultCharactersIfNeeded();

    MCNAPI void $addToOfflinePersonaCatalogMap(::persona::PieceOfferWrapper const&, std::string const);

    MCNAPI std::vector<std::string> const $getAllPiecesFromOfflineMapForPlayfabId(std::string const&) const;

    MCNAPI void $loadOfflinePieceMapIntoStoreCatalog(::DateManager const&);

    MCNAPI void $queuePersonaGeneralError(::persona::PersonaError);

    MCNAPI void $downloadAndLoadPieces(std::vector<std::string> const&, std::vector<std::string> const&);

    MCNAPI void $update(bool, std::shared_ptr<ActorAnimationGroup>);

    MCNAPI void $reloadEmoteAnimationData(std::shared_ptr<ActorAnimationGroup>);

    MCNAPI ::PersonaCharacter& $_addCharacter(::persona::ProfileType, std::string const&);

    MCNAPI void $changePiece(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::PieceType const,
        ::mce::UUID const&,
        std::string const&,
        ::persona::FreeItemState const&,
        ::SharedTypes::persona::PieceSide,
        std::function<void(bool)>
    );

    MCNAPI void $changePieces(
        ::persona::PersonaCharacterHandle const&,
        std::vector<persona::PieceToChange> const&,
        std::function<void(bool)>
    );

    MCNAPI void $removePieceByType(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::PieceType const,
        ::SharedTypes::persona::PieceSide const,
        std::function<void(bool)>
    );

    MCNAPI void $changeEmote(
        ::persona::PersonaCharacterHandle const&,
        std::string const&,
        ::persona::FreeItemState const&,
        int,
        std::function<void(bool)>
    );

    MCNAPI void $removeEmote(::persona::PersonaCharacterHandle const&, int);

    MCNAPI void $removeAllEmotes(::persona::PersonaCharacterHandle const&);

    MCNAPI void $removeEmotesWithId(::persona::PersonaCharacterHandle const&, std::string const&);

    MCNAPI void $changeClassicSkin(::persona::PersonaCharacterHandle const&, ::SkinHandle const&);

    MCNAPI void $changeArmSize(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::ArmSizeType const&,
        std::function<void(bool)>
    );

    MCNAPI void $changeHeight(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::BodySizeType const&,
        std::function<void(bool)>
    );

    MCNAPI void $changePersonaTintColor(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::PieceType const,
        ::mce::Color const&,
        ushort,
        std::function<void(bool)>
    );

    MCNAPI void $changePersonaTintColors(
        ::persona::PersonaCharacterHandle const&,
        ::SharedTypes::persona::PieceType const,
        std::vector<persona::color::ColorInfo> const&,
        std::function<void(bool)>
    );

    MCNAPI void $savePersonaItems(::persona::PersonaCharacterHandle const&);

    MCNAPI void $revertPersona(::persona::PersonaCharacterHandle const&, std::function<void(bool)>);

    MCNAPI void $revertPersonaPiece(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const&);

    MCNAPI bool
    $doesCharacterHavePieceOfTypeX(::persona::PersonaCharacterHandle const&, ::SharedTypes::persona::PieceType const&);

    MCNAPI bool $isPieceOwned(::persona::PieceHandle const&);

    MCNAPI void
    $updatePersonaWithNewAppearance(::PersonaAppearance const&, ::PersonaCharacter&, std::function<void(bool)>);

    MCNAPI std::vector<std::string> const& $getPieceIdsByType(::SharedTypes::persona::PieceType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
