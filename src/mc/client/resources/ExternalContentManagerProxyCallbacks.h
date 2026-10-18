#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/resources/ImportContextType.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ImportContext;
class PackManifest;
class ToastManager;
namespace Core { class Path; }
// clang-format on

struct ExternalContentManagerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCreateImportContext;
    ::ll::UntypedStorage<8, 48> mIsContentLoading;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalContentManagerProxyCallbacks& operator=(ExternalContentManagerProxyCallbacks const&);
    ExternalContentManagerProxyCallbacks(ExternalContentManagerProxyCallbacks const&);
    ExternalContentManagerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ExternalContentManagerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ExternalContentManagerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnke48a13;
    ::ll::UntypedStorage<8, 64> mUnk7c4519;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalContentManagerProxyCallbacks& operator=(ExternalContentManagerProxyCallbacks const&);
    ExternalContentManagerProxyCallbacks(ExternalContentManagerProxyCallbacks const&);
    ExternalContentManagerProxyCallbacks();
};
#else // @header-generator platform
struct ExternalContentManagerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
