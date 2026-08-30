#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct SessionDebugState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              mLocalOffer;
    ::ll::TypedStorage<8, 24, std::string>              mRemoteOffer;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mLocalCandidates;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mRemoteCandidates;
    ::ll::TypedStorage<8, 24, std::string>              mActiveLocalCandidate;
    ::ll::TypedStorage<8, 24, std::string>              mActiveRemoteCandidate;
    // NOLINTEND
};

} // namespace NetherNet
