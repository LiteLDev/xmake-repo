#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceCandidate; }
namespace webrtc { class SdpParseError; }
namespace webrtc { struct SdpParseError; }
// clang-format on

namespace NetherNet {

class CandidateAdd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, unsigned long long> mSessionId;
    ::ll::TypedStorage<8, 24, std::string>       mSdp;
    // NOLINTEND

public:
    // prevent constructor by default
    CandidateAdd& operator=(CandidateAdd const&);
    CandidateAdd(CandidateAdd const&);

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& kIdentifier();
    // NOLINTEND
};

} // namespace NetherNet
