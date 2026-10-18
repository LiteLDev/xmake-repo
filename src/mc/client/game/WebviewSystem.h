#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/game/WebviewInterfaceType.h"
#include "mc/deps/core/minecraft/threading/EnableFIFOQueueForMainThread.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
class WebviewInterface;
class WebviewObserver;
namespace Automation { class AutomationSession; }
namespace Webview { struct Extension; }
// clang-format on

class WebviewSystem : public ::Bedrock::Threading::EnableFIFOQueueForMainThread {
#else // @header-generator platform
class WebviewSystem {
#endif // @header-generator platform
public:
    // WebviewSystem inner types declare
    // clang-format off
    struct InterfaceStorage;
    // clang-format on

    // WebviewSystem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct InterfaceStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<WebviewInterface>> mInterface;
        ::ll::TypedStorage<8, 8, std::unique_ptr<WebviewObserver>>   mObserver;
        // NOLINTEND

    public:
        // prevent constructor by default
        InterfaceStorage& operator=(InterfaceStorage const&);
        InterfaceStorage(InterfaceStorage const&);
    };

    using InterfaceTypeArray = std::array<WebviewSystem::InterfaceStorage, 2>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, std::array<WebviewSystem::InterfaceStorage, 2>> mInterfaces;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                               mMinecraftGame;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Automation::AutomationSession>> mAutomationSession;
    // NOLINTEND

public:
    // prevent constructor by default
    WebviewSystem& operator=(WebviewSystem const&);
    WebviewSystem(WebviewSystem const&);
    WebviewSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WebviewSystem();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WebviewSystem(::IMinecraftGame&);

    MCNAPI std::shared_ptr<WebviewInterface> _createInterface(::WebviewInterfaceType);

    MCNAPI void _registerListeners(::WebviewInterfaceType);

    MCNAPI std::shared_ptr<WebviewInterface> getInterface(::WebviewInterfaceType);

    MCNAPI std::shared_ptr<WebviewInterface> getOrCreateInterface(::WebviewInterfaceType);

    MCNAPI bool needsFramePriority() const;

    MCNAPI void stopAllInterfaces();

    MCNAPI void stopInterface(::WebviewInterfaceType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct InterfaceStorage {};
#endif // @header-generator platform
};
