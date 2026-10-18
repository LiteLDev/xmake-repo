#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/sem_ver/SemVersion.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/puv/ComponentStorageLoadDataRefVariant.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/puv/LoadResultBetaVariant.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/storage/Experiments.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
class ActorDefinitionDescriptor;
class BedrockLoadContext;
class IJsonDefinitionSerializer;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class SemVersion;
#endif // @header-generator platform
struct DeserializeDataSettings;
struct LegacyGoalDefinition;
namespace JsonComponentGlueUtils { struct ActorLoaderTraits; }
namespace JsonComponentGlueUtils { struct CustomUpgradeData; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Puv { class Input; }
namespace Puv { template<typename T0, typename T1, typename T2> class CerealUpgrader; }
namespace SharedTypes::Legacy { struct ActorDocument; }
#else // @header-generator platform
namespace SharedTypes::Beta { struct ActorDefinitions; }
namespace SharedTypes::Beta { struct ActorDocument; }
namespace SharedTypes::Legacy { struct ActorDocumentCorrected; }
namespace SharedTypes::v1_21_100 { struct ActorDocument; }
namespace SharedTypes::v1_21_110 { struct ActorDocument; }
namespace SharedTypes::v1_21_120 { struct ActorDocument; }
namespace SharedTypes::v1_21_130 { struct ActorDocument; }
namespace SharedTypes::v1_21_90 { struct ActorDocument; }
namespace SharedTypes::v1_26_0 { struct ActorDocument; }
namespace SharedTypes::v1_26_10 { struct ActorDocument; }
namespace SharedTypes::v1_26_20 { struct ActorDocument; }
namespace SharedTypes::v1_26_30 { struct ActorDocument; }
namespace SharedTypes::v1_26_40 { struct ActorDefinitions; }
namespace SharedTypes::v1_26_40 { struct ActorDocument; }
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    using LoaderPtr = std::unique_ptr<Bedrock::Resources::CategoryLoader<JsonComponentGlueUtils::ActorLoaderTraits>>;
#else // @header-generator platform
    using FillDefinitionCb = ::std::function<::ActorMigratedDefinitionFactory::InitResult(
        ::ActorDefinitionDescriptor&,
        ::ComponentStorageLoadDataRefVariant<
            ::SharedTypes::v1_26_40::ActorDefinitions,
            ::SharedTypes::Beta::ActorDefinitions>
    )>;

    using FillDescriptionCb = ::ActorMigratedDefinitionFactory::InitResult (*)(
        ::ActorDefinition&,
        ::ActorDefinitionDescriptor&,
        ::ComponentStorageLoadDataRefVariant<
            ::SharedTypes::v1_26_40::ActorDefinitions,
            ::SharedTypes::Beta::ActorDefinitions>
    );

    using LoaderPtr =
        ::std::unique_ptr<::Bedrock::Resources::CategoryLoader<::JsonComponentGlueUtils::ActorLoaderTraits>>;

    using PuvLoader = ::Bedrock::Resources::CategoryLoader<::JsonComponentGlueUtils::ActorLoaderTraits>;

    using SerializerPtr = ::std::unique_ptr<::IJsonDefinitionSerializer>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::ReflectionCtx>> mCerealContext;
    ::ll::TypedStorage<8, 72, ::Experiments const>                       mExperiments;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::unique_ptr<::IJsonDefinitionSerializer>>>
        mDefinitionSerializers;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::ActorMigratedDefinitionFactory::InitResult (*)(
            ::ActorDefinition&,
            ::ActorDefinitionDescriptor&,
            ::ComponentStorageLoadDataRefVariant<
                ::SharedTypes::v1_26_40::ActorDefinitions,
                ::SharedTypes::Beta::ActorDefinitions>
        )>>
        mFillActorDescriptionCbs;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<::ActorMigratedDefinitionFactory::InitResult(
            ::ActorDefinitionDescriptor&,
            ::ComponentStorageLoadDataRefVariant<
                ::SharedTypes::v1_26_40::ActorDefinitions,
                ::SharedTypes::Beta::ActorDefinitions>
        )>>>
        mFillActorDefinitionCbs;
    ::ll::TypedStorage<
        8,
        264,
        ::std::tuple<
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::Legacy::ActorDocumentCorrected,
                                   ::SharedTypes::v1_21_90::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_21_90::ActorDocument,
                                   ::SharedTypes::v1_21_100::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_21_100::ActorDocument,
                                   ::SharedTypes::v1_21_110::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_21_110::ActorDocument,
                                   ::SharedTypes::v1_21_120::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_21_120::ActorDocument,
                                   ::SharedTypes::v1_21_130::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_21_130::ActorDocument,
                                   ::SharedTypes::v1_26_0::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_26_0::ActorDocument,
                                   ::SharedTypes::v1_26_10::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_26_10::ActorDocument,
                                   ::SharedTypes::v1_26_20::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_26_20::ActorDocument,
                                   ::SharedTypes::v1_26_30::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_26_30::ActorDocument,
                                   ::SharedTypes::v1_26_40::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>,
            ::std::vector<void (*)(::Puv::CerealUpgrader<
                                   ::SharedTypes::v1_26_40::ActorDocument,
                                   ::SharedTypes::Beta::ActorDocument,
                                   ::JsonComponentGlueUtils::CustomUpgradeData const&>&)>>>
                                                                        mLegacyUpgradeCallbacks;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::SemVersion>> mVersionedDefinitions;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Bedrock::Resources::CategoryLoader<::JsonComponentGlueUtils::ActorLoaderTraits>>>
        mDocumentLoader;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ActorMigratedDefinitionFactory();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ActorMigratedDefinitionFactory();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ActorMigratedDefinitionFactory(::Experiments const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit ActorMigratedDefinitionFactory(::Experiments const& experiments);

    MCAPI void _initialize();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initialize();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void _initialize();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IJsonDefinitionSerializer* _tryGetDefinitionSerializer(std::string_view) const;
#else // @header-generator platform
    MCAPI ::IJsonDefinitionSerializer* _tryGetDefinitionSerializer(::std::string_view name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void applyLegacyUpgradeCallbacks_v1_21_89(
        ::Puv::CerealUpgrader<
            SharedTypes::Legacy::ActorDocument,
            SharedTypes::Legacy::ActorDocumentCorrected,
            const JsonComponentGlueUtils::CustomUpgradeData&>&
    ) const;
#else // @header-generator platform
    MCAPI void resetLoader();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorMigratedDefinitionFactory::InitResult fillActorDefinition(
        ::ActorDefinition&,
        ::ActorDefinitionDescriptor&,
        ::ComponentStorageLoadDataRefVariant<
            SharedTypes::v1_26_40::ActorDefinitions,
            SharedTypes::Beta::ActorDefinitions>
    ) const;
#else // @header-generator platform
    MCAPI void
    setLoaderCustomData(::BedrockLoadContext customParseData, ::DeserializeDataSettings customUpgradeData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Experiments const& getExperiments() const;

    MCNAPI void resetLoader();

    MCNAPI void setLoaderCustomData(::BedrockLoadContext, ::DeserializeDataSettings) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~ActorMigratedDefinitionFactory();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::LegacyGoalDefinition
    _parseLegacyGoalDefinition(std::string, ::cereal::DynamicValue const&, ::DeserializeDataSettings const&);
#else // @header-generator platform
    MCAPI static ::LegacyGoalDefinition _parseLegacyGoalDefinition(
        ::std::string                    name,
        ::cereal::DynamicValue const&    def,
        ::DeserializeDataSettings const& settings
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Experiments const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::Experiments const& experiments);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
