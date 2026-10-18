#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ClientCameraAimAssistPacketAction.h"

struct ClientCameraAimAssistPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                        mCameraPresetId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                      mCameraPresetId;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ClientCameraAimAssistPacketAction> mAction;
    ::ll::TypedStorage<1, 1, bool>                                mAllowAimAssist;
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ClientCameraAimAssistPacketPayload();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ClientCameraAimAssistPacketPayload(std::string const&, bool);

    MCNAPI ClientCameraAimAssistPacketPayload(::ClientCameraAimAssistPacketAction, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ClientCameraAimAssistPacketPayload(::std::string const& cameraPresetId, bool allowAimAssist);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, bool);

    MCNAPI void* $ctor(::ClientCameraAimAssistPacketAction, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::string const& cameraPresetId, bool allowAimAssist);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
