#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/puv/ComponentStorageLoadDataRefVariant.h"
#include "mc/deps/puv/LoadResultBetaVariant.h"
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#include "mc/deps/shared_types/ActorDefinitions.h"
#include "mc/deps/shared_types/ActorDocument.h"
#include "mc/deps/shared_types/beta/actor/ActorDefinitions.h"
#include "mc/deps/shared_types/beta/actor/ActorDocument.h"
#include "mc/deps/shared_types/legacy/actor/ActorDocumentCorrected.h"
#include "mc/deps/shared_types/v1_21_100/actor/ActorDocument.h"
#include "mc/deps/shared_types/v1_21_110/actor/ActorDocument.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDocument.h"
#include "mc/deps/shared_types/v1_21_130/actor/ActorDocument.h"
#include "mc/deps/shared_types/v1_21_90/actor/ActorDocument.h"
#include "mc/deps/shared_types/v1_26_0/actor/ActorDocument.h"
#include "mc/deps/shared_types/v1_26_10/actor/ActorDocument.h"
#include "mc/deps/shared_types/v1_26_20/actor/ActorDocument.h"
#include "mc/deps/shared_types/v1_26_30/actor/ActorDocument.h"
#include "mc/world/level/storage/Experiments.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
class ActorDefinitionDescriptor;
class BedrockLoadContext;
class IJsonDefinitionSerializer;
struct DeserializeDataSettings;
struct LegacyGoalDefinition;
namespace JsonComponentGlueUtils { struct ActorLoaderTraits; }
namespace JsonComponentGlueUtils { struct CustomUpgradeData; }
namespace Puv { class Input; }
namespace Puv { template<typename T0, typename T1, typename T2> class CerealUpgrader; }
namespace SharedTypes::Legacy { struct ActorDocument; }
namespace cereal { class DynamicValue; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ActorMigratedDefinitionFactory {
public:
    // ActorMigratedDefinitionFactory inner types define
    enum class InitResult : int {
        Success                  = 0,
        BetaFeaturesNotEnabled   = 1,
        GenericGoalSuffixMissing = 2,
    };

    using LoaderPtr = std::unique_ptr<Bedrock::Resources::CategoryLoader<JsonComponentGlueUtils::ActorLoaderTraits>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::ReflectionCtx>> mCerealContext;
    ::ll::TypedStorage<8, 56, ::Experiments const> mExperiments;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<IJsonDefinitionSerializer>>> mDefinitionSerializers;
    ::ll::UntypedStorage<8, 24> mFillActorDescriptionCbs;
    ::ll::UntypedStorage<8, 24> mFillActorDefinitionCbs;
    ::ll::UntypedStorage<8, 264> mLegacyUpgradeCallbacks;
    ::ll::TypedStorage<8, 24, std::map<HashedString, SemVersion>> mVersionedDefinitions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::Resources::CategoryLoader<JsonComponentGlueUtils::ActorLoaderTraits>>> mDocumentLoader;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ActorMigratedDefinitionFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ActorMigratedDefinitionFactory(::Experiments const&);

    MCNAPI void _initialize();

    MCNAPI ::IJsonDefinitionSerializer* _tryGetDefinitionSerializer(std::string_view) const;

    MCNAPI void applyLegacyUpgradeCallbacks_v1_21_89(
        ::Puv::CerealUpgrader<
            SharedTypes::Legacy::ActorDocument,
            SharedTypes::Legacy::ActorDocumentCorrected,
            const JsonComponentGlueUtils::CustomUpgradeData&>&
    ) const;

    MCNAPI ::ActorMigratedDefinitionFactory::InitResult fillActorDefinition(
        ::ActorDefinition&,
        ::ActorDefinitionDescriptor&,
        ::ComponentStorageLoadDataRefVariant<
            SharedTypes::v1_26_40::ActorDefinitions,
            SharedTypes::Beta::ActorDefinitions>
    ) const;

    MCNAPI ::Experiments const& getExperiments() const;

    MCNAPI void resetLoader();

    MCNAPI void setLoaderCustomData(::BedrockLoadContext, ::DeserializeDataSettings) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::LegacyGoalDefinition
    _parseLegacyGoalDefinition(std::string, ::cereal::DynamicValue const&, ::DeserializeDataSettings const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Experiments const&);
    // NOLINTEND
};
