#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructurePoolActorRule;
// clang-format on

class JigsawStructureActorRulesRegistry {
public:
    // JigsawStructureActorRulesRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ActorRulesRegistryMap = std::vector<std::unique_ptr<std::vector<std::unique_ptr<StructurePoolActorRule>>>>;

#else // @header-generator platform
#endif // @header-generator platform
    using ActorRulesLookupMap =
#if defined(LL_PLAT_A) // @header-generator platform
        std::unordered_map<std::string, const std::vector<std::unique_ptr<StructurePoolActorRule>>*>;
#else // @header-generator platform
        ::std::unordered_map<::std::string, ::std::vector<::std::unique_ptr<::StructurePoolActorRule>> const*>;

    using ActorRulesRegistryMap = ::std::vector<::std::unique_ptr<
        ::std::vector<::std::unique_ptr<::StructurePoolActorRule, ::std::default_delete<::StructurePoolActorRule>>>>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<std::vector<std::unique_ptr<StructurePoolActorRule>>>>> mActorRulesRegistry;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, const std::vector<std::unique_ptr<StructurePoolActorRule>>*>> mActorRuleLookupMap;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::unique_ptr<::std::vector<
            ::std::unique_ptr<::StructurePoolActorRule, ::std::default_delete<::StructurePoolActorRule>>>>>>
        mActorRulesRegistry;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::vector<::std::unique_ptr<::StructurePoolActorRule>> const*>>
        mActorRuleLookupMap;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::unique_ptr<StructurePoolActorRule>> const* lookupByName(std::string) const;
#else // @header-generator platform
    MCFOLD ::std::vector<::std::unique_ptr<::StructurePoolActorRule>> const* lookupByName(::std::string name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    registerActorRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolActorRule>>>&&);

    MCNAPI ~JigsawStructureActorRulesRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void registerActorRules(
        ::std::string                                                                                        name,
        ::std::unique_ptr<::std::vector<
            ::std::unique_ptr<::StructurePoolActorRule, ::std::default_delete<::StructurePoolActorRule>>>>&& ruleList
    );
#endif // @header-generator platform
    // NOLINTEND
};
