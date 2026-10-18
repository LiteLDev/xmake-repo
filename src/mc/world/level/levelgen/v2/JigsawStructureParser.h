#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FeatureRegistry;
class IStructureTemplateManager;
class IWorldRegistriesProvider;
class JigsawStructureRegistry;
class StructureTemplatePool;
namespace SharedTypes::v1_21_20::JigsawStructureDefinition { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureProcessorList { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureSet { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool { struct Contents; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace StructureMetadata { struct StructureInstance; }
#else // @header-generator platform
#endif // @header-generator platform
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { class StructureRegistry; }
namespace br::worldgen { struct JigsawStructure; }
namespace br::worldgen { struct StructureProcessor; }
namespace br::worldgen { struct StructureSet; }
// clang-format on

struct JigsawStructureParser {
public:
    // JigsawStructureParser inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using StructureProcessorList = std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>;
#else // @header-generator platform
    using StructureProcessorList =
        ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>>;
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<br::worldgen::StructureInstance>
    parseStructureInstanceFromLevelStorage(std::string_view, ::JigsawStructureRegistry const&);
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::br::worldgen::StructureInstance>
    parseStructureInstanceFromLevelStorage(::std::string_view data, ::JigsawStructureRegistry const& registry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<br::worldgen::JigsawStructure> prepareJigsawDefinitionData(
        std::vector<SharedTypes::v1_21_20::JigsawStructureDefinition::Contents> const&,
        ::IWorldRegistriesProvider&
#else // @header-generator platform
    MCAPI static ::std::vector<::br::worldgen::JigsawStructure> prepareJigsawDefinitionData(
        ::std::vector<::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents> const& jigsawsData,
        ::IWorldRegistriesProvider&                                                        registries
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<std::string, std::shared_ptr<br::worldgen::StructureSet>> prepareJigsawSetData(
        std::vector<SharedTypes::v1_21_20::JigsawStructureSet::Contents> const&,
        ::br::worldgen::StructureRegistry const&
#else // @header-generator platform
    MCAPI static ::std::unordered_map<::std::string, ::std::shared_ptr<::br::worldgen::StructureSet>>
    prepareJigsawSetData(
        ::std::vector<::SharedTypes::v1_21_20::JigsawStructureSet::Contents> const& stuctureSets,
        ::br::worldgen::StructureRegistry const&                                    structureRegistry
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::
        unordered_map<std::string, std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>>
        prepareProcessorsData(std::vector<SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents> const&);

    MCNAPI static std::vector<StructureTemplatePool> prepareTemplatePoolsData(
        std::vector<SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        ::JigsawStructureRegistry&,
        ::FeatureRegistry&
#else // @header-generator platform
    MCAPI static ::std::unordered_map<
        ::std::string,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>>>
    prepareProcessorsData(
        ::std::vector<::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents> const& documents
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string serializeStructureInstanceForLevelStorage(::br::worldgen::StructureInstance const&);
#else // @header-generator platform
    MCAPI static ::std::vector<::StructureTemplatePool> prepareTemplatePoolsData(
        ::std::vector<::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents> const& templatePoolsData,
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager>                           structureManager,
        ::JigsawStructureRegistry&                                                           registry,
        ::FeatureRegistry&                                                                   features
    );

#ifdef LL_PLAT_C
    MCAPI static ::br::worldgen::JigsawStructure processJigsawDefinition(
        ::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents const& jigsawData,
        ::IWorldRegistriesProvider&                                         registries
    );
#endif

    MCAPI static ::std::string
    serializeStructureInstanceForLevelStorage(::br::worldgen::StructureInstance const& instance);
#endif // @header-generator platform
    // NOLINTEND
};
