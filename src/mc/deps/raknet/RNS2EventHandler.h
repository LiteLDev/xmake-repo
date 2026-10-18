#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace RakNet { struct RNS2RecvStruct; }
// clang-format on

#endif // @header-generator platform
namespace RakNet {

#if defined(LL_PLAT_A) // @header-generator platform
class RNS2EventHandler {};
#else // @header-generator platform
class RNS2EventHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RNS2EventHandler() = default;

    virtual void OnRNS2Recv(::RakNet::RNS2RecvStruct* recvStruct) = 0;

    virtual void DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct* s, char const* file, uint line) = 0;

    virtual ::RakNet::RNS2RecvStruct* AllocRNS2RecvStruct(char const* file, uint line) = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace RakNet
