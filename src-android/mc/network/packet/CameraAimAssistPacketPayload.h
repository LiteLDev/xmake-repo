#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

struct CameraAimAssistPacketPayload {
public:
    // CameraAimAssistPacketPayload inner types define
    enum class TargetMode : uchar {
        Angle    = 0,
        Distance = 1,
        _count   = 2,
    };

    enum class Action : uchar {
        Set    = 0,
        Clear  = 1,
        _count = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                               mPresetId;
    ::ll::TypedStorage<4, 8, ::Vec2>                                     mViewAngle;
    ::ll::TypedStorage<4, 4, float>                                      mDistance;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistPacketPayload::TargetMode> mTargetMode;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistPacketPayload::Action>     mAction;
    ::ll::TypedStorage<1, 1, bool>                                       mShowDebugRender;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CameraAimAssistPacketPayload(::CameraAimAssistPacketPayload::Action);

    MCNAPI CameraAimAssistPacketPayload(std::string, ::Vec2 const&, float, ::CameraAimAssistPacketPayload::TargetMode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CameraAimAssistPacketPayload::Action);

    MCNAPI void* $ctor(std::string, ::Vec2 const&, float, ::CameraAimAssistPacketPayload::TargetMode);
    // NOLINTEND
};
