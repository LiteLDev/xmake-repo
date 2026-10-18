#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

struct CameraAimAssistPacketPayload {
public:
    // CameraAimAssistPacketPayload inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class Action : uchar {
        Set   = 0,
        Clear = 1,
        Count = 2,
    };

#endif // @header-generator platform
    enum class TargetMode : uchar {
        Angle    = 0,
        Distance = 1,
#if defined(LL_PLAT_A) // @header-generator platform
        _count   = 2,
    };

    enum class Action : uchar {
        Set    = 0,
        Clear  = 1,
        _count = 2,
#else // @header-generator platform
        Count    = 2,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                               mPresetId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                             mPresetId;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 8, ::Vec2>                                     mViewAngle;
    ::ll::TypedStorage<4, 4, float>                                      mDistance;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistPacketPayload::TargetMode> mTargetMode;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistPacketPayload::Action>     mAction;
    ::ll::TypedStorage<1, 1, bool>                                       mShowDebugRender;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
};
