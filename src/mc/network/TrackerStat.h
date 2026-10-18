#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/network/NetworkIdentifier.h"
#else // @header-generator platform
#endif // @header-generator platform

struct TrackerStat {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, uint> sentCount;
    ::ll::TypedStorage<4, 4, uint> sentBytes;
    ::ll::TypedStorage<4, 4, uint> receivedCount;
    ::ll::TypedStorage<4, 4, uint> receivedBytes;
    ::ll::TypedStorage<4, 4, uint> sampleNum;
    ::ll::TypedStorage<8, 40, std::unordered_map<NetworkIdentifier, std::vector<std::reference_wrapper<const std::string>>>> packetsSent;
    ::ll::TypedStorage<8, 40, std::unordered_map<NetworkIdentifier, std::vector<std::reference_wrapper<const std::string>>>> packetsReceived;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk9416ad;
    ::ll::UntypedStorage<4, 4>  mUnk9c82e2;
    ::ll::UntypedStorage<4, 4>  mUnkff9a49;
    ::ll::UntypedStorage<4, 4>  mUnkcec4f8;
    ::ll::UntypedStorage<4, 4>  mUnk4894a5;
    ::ll::UntypedStorage<8, 64> mUnk44afff;
    ::ll::UntypedStorage<8, 64> mUnk4829bf;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TrackerStat& operator=(TrackerStat const&);
    TrackerStat(TrackerStat const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TrackerStat();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TrackerStat();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
