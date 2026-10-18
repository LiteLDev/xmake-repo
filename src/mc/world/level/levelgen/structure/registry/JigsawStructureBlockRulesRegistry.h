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
#if defined(LL_PLAT_A) // @header-generator platform
    using BlockRulesRegistryMap = std::vector<std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockRule>>>>;

#else // @header-generator platform
#endif // @header-generator platform
    using BlockRulesLookupMap =
#if defined(LL_PLAT_A) // @header-generator platform
        std::unordered_map<std::string, const std::vector<std::unique_ptr<StructurePoolBlockRule>>*>;
#else // @header-generator platform
        ::std::unordered_map<::std::string, ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const*>;

    using BlockRulesRegistryMap = ::std::vector<::std::unique_ptr<
        ::std::vector<::std::unique_ptr<::StructurePoolBlockRule, ::std::default_delete<::StructurePoolBlockRule>>>>>;

    using StructureProcessorList =
        ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>>;

    using StructureProcessorPtr = ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockRule>>>>> mBlockRulesRegistry;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, const std::vector<std::unique_ptr<StructurePoolBlockRule>>*>> mBlockRuleLookupMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, gsl::not_null<std::shared_ptr<const std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>>>>> mProcessors;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::unique_ptr<::std::vector<
            ::std::unique_ptr<::StructurePoolBlockRule, ::std::default_delete<::StructurePoolBlockRule>>>>>>
        mBlockRulesRegistry;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const*>>
        mBlockRuleLookupMap;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::gsl::not_null<::std::shared_ptr<
                ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>>>
        mProcessors;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<gsl::not_null<
        std::shared_ptr<const std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>>>>
           get(std::string_view) const;
#else // @header-generator platform
    MCAPI ::std::optional<::gsl::not_null<::std::shared_ptr<
        ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>>
    get(::std::string_view key) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::unique_ptr<StructurePoolBlockRule>> const* lookupByName(std::string) const;
#else // @header-generator platform
    MCFOLD ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const* lookupByName(::std::string name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
        record(std::string_view, std::vector<gsl::not_null<std::shared_ptr<const br::worldgen::StructureProcessor>>>);
#else // @header-generator platform
    MCAPI void record(
        ::std::string_view                                                                          key,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> processors
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    registerBlockRules(std::string, std::unique_ptr<std::vector<std::unique_ptr<StructurePoolBlockRule>>>&&);

    MCNAPI ~JigsawStructureBlockRulesRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void registerBlockRules(
        ::std::string                                                                                        name,
        ::std::unique_ptr<::std::vector<
            ::std::unique_ptr<::StructurePoolBlockRule, ::std::default_delete<::StructurePoolBlockRule>>>>&& ruleList
    );
#endif // @header-generator platform
    // NOLINTEND
};
