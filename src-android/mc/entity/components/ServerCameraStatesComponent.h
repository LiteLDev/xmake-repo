#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class CameraPresets;
// clang-format on

struct ServerCameraStatesComponent {
public:
    // ServerCameraStatesComponent inner types declare
    // clang-format off
    struct State;
    // clang-format on

    // ServerCameraStatesComponent inner types define
    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mPos;
        ::ll::TypedStorage<4, 12, ::Vec3> mDefaultPos;
        ::ll::TypedStorage<1, 1, bool>    mIsAttachedToPlayer;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                     mActiveCameraPreset;
    ::ll::TypedStorage<8, 24, std::vector<ServerCameraStatesComponent::State>> mStates;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerCameraStatesComponent& operator=(ServerCameraStatesComponent const&);
};
