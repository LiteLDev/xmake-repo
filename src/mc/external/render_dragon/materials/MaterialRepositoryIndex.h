#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::materials {

struct MaterialRepositoryIndex {
public:
    // MaterialRepositoryIndex inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // MaterialRepositoryIndex inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mFileName;
        // NOLINTEND

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, dragon::materials::MaterialRepositoryIndex::Entry>> mEntries;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialRepositoryIndex& operator=(MaterialRepositoryIndex const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<std::string> resolvePath(std::string const&) const;

    MCNAPI ~MaterialRepositoryIndex();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<dragon::materials::MaterialRepositoryIndex> fromJson(::Json::Value const&);

    MCNAPI static std::optional<dragon::materials::MaterialRepositoryIndex> fromJson(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct Entry {};
#endif // @header-generator platform
};

} // namespace dragon::materials
