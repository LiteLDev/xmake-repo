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
    using TemplateItemIdToPatternIdMap = std::unordered_map<HashedString, HashedString>;

    using PatternIdMapToTemplateItemId = std::unordered_map<HashedString, HashedString>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, HashedString>> mTemplateItemToPatternIdMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, HashedString>> mPatternIdToTemplateItemMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool doesPatternExist(::HashedString const&) const;

    MCNAPI std::vector<TrimPattern> getAllEntries() const;

    MCNAPI ::HashedString const& getItemIdByPattern(::HashedString const&) const;

    MCNAPI std::optional<HashedString> getPatternIdByItem(::HashedString const&) const;

    MCNAPI void initializeFromTrimPatterns(std::vector<TrimPattern> const&);

    MCNAPI void initializeServer(::ItemRegistryRef);

    MCNAPI ~TrimPatternRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
