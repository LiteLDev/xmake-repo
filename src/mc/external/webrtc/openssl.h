#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::openssl {
// functions
// NOLINTBEGIN
MCNAPI bool LoadBuiltinSSLRootCertificates(::ssl_ctx_st* ctx);

MCNAPI void LogSSLErrors(::std::string_view prefix);

MCNAPI bool VerifyPeerCertMatchesHost(::ssl_st* ssl, ::std::string_view host);
// NOLINTEND

} // namespace webrtc::openssl
#endif // @header-generator platform
