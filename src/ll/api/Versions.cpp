#include "ll/api/Versions.h"
#include "ll/core/Version.h"

namespace ll {
int getNetworkProtocolVersion() { return TARGET_BDS_PROTOCOL_VERSION; }

bool isClient() {
#if defined(LL_PLAT_C) || defined(LL_PLAT_A)
    return true;
#else
    return false;
#endif
}
} // namespace ll
