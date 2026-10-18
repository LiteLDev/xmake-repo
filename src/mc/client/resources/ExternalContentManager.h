#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/resources/LoadImportedLevelData.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ExternalContentManagerProxy;
class IContentKeyProvider;
class IResourcePackRepository;
class ImportContext;
class LevelLoader;
class PackManifest;
class PackManifestFactory;
class PackReport;
class PackSourceFactory;
class PersonaRepository;
class ResourceLoadManager;
class ResourcePackManager;
class SkinRepository;
class TaskGroup;
class WorldTemplateManager;
struct PackAccessStrategies;
namespace Core { class Path; }
namespace ImportCompleteStep { class IImporters; }
// clang-format on

class ExternalContentManager : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/resources/LoadImportedLevelData.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ExternalContentManagerProxy;
class IContentKeyProvider;
class IResourcePackRepository;
class ImportContext;
class LevelLoader;
class PackManifest;
class PackManifestFactory;
class PackReport;
class PackSourceFactory;
class PersonaRepository;
class ResourceLoadManager;
class ResourcePackManager;
class SkinRepository;
class TaskGroup;
class WorldTemplateManager;
namespace Core { class Path; }
// clang-format on

class ExternalContentManager : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
class ExternalContentManager {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ExternalContentManager inner types declare
    // clang-format off
    struct ImportRequestData;
    struct LoadingContentData;
    struct LoadingContentDataHasher;
    // clang-format on

    // ExternalContentManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ImportRequestData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<ImportContext>> mContext;
        ::ll::UntypedStorage<8, 24>                               mMcContentPath;
        ::ll::TypedStorage<1, 1, bool>                            mFromTemp;
        ::ll::TypedStorage<4, 4, ::LoadImportedLevelData>         mLoadLevelData;
        ::ll::TypedStorage<1, 1, bool>                            mTitleLocked;
        ::ll::TypedStorage<8, 24, std::string>                    mLevelId;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ImportRequestData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ImportContext>>      mContext;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string> const> mMcContentPath;
        ::ll::TypedStorage<1, 1, bool>                                     mFromTemp;
        ::ll::TypedStorage<4, 4, ::LoadImportedLevelData>                  mLoadLevelData;
        ::ll::TypedStorage<1, 1, bool>                                     mTitleLocked;
        ::ll::TypedStorage<8, 32, ::std::string>                           mLevelId;
        // NOLINTEND
    };
#else // @header-generator platform
    struct ImportRequestData {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        ImportRequestData& operator=(ImportRequestData const&);
        ImportRequestData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ImportRequestData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct LoadingContentData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PackType>          packType;
        ::ll::TypedStorage<8, 48, ::ResourceLocation> packLocation;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadingContentData& operator=(LoadingContentData const&);
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct LoadingContentData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PackType>          packType;
        ::ll::TypedStorage<8, 56, ::ResourceLocation> packLocation;
        // NOLINTEND
    };
#else // @header-generator platform
    struct LoadingContentData {};
#endif // @header-generator platform
#endif // @header-generator platform

    struct LoadingContentDataHasher {};
