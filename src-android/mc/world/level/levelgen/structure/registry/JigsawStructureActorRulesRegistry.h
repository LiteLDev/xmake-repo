#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructurePoolActorRule;
// clang-format on

class JigsawStructureActorRulesRegistry {
public:
    // JigsawStructureActorRulesRegistry inner types define
    using ActorRulesRegistryMap = std::vector<std::unique_ptr<std::vector<std::unique_ptr<StructurePoolActorRule>>>>;

    using ActorRulesLookupMap =
        std::unordered_map<std::string, const std::vector<std::unique_ptr<StructurePoolActorRule>>*>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<std::vector<std::unique_ptr<StructurePoolActorRule>>>>> mActorRulesRegistry;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, const std::vector<std::unique_ptr<StructurePoolActorRule>>*>> mActorRuleLookupMap;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<std::unique_ptr<StructurePoolActorRule>> const* lookupByName(std::string) const;

    MCNAPI void
    registerActorRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolActorRule>>>&&);

    MCNAPI ~JigsawStructureActorRulesRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
