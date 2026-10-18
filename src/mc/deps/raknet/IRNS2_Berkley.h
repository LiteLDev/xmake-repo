#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/raknet/RNS2BindResult.h"
#endif // @header-generator platform
#include "mc/deps/raknet/RakNetSocket2.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RNS2_BerkleyBindParameters; }
// clang-format on
#endif // @header-generator platform

namespace RakNet {

#if defined(LL_PLAT_A) // @header-generator platform
class IRNS2_Berkley : public ::RakNet::RakNetSocket2 {};
#else // @header-generator platform
class IRNS2_Berkley : public ::RakNet::RakNetSocket2 {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::RakNet::RNS2BindResult
    Bind(::RakNet::RNS2_BerkleyBindParameters* bindParameters, char const* file, uint line) = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace RakNet
