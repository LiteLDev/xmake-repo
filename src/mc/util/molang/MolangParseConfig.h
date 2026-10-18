#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/bitset.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct MolangParseConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ::MolangVersion>                  mVersion;
    ::ll::TypedStorage<8, 16, ::gsl::span<const HashedString>> mAllowedQuerySets;
    ::ll::UntypedStorage<8, 16>                                mAllowedOperations;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>        mAllowedSpecificQueries;
    ::ll::TypedStorage<1, 1, bool>                             mPreserveSource;
#else // @header-generator platform
    ::ll::TypedStorage<2, 2, ::MolangVersion>                    mVersion;
    ::ll::TypedStorage<8, 16, ::gsl::span<::HashedString const>> mAllowedQuerySets;
    ::ll::TypedStorage<8, 16, ::brstd::bitset<109, uint64>>      mAllowedOperations;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>      mAllowedSpecificQueries;
    ::ll::TypedStorage<1, 1, bool>                               mPreserveSource;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MolangParseConfig& allowSpecificQuery(std::string);

    MCNAPI ::MolangParseConfig& disallowSideEffects(bool);

    MCNAPI ~MolangParseConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::MolangParseConfig& allowSpecificQuery(::std::string queryName);
#endif // @header-generator platform
    // NOLINTEND
};
