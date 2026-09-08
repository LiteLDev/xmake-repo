#if defined(_MSC_VER)
#pragma warning(disable : 4099)
#endif

#if (defined(LL_PLAT_C) + defined(LL_PLAT_S) + defined(LL_PLAT_A)) != 1
#error Exactly one LL_PLAT_* macro must be defined
#endif

#if defined(LL_PLAT_A)
#include "levilamina_header_include_all_android.h"
#else
// Upstream H forward-declares these types before instantiating value storage.
// Use their actual upstream definitions while preserving the published blobs.
#include "mc/deps/core/memory/MoodyCamelBedrockMemoryTraits.h"
#include "mc/external/bx/StringT.h"
#if defined(LL_PLAT_S)
#include "levilamina_header_include_all_server.h"
#else
#include "levilamina_header_include_all_client.h"
#endif
#endif

int main() { return 0; }
