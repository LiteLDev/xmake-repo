#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Version {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ushort>       Major;
    ::ll::TypedStorage<2, 2, ushort>       Minor;
    ::ll::TypedStorage<2, 2, ushort>       Patch;
    ::ll::TypedStorage<8, 24, std::string> PreRelease;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2>  mUnk9c04c2;
    ::ll::UntypedStorage<2, 2>  mUnk59edf9;
    ::ll::UntypedStorage<2, 2>  mUnk82270a;
    ::ll::UntypedStorage<8, 32> mUnk4a515e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Version& operator=(Version const&);
    Version();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Version(::Scripting::Version const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isPreRelease() const;
#else // @header-generator platform
    MCNAPI bool operator<(::Scripting::Version const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isValid() const;
#else // @header-generator platform
    MCNAPI bool operator==(::Scripting::Version const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator!=(::Scripting::Version const&) const;
#else // @header-generator platform
    MCNAPI bool satisfies(::Scripting::Version const& other, bool strict) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator<(::Scripting::Version const&) const;

    MCNAPI bool operator==(::Scripting::Version const&) const;

    MCNAPI bool operator>=(::Scripting::Version const&) const;

    MCNAPI bool satisfies(::Scripting::Version const&, bool) const;

    MCNAPI std::string toString() const;
#else // @header-generator platform
    MCNAPI ::std::string toString() const;
#endif // @header-generator platform

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
