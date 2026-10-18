#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/deps/core/debug/log/ContentLogFileEndPoint.h"
#include "mc/deps/core/file/File.h"
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/utility/BedrockLoadContext.h"
#include "mc/deps/puv/Loader.h"
#include "mc/deps/resource_processing/LoaderRegistry.h"
#include "mc/deps/resource_processing/category/ResourceCategory.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/resources/PackLoadInfo.h"
#include "mc/world/actor/ActorMigratedDefinitionFactory.h"
#include "mc/world/item/registry/ItemRegistryManager.h"
#include "mc/world/level/storage/Experiments.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class ContentLogEndPoint;
class GameModuleClient;
class ItemRegistry;
class LinkedAssetValidator;
class SemVersion;
namespace Bedrock::Resources::PackDirectoryIterator { struct Event; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace ParticleSystem { class ParticleEffectComponentRegistry; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectData; }
namespace SharedTypes::v1_21_100 { struct CameraDocument; }
namespace SharedTypes::v1_21_110 { struct VoxelShapeDocument; }
namespace SharedTypes::v1_21_30 { struct TradeTableData; }
namespace SharedTypes::v1_26_0 { struct CameraSplineFile; }
namespace SharedTypes::v1_26_30 { struct ItemDocument; }
namespace mce { class UUID; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Resources {

class DocumentUpgrader {
public:
    // DocumentUpgrader inner types declare
    // clang-format off
    struct Config;
    class Loaders;
#if defined(LL_PLAT_A) // @header-generator platform
    struct UpgradeStats;
#else // @header-generator platform
#endif // @header-generator platform
    struct UpgradeResult;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct UpgradeStats;
#endif // @header-generator platform
    struct UpgraderLogFileEndPoint;
    // clang-format on

    // DocumentUpgrader inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class UpgradeType : int {
        resourceCopied   = 0,
        resourceUpgraded = 1,
#else // @header-generator platform
    enum class UpgradeType : int {};

    struct Config {};

    class Loaders {
    public:
        // Loaders inner types declare
        // clang-format off
        template<int T0> struct LoaderWrapper;
        // clang-format on

        // Loaders inner types define
        template <int T0>
        struct LoaderWrapper {};
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct Config {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 24>    mInputDirectory;
        ::ll::UntypedStorage<1, 24>    mOutputDirectory;
        ::ll::TypedStorage<1, 1, bool> mSilentlyWipeOutputDirectory;
        ::ll::UntypedStorage<1, 7>     mIsBaseGamePack;
        // NOLINTEND
    };
#else // @header-generator platform
    struct UpgradeResult {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    class Loaders : public ::Bedrock::Resources::LoaderRegistry {
    public:
        // Loaders inner types define
        template <::Bedrock::Resources::ResourceCategory T0>
        struct LoaderWrapper {};
#else // @header-generator platform
    struct UpgradeStats {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        using CategoryLoaders = std::tuple<
            Bedrock::Resources::DocumentUpgrader::Loaders::LoaderWrapper<(Bedrock::Resources::ResourceCategory)1>,
            Bedrock::Resources::DocumentUpgrader::Loaders::LoaderWrapper<(Bedrock::Resources::ResourceCategory)2>,
            Bedrock::Resources::DocumentUpgrader::Loaders::LoaderWrapper<(Bedrock::Resources::ResourceCategory)3>,
            Bedrock::Resources::DocumentUpgrader::Loaders::LoaderWrapper<(Bedrock::Resources::ResourceCategory)4>,
            Bedrock::Resources::DocumentUpgrader::Loaders::LoaderWrapper<(Bedrock::Resources::ResourceCategory)5>,
            Bedrock::Resources::DocumentUpgrader::Loaders::LoaderWrapper<(Bedrock::Resources::ResourceCategory)7>>;

