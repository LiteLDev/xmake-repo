#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
struct TrimPattern;
// clang-format on

class TrimPatternRegistry {
public:
    // TrimPatternRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using TemplateItemIdToPatternIdMap = std::unordered_map<HashedString, HashedString>;
#else // @header-generator platform
    using PatternIdMapToTemplateItemId = ::std::unordered_map<::HashedString, ::HashedString>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using PatternIdMapToTemplateItemId = std::unordered_map<HashedString, HashedString>;
#else // @header-generator platform
    using TemplateItemIdToPatternIdMap = ::std::unordered_map<::HashedString, ::HashedString>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, HashedString>> mTemplateItemToPatternIdMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, HashedString>> mPatternIdToTemplateItemMap;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>> mTemplateItemToPatternIdMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>> mPatternIdToTemplateItemMap;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool doesPatternExist(::HashedString const&) const;
#else // @header-generator platform
    MCAPI bool doesPatternExist(::HashedString const& patternId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<TrimPattern> getAllEntries() const;
#else // @header-generator platform
    MCAPI ::std::vector<::TrimPattern> getAllEntries() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& getItemIdByPattern(::HashedString const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::HashedString const& getItemIdByPattern(::HashedString const& patternId) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<HashedString> getPatternIdByItem(::HashedString const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::HashedString> getPatternIdByItem(::HashedString const& itemId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializeFromTrimPatterns(std::vector<TrimPattern> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void initializeFromTrimPatterns(::std::vector<::TrimPattern> const& patterns);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initializeServer(::ItemRegistryRef);

    MCNAPI ~TrimPatternRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void initializeServer(::ItemRegistryRef itemRegistry);
#endif // @header-generator platform
    // NOLINTEND
};
