#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/raknet/RakNetGUID.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/raknet/RakNetGUID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "sys/socket.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct AddressOrGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class NetworkIdentifier {
public:
    // NetworkIdentifier inner types define
    enum class Type : int {
        RakNet    = 0,
        Address   = 1,
        Address6  = 2,
        NetherNet = 3,
        Invalid   = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID>   mNetherNetId;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     mGuid;
    ::ll::TypedStorage<8, 128, ::sockaddr_storage>      mSock;
    ::ll::TypedStorage<4, 4, ::NetworkIdentifier::Type> mType;
#else // @header-generator platform
    ::NetherNet::NetworkID       mNetherNetId;
    ::RakNet::RakNetGUID         mGuid;
    ::ll::UntypedStorage<8, 128> mSock;
    ::NetworkIdentifier::Type    mType;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    NetworkIdentifier(NetworkIdentifier const&);
#else // @header-generator platform
    LLNDAPI std::string getIPAndPort() const;

    [[nodiscard]] bool operator==(::NetworkIdentifier const& other) const { return equalsTypeData(other); }

public:
    NetworkIdentifier(::NetworkIdentifier const& other) = default;
    NetworkIdentifier()                                 = default;
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit NetworkIdentifier(::RakNet::RakNetGUID const&);
#else // @header-generator platform
    MCAPI bool equalsTypeData(::NetworkIdentifier const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit NetworkIdentifier(::sockaddr_in const&);
#else // @header-generator platform
    MCAPI ::std::string getAddress() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit NetworkIdentifier(::sockaddr_in6 const&);
#else // @header-generator platform
    MCAPI ::std::string getCorrelationId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool equalsTypeData(::NetworkIdentifier const&) const;
#else // @header-generator platform
    MCAPI uint64 getHash() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getAddress() const;
#else // @header-generator platform
    MCAPI bool isUnassigned() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getCorrelationId() const;

    MCNAPI ulong getHash() const;

    MCNAPI std::string getNetherNetIDAsString() const;

    MCNAPI std::string getNetherNetOrRakNetIDAsString() const;

    MCNAPI ::RakNet::RakNetGUID const& getRakNetGUID() const;

    MCNAPI ::sockaddr_in const& getSocketAddress() const;

    MCNAPI ::sockaddr_in6 const& getSocketAddress6() const;

    MCNAPI ::NetworkIdentifier::Type getType() const;

    MCNAPI bool isType(::NetworkIdentifier::Type) const;

    MCNAPI bool isUnassigned() const;

    MCNAPI bool operator!=(::NetworkIdentifier const&) const;

    MCNAPI bool operator==(::NetworkIdentifier const&) const;

    MCNAPI std::string toString() const;
#else // @header-generator platform
    MCAPI ::std::string toString() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string calculateCorrelationId(::RakNet::RakNetGUID const&);
#else // @header-generator platform
    MCAPI static ::std::string calculateCorrelationId(::RakNet::RakNetGUID const& rakId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::NetworkIdentifier& INVALID_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RakNet::RakNetGUID const&);

    MCNAPI void* $ctor(::sockaddr_in const&);

    MCNAPI void* $ctor(::sockaddr_in6 const&);
#else // @header-generator platform
    MCAPI static ::NetworkIdentifier& INVALID_ID();
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

namespace std {
template <>
struct hash<NetworkIdentifier> {
    size_t operator()(NetworkIdentifier const& d) const noexcept { return d.getHash(); }
};
} // namespace std
#endif // @header-generator platform
