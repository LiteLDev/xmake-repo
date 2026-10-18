#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace RakNet {
#if defined(LL_PLAT_A) // @header-generator platform

#else // @header-generator platform
#endif // @header-generator platform
struct AddressOrGUID {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     rakNetGuid;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
#else // @header-generator platform
    ::RakNet::RakNetGUID    rakNetGuid;
    ::RakNet::SystemAddress systemAddress;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    AddressOrGUID()                                = default;
    AddressOrGUID(AddressOrGUID const&)            = default;
    AddressOrGUID& operator=(AddressOrGUID const&) = default;
    AddressOrGUID(::RakNet::SystemAddress const& input)
    : rakNetGuid{static_cast<unsigned long long>(-1), static_cast<unsigned short>(-1)} {
        systemAddress = input;
    }
    AddressOrGUID(::RakNet::RakNetGUID const& input) : rakNetGuid(input), systemAddress{} {}
#endif // @header-generator platform
};
#if defined(LL_PLAT_A) // @header-generator platform

#else // @header-generator platform
#endif // @header-generator platform
} // namespace RakNet
