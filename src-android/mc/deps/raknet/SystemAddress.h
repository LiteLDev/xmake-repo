#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SystemAddress {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128>     address;
    ::ll::TypedStorage<2, 2, ushort> debugPort;
    ::ll::TypedStorage<2, 2, ushort> systemIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemAddress(SystemAddress const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool FromString(char const*, char, int);

    MCNAPI bool FromStringExplicitPort(char const*, ushort, int);

    MCNAPI std::string GetIPString() const;

    MCNAPI uchar GetIPVersion() const;

    MCNAPI ushort GetPort() const;

    MCNAPI bool IsLinkLocalAddress() const;

    MCNAPI bool IsLoopback() const;

    MCNAPI void SetPortHostOrder(ushort);

    MCNAPI explicit SystemAddress(char const*);

    MCNAPI std::string ToString(char) const;

    MCNAPI void ToString(bool, char*, char) const;

    MCNAPI bool operator!=(::RakNet::SystemAddress const&) const;

    MCNAPI ::RakNet::SystemAddress& operator=(::RakNet::SystemAddress const&);

    MCNAPI bool operator==(::RakNet::SystemAddress const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(char const*);
    // NOLINTEND
};

} // namespace RakNet
