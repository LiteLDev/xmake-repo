#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakNetGUID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>  g;
    ::ll::TypedStorage<2, 2, ushort> systemIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetGUID(RakNetGUID const&);

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND
};

} // namespace RakNet
