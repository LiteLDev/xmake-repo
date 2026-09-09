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
namespace StructureMetadata { struct StructureInstance; }
namespace br::worldgen { class StructureInstance; }
namespace br::worldgen { class StructureRegistry; }
namespace br::worldgen { struct JigsawStructure; }
namespace br::worldgen { struct StructureProcessor; }
namespace br::worldgen { struct StructureSet; }
// clang-format on

struct JigsawStructureParser {
public:
    // JigsawStructureParser inner types define
    using StructureProcessorList = std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<br::worldgen::StructureInstance>
    parseStructureInstanceFromLevelStorage(std::string_view, ::JigsawStructureRegistry const&);

    MCNAPI static std::vector<br::worldgen::JigsawStructure> prepareJigsawDefinitionData(
        std::vector<SharedTypes::v1_21_20::JigsawStructureDefinition::Contents> const&,
        ::IWorldRegistriesProvider&
    );

    MCNAPI static std::unordered_map<std::string, std::shared_ptr<br::worldgen::StructureSet>> prepareJigsawSetData(
        std::vector<SharedTypes::v1_21_20::JigsawStructureSet::Contents> const&,
        ::br::worldgen::StructureRegistry const&
    );

    MCNAPI static std::
        unordered_map<std::string, std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>>
        prepareProcessorsData(std::vector<SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents> const&);

    MCNAPI static std::vector<StructureTemplatePool> prepareTemplatePoolsData(
        std::vector<SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>,
        ::JigsawStructureRegistry&,
        ::FeatureRegistry&
    );

    MCNAPI static std::string serializeStructureInstanceForLevelStorage(::br::worldgen::StructureInstance const&);
    // NOLINTEND
};
