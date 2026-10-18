#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::Util {

struct NameIdTable {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int>> mEntries;
    // NOLINTEND
#else // @header-generator platform
    // NameIdTable inner types define
    using IdType = int;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // member variables
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~NameIdTable();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mEntries;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Util
