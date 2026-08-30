#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/IRNS2_Berkley.h"
#include "mc/deps/raknet/LocklessUint32_t.h"
#include "mc/deps/raknet/RNS2_BerkleyBindParameters.h"

namespace RakNet {

class RNS2_Berkley : public ::RakNet::IRNS2_Berkley {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                   rns2Socket;
    ::ll::TypedStorage<8, 64, ::RakNet::RNS2_BerkleyBindParameters> binding;
    ::ll::TypedStorage<4, 44, ::RakNet::LocklessUint32_t>           isRecvFromLoopThreadActive;
    ::ll::TypedStorage<1, 1, bool volatile>                         endThreads;
    // NOLINTEND
};

} // namespace RakNet
