#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/NetworkID.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "sys/socket.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct AddressOrGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

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
    ::ll::TypedStorage<8, 24, ::NetherNet::NetworkID>   mNetherNetId;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     mGuid;
    ::ll::TypedStorage<8, 128, ::sockaddr_storage>      mSock;
    ::ll::TypedStorage<4, 4, ::NetworkIdentifier::Type> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkIdentifier(NetworkIdentifier const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NetworkIdentifier(::RakNet::RakNetGUID const&);

    MCNAPI explicit NetworkIdentifier(::sockaddr_in const&);

    MCNAPI explicit NetworkIdentifier(::sockaddr_in6 const&);

    MCNAPI bool equalsTypeData(::NetworkIdentifier const&) const;

    MCNAPI std::string getAddress() const;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string calculateCorrelationId(::RakNet::RakNetGUID const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::NetworkIdentifier& INVALID_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RakNet::RakNetGUID const&);

    MCNAPI void* $ctor(::sockaddr_in const&);

    MCNAPI void* $ctor(::sockaddr_in6 const&);
    // NOLINTEND
};
