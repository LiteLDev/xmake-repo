#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Frustum.h"
#include "mc/deps/renderer/MatrixStack.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Frustum.h"
#include "mc/deps/renderer/MatrixStack.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class Camera {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::MatrixStack>                              viewMatrixStack;
    ::ll::TypedStorage<8, 72, ::MatrixStack>                              worldMatrixStack;
    ::ll::TypedStorage<8, 72, ::MatrixStack>                              projectionMatrixStack;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>> mInverseViewMatrix;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>    mRight;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>    mUp;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>    mForward;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>    mPosition;
    ::ll::TypedStorage<4, 4, float>                                       mAspectRatio;
    ::ll::TypedStorage<4, 4, float>                                       mFov;
    ::ll::TypedStorage<4, 4, float>                                       mZNear;
    ::ll::TypedStorage<4, 4, float>                                       mZFar;
    ::ll::TypedStorage<4, 192, ::Frustum>                                 mFrustum;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Camera();

    MCNAPI ::glm::vec<3, float, (glm::qualifier)0> const& getForwardVector() const;

    MCNAPI ::Frustum const& getFrustum() const;

    MCNAPI ::glm::vec<3, float, (glm::qualifier)0> const& getPosition() const;

    MCNAPI ::glm::mat<4, 4, float, (glm::qualifier)0> getProjectionMatrix() const;

    MCNAPI ::glm::vec<3, float, (glm::qualifier)0> const& getRightVector() const;

    MCNAPI ::glm::vec<3, float, (glm::qualifier)0> const& getUpVector() const;

    MCNAPI ::glm::mat<4, 4, float, (glm::qualifier)0> getViewProjectionMatrix() const;

    MCNAPI void updateViewMatrixDependencies();

    MCNAPI ~Camera();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class Camera {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::MatrixStack> viewMatrixStack;
    ::ll::TypedStorage<8, 64, ::MatrixStack> worldMatrixStack;
    ::ll::TypedStorage<8, 64, ::MatrixStack> projectionMatrixStack;
    ::ll::TypedStorage<4, 64, ::glm::mat4x4> mInverseViewMatrix;
    ::ll::TypedStorage<4, 12, ::glm::vec3>   mRight;
    ::ll::TypedStorage<4, 12, ::glm::vec3>   mUp;
    ::ll::TypedStorage<4, 12, ::glm::vec3>   mForward;
    ::ll::TypedStorage<4, 12, ::glm::vec3>   mPosition;
    ::ll::TypedStorage<4, 4, float>          mAspectRatio;
    ::ll::TypedStorage<4, 4, float>          mFov;
    ::ll::TypedStorage<4, 4, float>          mZNear;
    ::ll::TypedStorage<4, 4, float>          mZFar;
    ::ll::TypedStorage<4, 192, ::Frustum>    mFrustum;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void updateViewMatrixDependencies();

    MCAPI ~Camera();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class Camera {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
