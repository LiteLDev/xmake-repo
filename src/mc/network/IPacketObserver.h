#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class Packet;
// clang-format on

class IPacketObserver : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void packetSentTo(::NetworkIdentifier const&, ::Packet const&, uint) = 0;
#else // @header-generator platform
    virtual void packetSentTo(::NetworkIdentifier const& target, ::Packet const& packet, uint size) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void packetReceivedFrom(::NetworkIdentifier const&, ::Packet const&, uint) = 0;
#else // @header-generator platform
    virtual void packetReceivedFrom(::NetworkIdentifier const& source, ::Packet const& packet, uint size) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void dataSentTo(::NetworkIdentifier const&, std::string_view) = 0;
#else // @header-generator platform
    virtual void dataSentTo(::NetworkIdentifier const& target, ::std::string_view data) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void dataReceivedFrom(::NetworkIdentifier const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void dataReceivedFrom(::NetworkIdentifier const& source, ::std::string const& data) = 0;
#endif // @header-generator platform

    virtual void onObserveeDestroyed();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onObserveeDestroyed();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND
};
