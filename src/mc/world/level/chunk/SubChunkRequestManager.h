#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
class SubChunkPacket;
class SubChunkRequestSubscriber;
// clang-format on

class SubChunkRequestManager {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::pair<DimensionType, SubChunkPos>>> mQueuedRequests;
    ::ll::TypedStorage<8, 40, std::unordered_map<DimensionType, std::unordered_map<SubChunkPos, std::vector<SubChunkRequestSubscriber*>>>> mActiveSubChunkRequests;
    ::ll::TypedStorage<8, 40, std::unordered_map<DimensionType, std::unordered_map<SubChunkPos, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>>>> mActiveSubChunkRequestStartTimes;
    ::ll::UntypedStorage<1, 140> mQueuedRequestsMutex;
    ::ll::TypedStorage<4, 40, std::mutex> mActiveRequestsMutex;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void completeSubChunkRequest(::SubChunkPacket const&);

    MCNAPI bool
    containsRequesterAtRequest(::DimensionType const&, ::SubChunkPos const&, ::SubChunkRequestSubscriber*) const;

    MCNAPI bool isPositionInProgress(::DimensionType const&, ::SubChunkPos const&) const;

    MCNAPI void queueSubChunkRequest(::DimensionType const&, ::SubChunkPos const&, ::SubChunkRequestSubscriber*);

    MCNAPI void sendSubChunkRequests(::PacketSender*, ::SubChunkPos const&, ::DimensionType const&);

    MCNAPI ~SubChunkRequestManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class SubChunkRequestManager {};
#endif // @header-generator platform
