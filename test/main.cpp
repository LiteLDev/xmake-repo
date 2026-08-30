#if defined(_MSC_VER)
#pragma warning(disable : 4099)
#endif

#if (defined(LL_PLAT_C) + defined(LL_PLAT_S) + defined(LL_PLAT_A)) != 1
#error Exactly one LL_PLAT_* macro must be defined
#endif

#if defined(LL_PLAT_A)
#include "levilamina_header_include_all_android.h"
#elif defined(LL_PLAT_S)
#include "levilamina_header_include_all_server.h"
#else
#include "levilamina_header_include_all_client.h"
#endif

int main() { return 0; }
