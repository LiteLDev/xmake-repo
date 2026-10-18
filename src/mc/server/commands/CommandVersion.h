#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

class CommandVersion {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mFrom;
    ::ll::TypedStorage<4, 4, int> mTo;
#else // @header-generator platform
    int mFrom;
    int mTo;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    CommandVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandVersion(int, int);

    MCNAPI bool covers(::CommandVersion const&) const;

    MCNAPI bool isCompatible(int) const;

    MCNAPI bool operator!=(::CommandVersion const&) const;
    // NOLINTEND
#else // @header-generator platform
    CommandVersion(int from = 0, int to = 0x7FFFFFFF) : mFrom(from), mTo(to) {}
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersion getLatestCompatibleSemVersion(::SemVersion const&, int);

    MCNAPI static ::CurrentCmdVersion const getVersionMapping(::SemVersion const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& CurrentVersion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, int);
#else // @header-generator platform
    MCAPI static ::SemVersion getLatestCompatibleSemVersion(::SemVersion const& currentGameSemVersion, int version);
#endif // @header-generator platform
    // NOLINTEND
};