        using ModuleClientScopeGuard = std::shared_ptr<void>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 56, ::Experiments const>               mExperiments;
        ::ll::UntypedStorage<1, 16>                                  mIsBaseGamePack;
        ::ll::UntypedStorage<8, 1536>                                mCategoryLoaders;
        ::ll::TypedStorage<8, 448, ::ActorMigratedDefinitionFactory> mActorMigratedFactory;
        ::ll::UntypedStorage<8, 32>                                  mMinEngineVersion;
        ::ll::TypedStorage<8, 8, ::LinkedAssetValidator*>            mLinkedAssetValidator;
        ::ll::TypedStorage<8, 48, ::BedrockLoadContext>              mBedrockLoadContextWithValidator;
        ::ll::TypedStorage<8, 80, ::PackLoadInfo>                    mPackLoadInfo;
        ::ll::TypedStorage<8, 8, ::ParticleSystem::ParticleEffectComponentRegistry const*> mParticleComponentRegistry;
        ::ll::TypedStorage<8, 112, ::cereal::ReflectionCtx>                                mItemReflectionCtx;
        ::ll::TypedStorage<8, 16, std::shared_ptr<ItemRegistry>>                           mItemRegistry;
        ::ll::UntypedStorage<8, 8>                                                         mScopedItemRegistry;
        ::ll::UntypedStorage<8, 24>                                                        mScopeGuard;
        // NOLINTEND

    public:
        // prevent constructor by default
        Loaders();

    public:
        // virtual functions
        // NOLINTBEGIN
        // clang-format off
        virtual ::Puv::Loader<SharedTypes::v1_20_80::ParticleEffectData, SharedTypes::v1_20_80::ParticleEffectData> const& getParticleLoader() const;
    
        virtual ::Puv::Loader<SharedTypes::v1_21_100::CameraDocument, SharedTypes::v1_21_100::CameraDocument> const& getCameraLoader() const;
    
        virtual ::Puv::Loader<SharedTypes::v1_21_110::VoxelShapeDocument, SharedTypes::v1_21_110::VoxelShapeDocument> const& getVoxelShapeLoader() const;
    
        virtual ::Puv::Loader<SharedTypes::v1_21_30::TradeTableData, SharedTypes::v1_21_30::TradeTableData> const& getTradeTableLoader() const;
    
        virtual ::Puv::Loader<SharedTypes::v1_26_0::CameraSplineFile, SharedTypes::v1_26_0::CameraSplineFile> const& getCameraSplineLoader() const;
    
        virtual ::Puv::Loader<SharedTypes::v1_26_30::ItemDocument, SharedTypes::v1_26_30::ItemDocument> const& getItemLoader() const;
        // clang-format on
        // NOLINTEND
    };

    struct UpgradeStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mVisitedPacks;
        ::ll::TypedStorage<4, 4, uint> mUpgradedResources;
        ::ll::TypedStorage<4, 4, uint> mCopiedResources;
        ::ll::TypedStorage<4, 4, uint> mFailedResources;
        // NOLINTEND
    };

    struct UpgradeResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8>  mUpgradeType;
        ::ll::UntypedStorage<1, 24> mDestinationPath;
        ::ll::UntypedStorage<1, 8>  mJsonCommentCandidate;
        // NOLINTEND
    };

    struct UpgraderLogFileEndPoint : public ::ContentLogFileEndPoint {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 56>                                                              mConfig;
    ::ll::UntypedStorage<1, 24>                                                              mOutputResourcePath;
    ::ll::UntypedStorage<1, 24>                                                              mSummaryFilePath;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContentLogEndPoint>>                            mContentLogFileEndPoint;
    ::ll::TypedStorage<8, 16, ::Core::File>                                                  mTraceLog;
    ::ll::TypedStorage<8, 16, ::Core::File>                                                  mErrorLog;
    ::ll::TypedStorage<8, 16, ::Core::File>                                                  mJsonCommentCandidatesLog;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::Resources::DocumentUpgrader::Loaders>> mLoaders;
    ::ll::TypedStorage<4, 16, ::Bedrock::Resources::DocumentUpgrader::UpgradeStats>          mUpgradeStats;
    // NOLINTEND

public:
    // prevent constructor by default
    DocumentUpgrader();
#else // @header-generator platform
    struct UpgraderLogFileEndPoint {};
#endif // @header-generator platform
};

} // namespace Bedrock::Resources
