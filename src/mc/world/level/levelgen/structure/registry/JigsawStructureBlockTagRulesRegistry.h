#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructurePoolBlockTagRule;
// clang-format on

class JigsawStructureBlockTagRulesRegistry {
public:
    // JigsawStructureBlockTagRulesRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using BlockTagRulesRegistryMap =
        std::vector<std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockTagRule>>>>;

#else // @header-generator platform
#endif // @header-generator platform
    using BlockTagRulesLookupMap =
#if defined(LL_PLAT_A) // @header-generator platform
        std::unordered_map<std::string, const std::vector<std::unique_ptr<StructurePoolBlockTagRule>>*>;
#else // @header-generator platform
        ::std::unordered_map<::std::string, ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const*>;

    using BlockTagRulesRegistryMap = ::std::vector<::std::unique_ptr<::std::vector<
        ::std::unique_ptr<::StructurePoolBlockTagRule, ::std::default_delete<::StructurePoolBlockTagRule>>>>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockTagRule>>>>> mBlockTagRulesRegistry;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, const std::vector<std::unique_ptr<StructurePoolBlockTagRule>>*>> mBlockTagRuleLookupMap;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::unique_ptr<::std::vector<
            ::std::unique_ptr<::StructurePoolBlockTagRule, ::std::default_delete<::StructurePoolBlockTagRule>>>>>>
        mBlockTagRulesRegistry;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const*>>
        mBlockTagRuleLookupMap;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::unique_ptr<StructurePoolBlockTagRule>> const* lookupByName(std::string) const;
#else // @header-generator platform
    MCFOLD ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const* lookupByName(::std::string name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    registerBlockTagRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockTagRule>>>&&);

    MCNAPI ~JigsawStructureBlockTagRulesRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void registerBlockTagRules(
        ::std::string name,
        ::std::unique_ptr<::std::vector<
            ::std::unique_ptr<::StructurePoolBlockTagRule, ::std::default_delete<::StructurePoolBlockTagRule>>>>&&
            ruleList
    );
#endif // @header-generator platform
    // NOLINTEND
};
