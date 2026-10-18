#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/resources/ExternalContentManagerProxyCallbacks.h"
#include "mc/client/resources/ImportContextType.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ImportContext;
class PackManifest;
class ToastManager;
namespace Core { class Path; }
// clang-format on

class ExternalContentManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mCallbacks;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalContentManagerProxy();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ExternalContentManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk82e385;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalContentManagerProxy& operator=(ExternalContentManagerProxy const&);
    ExternalContentManagerProxy(ExternalContentManagerProxy const&);
    ExternalContentManagerProxy();
};
#else // @header-generator platform
class ExternalContentManagerProxy {};
#endif // @header-generator platform
#endif // @header-generator platform