#if defined(LL_PLAT_A) // @header-generator platform

    using Importer = std::function<void(
        std::shared_ptr<ImportContext>,
        const Core::PathBuffer<std::string>&,
        bool,
        LoadImportedLevelData,
        bool,
        bool
    )>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mLevelLoader;
    ::ll::TypedStorage<1, 1, bool> mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&> mPackRepository;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&> mPackManager;
    ::ll::UntypedStorage<8, 24> mTemplateManager;
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&> mManifestFactory;
    ::ll::UntypedStorage<8, 24> mKeyProvider;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SkinRepository>> mSkinRepository;
    ::ll::TypedStorage<8, 8, ::PersonaRepository&> mPersonaRepository;
    ::ll::TypedStorage<8, 8, ::PackSourceFactory&> mPackSourceFactory;
    ::ll::UntypedStorage<8, 24> mResourceLoadManager;
    ::ll::TypedStorage<1, 1, bool> mContentInTransit;
    ::ll::TypedStorage<8, 48, std::queue<ExternalContentManager::ImportRequestData, std::deque<ExternalContentManager::ImportRequestData>>> mQueuedContent;
    ::ll::UntypedStorage<8, 24> mTempImportFolder;
    ::ll::TypedStorage<8, 40, std::unordered_set<ExternalContentManager::LoadingContentData, ExternalContentManager::LoadingContentDataHasher, std::equal_to<ExternalContentManager::LoadingContentData>, std::allocator<ExternalContentManager::LoadingContentData>>> mLoadingContent;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mIOTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ExternalContentManagerProxy>> mProxy;
    ::ll::TypedStorage<8, 16, std::shared_ptr<void>> mExistence;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalContentManager& operator=(ExternalContentManager const&);
    ExternalContentManager(ExternalContentManager const&);
    ExternalContentManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ExternalContentManager();

    virtual void importContent(std::shared_ptr<ImportContext>, ::Core::PathBuffer<std::string> const&, bool, ::LoadImportedLevelData, bool, bool, std::string const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExternalContentManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelLoader>> const&,
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::PackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        std::shared_ptr<SkinRepository>,
        ::PersonaRepository&,
        ::PackSourceFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        bool
    );

    MCNAPI void _importMCWorld(
        std::shared_ptr<ImportContext>,
        ::Core::Path const&,
        bool,
        ::LoadImportedLevelData,
        std::string const&
    );

    MCNAPI void _packImportCompleted();

    MCNAPI std::function<void(
        std::shared_ptr<ImportContext>,
        const Core::PathBuffer<std::string>&,
        bool,
        LoadImportedLevelData,
        bool,
        bool
    )>
           createWeakImporter();

    MCNAPI std::vector<ResourceLocation> getLoadingPacks(::PackType) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelLoader>> const&,
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::PackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        std::shared_ptr<SkinRepository>,
        ::PersonaRepository&,
        ::PackSourceFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
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
    MCNAPI void $importContent(
        std::shared_ptr<ImportContext>,
        ::Core::PathBuffer<std::string> const&,
        bool,
        ::LoadImportedLevelData,
        bool,
        bool,
        std::string const&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

    using Importer = ::std::function<void(
        ::std::shared_ptr<::ImportContext>,
        ::Core::PathBuffer<::std::string> const&,
        bool,
        ::LoadImportedLevelData,
        bool,
        bool
    )>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelLoader>>               mLevelLoader;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&>                                  mPackRepository;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                      mPackManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>>      mTemplateManager;
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&>                                      mManifestFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>> mKeyProvider;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SkinRepository>>                        mSkinRepository;
    ::ll::TypedStorage<8, 8, ::PersonaRepository&>                                        mPersonaRepository;
    ::ll::TypedStorage<8, 8, ::PackSourceFactory&>                                        mPackSourceFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>>       mResourceLoadManager;
    ::ll::TypedStorage<1, 1, bool>                                                        mContentInTransit;
    ::ll::TypedStorage<
        8,
        40,
        ::std::queue<
            ::ExternalContentManager::ImportRequestData,
            ::std::deque<::ExternalContentManager::ImportRequestData>>>
                                                                 mQueuedContent;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mTempImportFolder;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_set<
            ::ExternalContentManager::LoadingContentData,
            ::ExternalContentManager::LoadingContentDataHasher,
            ::std::equal_to<::ExternalContentManager::LoadingContentData>>>
                                                                               mLoadingContent;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                   mIOTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ExternalContentManagerProxy>> mProxy;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<void>>                         mExistence;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalContentManager& operator=(ExternalContentManager const&);
    ExternalContentManager(ExternalContentManager const&);
    ExternalContentManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExternalContentManager() /*override*/ = default;

    virtual void importContent(
        ::std::shared_ptr<::ImportContext>       context,
        ::Core::PathBuffer<::std::string> const& mcContentPath,
        bool                                     fromTemp,
        ::LoadImportedLevelData                  loadLevelData,
        bool                                     isSubcomponent,
        bool                                     isTitleLocked,
        ::std::string const&                     levelId
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExternalContentManager(
        ::Bedrock::NotNullNonOwnerPtr<::LevelLoader> const&               levelLoader,
        ::IResourcePackRepository&                                        packRepository,
        ::ResourcePackManager&                                            packManager,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&      templateManager,
        ::PackManifestFactory&                                            manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::shared_ptr<::SkinRepository>                               skinRepo,
        ::PersonaRepository&                                              personaRepo,
        ::PackSourceFactory&                                              packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>              resourceLoadManager,
        bool                                                              isEditorModeEnabled
    );

    MCAPI void _importMCPack(
        ::std::shared_ptr<::ImportContext> context,
        ::ResourceLocation const&          location,
        ::PackManifest const&              manifest,
        ::PackReport const&                report,
        bool                               fromTemp,
        bool                               isTitleLocked
    );

    MCAPI void _importMCWorld(
        ::std::shared_ptr<::ImportContext> context,
        ::Core::Path const&                mcWorldPath,
        bool                               fromTemp,
        ::LoadImportedLevelData            loadLevelData,
        ::std::string const&               levelId
    );

    MCAPI void _packImportCompleted();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::LevelLoader> const&               levelLoader,
        ::IResourcePackRepository&                                        packRepository,
        ::ResourcePackManager&                                            packManager,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&      templateManager,
        ::PackManifestFactory&                                            manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::shared_ptr<::SkinRepository>                               skinRepo,
        ::PersonaRepository&                                              personaRepo,
        ::PackSourceFactory&                                              packSourceFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>              resourceLoadManager,
        bool                                                              isEditorModeEnabled
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $importContent(
        ::std::shared_ptr<::ImportContext>       context,
        ::Core::PathBuffer<::std::string> const& mcContentPath,
        bool                                     fromTemp,
        ::LoadImportedLevelData                  loadLevelData,
        bool                                     isSubcomponent,
        bool                                     isTitleLocked,
        ::std::string const&                     levelId
    );
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};
