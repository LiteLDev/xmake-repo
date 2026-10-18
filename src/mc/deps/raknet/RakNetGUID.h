#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakNetGUID {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong>  g;
    ::ll::TypedStorage<2, 2, ushort> systemIndex;
#else // @header-generator platform
    uint64 g;
    ushort systemIndex;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    RakNetGUID(RakNetGUID const&);
#else // @header-generator platform
    RakNetGUID() {
        g           = 0;
        systemIndex = 0;
    }
    RakNetGUID(uint64 g, ushort systemIndex) : g(g), systemIndex(systemIndex) {}
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool FromString(char const*);

    MCNAPI std::string ToString() const;

    MCNAPI bool operator!=(::RakNet::RakNetGUID const&) const;

    MCNAPI bool operator<(::RakNet::RakNetGUID const&) const;

    MCNAPI bool operator==(::RakNet::RakNetGUID const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ulong ToUint32(::RakNet::RakNetGUID const&);
#else // @header-generator platform
    MCAPI ::std::string ToString() const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
