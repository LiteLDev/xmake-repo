#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructurePoolBlockTagRule;
// clang-format on

class JigsawStructureBlockTagRulesRegistry {
public:
    // JigsawStructureBlockTagRulesRegistry inner types define
    using BlockTagRulesRegistryMap =
        std::vector<std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockTagRule>>>>;

    using BlockTagRulesLookupMap =
        std::unordered_map<std::string, const std::vector<std::unique_ptr<StructurePoolBlockTagRule>>*>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockTagRule>>>>> mBlockTagRulesRegistry;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, const std::vector<std::unique_ptr<StructurePoolBlockTagRule>>*>> mBlockTagRuleLookupMap;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const* lookupByName(std::string) const;

    MCNAPI void
    registerBlockTagRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockTagRule>>>&&);

    MCNAPI ~JigsawStructureBlockTagRulesRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
