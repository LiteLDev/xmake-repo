#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/raknet/RNS2Type.h"
#include "mc/deps/raknet/SystemAddress.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace RakNet { class RNS2EventHandler; }
#else // @header-generator platform
namespace RakNet { struct RNS2_SendParameters; }
#endif // @header-generator platform
// clang-format on

namespace RakNet {

#if defined(LL_PLAT_A) // @header-generator platform
class RakNetSocket2 : public ::std::enable_shared_from_this<RakNet::RakNetSocket2> {
#else // @header-generator platform
class RakNetSocket2 : public ::std::enable_shared_from_this<::RakNet::RakNetSocket2> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::RakNet::RNS2EventHandler*> eventHandler;
    ::ll::TypedStorage<4, 4, ::RakNet::RNS2Type>          socketType;
    ::ll::TypedStorage<4, 4, int>                         socketProtocolType;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>   boundAddress;
    ::ll::TypedStorage<4, 4, uint>                        userConnectionSocketIndex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>   mUnk45c154;
    ::ll::UntypedStorage<4, 4>   mUnk71ae1a;
    ::ll::UntypedStorage<4, 4>   mUnkf42590;
    ::ll::UntypedStorage<8, 136> mUnk164a1f;
    ::ll::UntypedStorage<4, 4>   mUnk923992;
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetSocket2& operator=(RakNetSocket2 const&);
    RakNetSocket2(RakNetSocket2 const&);
    RakNetSocket2();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RakNetSocket2() = default;

    virtual int Send(::RakNet::RNS2_SendParameters* sendParameters, char const* file, uint line) = 0;

    virtual void SetMulticastInterface(int interfaceIndex);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace RakNet
