#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceCandidate; }
namespace webrtc { class SdpParseError; }
namespace webrtc { struct SdpParseError; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace NetherNet {

class CandidateAdd {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, unsigned long long> mSessionId;
    ::ll::TypedStorage<8, 24, std::string>       mSdp;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkd112e8;
    ::ll::UntypedStorage<8, 32> mUnkb6daf5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CandidateAdd& operator=(CandidateAdd const&);
    CandidateAdd(CandidateAdd const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& kIdentifier();
    // NOLINTEND
#else // @header-generator platform
    CandidateAdd();
#endif // @header-generator platform
};

} // namespace NetherNet
