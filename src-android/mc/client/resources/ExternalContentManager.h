#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
public:
    // ExternalContentManager inner types declare
    // clang-format off
    struct ImportRequestData;
    struct LoadingContentData;
    struct LoadingContentDataHasher;
    // clang-format on

    // ExternalContentManager inner types define
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

    struct LoadingContentDataHasher {};

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
};
