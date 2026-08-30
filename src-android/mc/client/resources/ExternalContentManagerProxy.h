#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
