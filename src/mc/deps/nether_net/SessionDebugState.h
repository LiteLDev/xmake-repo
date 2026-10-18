#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct SessionDebugState {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>              mLocalOffer;
    ::ll::TypedStorage<8, 24, std::string>              mRemoteOffer;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mLocalCandidates;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mRemoteCandidates;
    ::ll::TypedStorage<8, 24, std::string>              mActiveLocalCandidate;
    ::ll::TypedStorage<8, 24, std::string>              mActiveRemoteCandidate;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkb13ba0;
    ::ll::UntypedStorage<8, 32> mUnkf28068;
    ::ll::UntypedStorage<8, 24> mUnkaa0644;
    ::ll::UntypedStorage<8, 24> mUnkff8f6b;
    ::ll::UntypedStorage<8, 32> mUnk786e6d;
    ::ll::UntypedStorage<8, 32> mUnkc77687;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SessionDebugState& operator=(SessionDebugState const&);
    SessionDebugState(SessionDebugState const&);
    SessionDebugState();
#endif // @header-generator platform
};

} // namespace NetherNet
