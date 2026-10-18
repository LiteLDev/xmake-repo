#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 12, ::Vec3> mPos;
        ::ll::TypedStorage<4, 12, ::Vec3> mDefaultPos;
        ::ll::TypedStorage<1, 1, bool>    mIsAttachedToPlayer;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 12> mUnk47f807;
        ::ll::UntypedStorage<4, 12> mUnkbf490f;
        ::ll::UntypedStorage<1, 1>  mUnka644d9;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        State& operator=(State const&);
        State(State const&);
        State();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                     mActiveCameraPreset;
    ::ll::TypedStorage<8, 24, std::vector<ServerCameraStatesComponent::State>> mStates;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                       mActiveCameraPreset;
    ::ll::TypedStorage<8, 24, ::std::vector<::ServerCameraStatesComponent::State>> mStates;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ServerCameraStatesComponent& operator=(ServerCameraStatesComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ServerCameraStatesComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerCameraStatesComponent(::ServerCameraStatesComponent const&);

    MCAPI explicit ServerCameraStatesComponent(::CameraPresets const& presets);

    MCFOLD ::ServerCameraStatesComponent& operator=(::ServerCameraStatesComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ServerCameraStatesComponent const&);

    MCAPI void* $ctor(::CameraPresets const& presets);
    // NOLINTEND
#endif // @header-generator platform
};
