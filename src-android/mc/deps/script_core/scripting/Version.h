#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Version {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>       Major;
    ::ll::TypedStorage<2, 2, ushort>       Minor;
    ::ll::TypedStorage<2, 2, ushort>       Patch;
    ::ll::TypedStorage<8, 24, std::string> PreRelease;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Version(::Scripting::Version const&);

    MCNAPI bool isPreRelease() const;

    MCNAPI bool isValid() const;

    MCNAPI bool operator!=(::Scripting::Version const&) const;

    MCNAPI bool operator<(::Scripting::Version const&) const;

    MCNAPI bool operator==(::Scripting::Version const&) const;

    MCNAPI bool operator>=(::Scripting::Version const&) const;

    MCNAPI bool satisfies(::Scripting::Version const&, bool) const;

    MCNAPI std::string toString() const;

    MCNAPI ~Version();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::Version const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
