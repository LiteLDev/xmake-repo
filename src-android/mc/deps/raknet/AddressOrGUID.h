#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
// clang-format on

namespace RakNet {

struct AddressOrGUID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     rakNetGuid;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AddressOrGUID(::RakNet::SystemAddress const&);

    MCNAPI explicit AddressOrGUID(::RakNet::RakNetGUID const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RakNet::SystemAddress const&);

    MCNAPI void* $ctor(::RakNet::RakNetGUID const&);
    // NOLINTEND
};

} // namespace RakNet
