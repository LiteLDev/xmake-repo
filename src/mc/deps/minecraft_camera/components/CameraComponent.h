#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/string/HashedString.h"

namespace MinecraftCamera {

struct CameraComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>                          mId;
    ::ll::TypedStorage<4, 16, ::glm::qua<float, (glm::qualifier)0>>    mOrientation;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mPosition;
    ::ll::TypedStorage<4, 4, float>                                    mAspectRatio;
    ::ll::TypedStorage<4, 4, float>                                    mFieldOfView;
    ::ll::TypedStorage<4, 4, float>                                    mNearPlane;
    ::ll::TypedStorage<4, 4, float>                                    mFarPlane;
    ::ll::TypedStorage<4, 64, ::Matrix>                                mPostViewTransform;
    ::ll::TypedStorage<4, 64, ::Matrix>                                mSavedProjection;
    ::ll::TypedStorage<4, 64, ::Matrix>                                mSavedModelView;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>    mId;
    ::ll::TypedStorage<4, 16, ::glm::qua<float>> mOrientation;
    ::ll::TypedStorage<4, 12, ::glm::vec3>       mPosition;
    ::ll::TypedStorage<4, 4, float>              mAspectRatio;
    ::ll::TypedStorage<4, 4, float>              mFieldOfView;
    ::ll::TypedStorage<4, 4, float>              mNearPlane;
    ::ll::TypedStorage<4, 4, float>              mFarPlane;
    ::ll::TypedStorage<4, 64, ::Matrix>          mPostViewTransform;
    ::ll::TypedStorage<4, 64, ::Matrix>          mSavedProjection;
    ::ll::TypedStorage<4, 64, ::Matrix>          mSavedModelView;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CameraComponent& operator=(CameraComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CameraComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CameraComponent(::MinecraftCamera::CameraComponent&&);
#else // @header-generator platform
    MCAPI CameraComponent(::MinecraftCamera::CameraComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CameraComponent(::MinecraftCamera::CameraComponent const&);
#else // @header-generator platform
    MCAPI CameraComponent(::MinecraftCamera::CameraComponent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MinecraftCamera::CameraComponent& operator=(::MinecraftCamera::CameraComponent&&);
#else // @header-generator platform
    MCAPI ::MinecraftCamera::CameraComponent& operator=(::MinecraftCamera::CameraComponent&&);

    MCAPI ~CameraComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MinecraftCamera::CameraComponent&&);
#else // @header-generator platform
    MCAPI void* $ctor(::MinecraftCamera::CameraComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::MinecraftCamera::CameraComponent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::MinecraftCamera::CameraComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace MinecraftCamera
