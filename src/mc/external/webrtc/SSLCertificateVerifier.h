#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SSLCertificate; }
// clang-format on

namespace webrtc {

class SSLCertificateVerifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SSLCertificateVerifier() = default;

    virtual bool Verify(::webrtc::SSLCertificate const&) = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
