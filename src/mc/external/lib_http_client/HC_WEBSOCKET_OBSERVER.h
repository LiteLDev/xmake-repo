#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct HC_WEBSOCKET_OBSERVER {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct HC_WEBSOCKET_OBSERVER {};
#else // @header-generator platform
// auto generated inclusion list
#include "mc/external/lib_http_client/HCWebSocketCloseStatus.h"

struct HC_WEBSOCKET_OBSERVER {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf02763;
    ::ll::UntypedStorage<4, 4>  mUnk28b393;
    ::ll::UntypedStorage<8, 8>  mUnk9debff;
    ::ll::UntypedStorage<8, 8>  mUnkbf23cf;
    ::ll::UntypedStorage<8, 8>  mUnk831388;
    ::ll::UntypedStorage<8, 8>  mUnk677a54;
    ::ll::UntypedStorage<8, 8>  mUnk2e3ecb;
    ::ll::UntypedStorage<4, 4>  mUnk3722c0;
    // NOLINTEND

public:
    // prevent constructor by default
    HC_WEBSOCKET_OBSERVER& operator=(HC_WEBSOCKET_OBSERVER const&);
    HC_WEBSOCKET_OBSERVER(HC_WEBSOCKET_OBSERVER const&);
    HC_WEBSOCKET_OBSERVER();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HC_WEBSOCKET_OBSERVER();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int AddRef();

    MCNAPI int Release();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void BinaryMessageFragmentFunc(
        ::HC_WEBSOCKET_OBSERVER* internalHandle,
        uchar const*             payloadBytes,
        uint                     payloadSize,
        bool                     isLastFragment,
        void*                    context
    );

    MCNAPI static void
    BinaryMessageFunc(::HC_WEBSOCKET_OBSERVER* internalHandle, uchar const* bytes, uint payloadSize, void* context);

    MCNAPI static void
    CloseFunc(::HC_WEBSOCKET_OBSERVER* internalHandle, ::HCWebSocketCloseStatus status, void* context);

    MCNAPI static void MessageFunc(::HC_WEBSOCKET_OBSERVER* internalHandle, char const* message, void* context);
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
};
#endif // @header-generator platform
#endif // @header-generator platform
