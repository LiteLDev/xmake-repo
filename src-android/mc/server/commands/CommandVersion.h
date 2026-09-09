#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

class CommandVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mFrom;
    ::ll::TypedStorage<4, 4, int> mTo;
    // NOLINTEND

public:
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

public:
    // static functions
    // NOLINTBEGIN
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
    // NOLINTEND
};
