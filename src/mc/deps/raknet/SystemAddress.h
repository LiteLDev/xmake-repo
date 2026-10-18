#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SystemAddress {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 128>     address;
    ::ll::TypedStorage<2, 2, ushort> debugPort;
    ::ll::TypedStorage<2, 2, ushort> systemIndex;
#else // @header-generator platform
    union {
        ::ll::UntypedStorage<8, 128> sa_stor;
        ::ll::UntypedStorage<4, 128> addr6;
        ::ll::UntypedStorage<2, 128> addr4;
    } address;
    ushort debugPort;
    ushort systemIndex;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    SystemAddress(SystemAddress const&);
#else // @header-generator platform
    LLNDAPI bool operator==(SystemAddress const& other) const;
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool FromString(char const*, char, int);
#else // @header-generator platform
    MCAPI void FixForIPVersion(::RakNet::SystemAddress const& boundAddressToSocket);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool FromStringExplicitPort(char const*, ushort, int);
#else // @header-generator platform
    MCAPI bool FromString(char const* str, char portDelineator, int ipVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string GetIPString() const;
#else // @header-generator platform
    MCAPI ::std::string GetIPString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar GetIPVersion() const;
#else // @header-generator platform
    MCAPI ::std::string ToString(char portDelineator) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void ToString(bool writePort, char* dest, char portDelineator) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
