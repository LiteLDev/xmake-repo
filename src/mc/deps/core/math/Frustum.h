#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/FrustumEdges.h"

#else // @header-generator platform
#endif // @header-generator platform
class Frustum {
public:
    // Frustum inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum FrustumSide : uchar {
#else // @header-generator platform
    enum class FrustumSide : uchar {
#endif // @header-generator platform
        Right            = 0,
        Left             = 1,
        Bottom           = 2,
        Top              = 3,
        Back             = 4,
        Front            = 5,
        NumFrustumPlanes = 6,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum Plane : uchar {
#else // @header-generator platform
    enum class Plane : uchar {
#endif // @header-generator platform
        PlaneNormalX          = 0,
        PlaneNormalY          = 1,
        PlaneNormalZ          = 2,
        PlaneToOriginDistance = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 96, ::glm::vec<4, float, (glm::qualifier)0>[6]> mFrustumPlanes;
    ::ll::TypedStorage<4, 48, ::FrustumEdges>                             mNearClippingPlaneEdges;
    ::ll::TypedStorage<4, 48, ::FrustumEdges>                             mFarClippingPlaneEdges;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 96> mUnk8b8fad;
    ::ll::UntypedStorage<4, 48> mUnk7522ba;
    ::ll::UntypedStorage<4, 48> mUnkae1f35;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Frustum& operator=(Frustum const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Frustum(Frustum const&);
    Frustum();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Frustum();

    MCNAPI void calculateFrustum(::glm::mat<4, 4, float, (glm::qualifier)0> const&);

    MCNAPI bool
    cubeInFrustum(::glm::vec<3, float, (glm::qualifier)0> const&, ::glm::vec<3, float, (glm::qualifier)0> const&) const;

    MCNAPI ::FrustumEdges const& getNearClippingPlaneEdges() const;

    MCNAPI bool pointInFrustum(::glm::vec<3, float, (glm::qualifier)0> const&) const;

    MCNAPI void setupFrustum(::Frustum::FrustumSide const, ::glm::vec<3, float, (glm::qualifier)0> const&, float const);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Frustum getFrustum(::glm::mat<4, 4, float, (glm::qualifier)0> const&);

    MCNAPI static ::Frustum getFrustum(
        ::glm::mat<4, 4, float, (glm::qualifier)0> const&,
        ::glm::mat<4, 4, float, (glm::qualifier)0> const&,
        ::glm::mat<4, 4, float, (glm::qualifier)0> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void calculateFrustum(::glm::mat4x4 const& mvp);

    MCNAPI bool cubeInFrustum(::glm::vec3 const& min, ::glm::vec3 const& max) const;

    MCNAPI bool pointInFrustum(::glm::vec3 const& point) const;
#endif
#endif // @header-generator platform
    // NOLINTEND
};
