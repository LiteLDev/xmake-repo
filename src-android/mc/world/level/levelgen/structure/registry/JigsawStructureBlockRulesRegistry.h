#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructurePoolBlockRule;
namespace br::worldgen { struct StructureProcessor; }
// clang-format on

class JigsawStructureBlockRulesRegistry {
public:
    // JigsawStructureBlockRulesRegistry inner types define
    using BlockRulesRegistryMap = std::vector<std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockRule>>>>;

    using BlockRulesLookupMap =
        std::unordered_map<std::string, const std::vector<std::unique_ptr<StructurePoolBlockRule>>*>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockRule>>>>> mBlockRulesRegistry;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, const std::vector<std::unique_ptr<StructurePoolBlockRule>>*>> mBlockRuleLookupMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, gsl::not_null<std::shared_ptr<const std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>>>>> mProcessors;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<gsl::not_null<
        std::shared_ptr<const std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>>>>
           get(std::string_view) const;

    MCNAPI std::vector<std::unique_ptr<StructurePoolBlockRule>> const* lookupByName(std::string) const;

    MCNAPI void
        record(std::string_view, std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>);

    MCNAPI void
    registerBlockRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockRule>>>&&);

    MCNAPI ~JigsawStructureBlockRulesRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
