#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ClientCameraAimAssistPacketAction.h"

struct ClientCameraAimAssistPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                        mCameraPresetId;
    ::ll::TypedStorage<1, 1, ::ClientCameraAimAssistPacketAction> mAction;
    ::ll::TypedStorage<1, 1, bool>                                mAllowAimAssist;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientCameraAimAssistPacketPayload(std::string const&, bool);

    MCNAPI ClientCameraAimAssistPacketPayload(::ClientCameraAimAssistPacketAction, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, bool);

    MCNAPI void* $ctor(::ClientCameraAimAssistPacketAction, bool);
    // NOLINTEND
};
