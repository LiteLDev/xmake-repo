#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
