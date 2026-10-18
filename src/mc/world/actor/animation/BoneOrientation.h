#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/BoneAnimationRelativeMode.h"
#include "mc/world/actor/animation/BoneBindingMethod.h"
#include "mc/world/actor/animation/BoneOrientationTransform.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/animation/BoneTransformType.h"

// auto generated forward declare list
// clang-format off
namespace DirectX { struct XMMATRIX; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class BoneOrientation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                         mParentBoneIndex;
    ::ll::TypedStorage<4, 4, ::SkeletalHierarchyIndex>    mParentSkeletalHierarchyIndex;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>             mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>             mName;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 64, ::Matrix>                   mMatrix;
    ::ll::TypedStorage<4, 36, ::BoneOrientationTransform> mTransform;
    ::ll::TypedStorage<4, 36, ::BoneOrientationTransform> mDefaultTransform;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Matrix>>     mLocalPreTransformMatrix;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Matrix>> mLocalPreTransformMatrix;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::ExpressionNode>           mBoneBindingExpression;
    ::ll::TypedStorage<4, 12, ::Vec3>                     mPivot;
    ::ll::TypedStorage<1, 1, ::BoneBindingMethod>         mBoneBindingMethod;
    ::ll::TypedStorage<1, 1, ::BoneAnimationRelativeMode> mRotationRelativeMode;
    ::ll::TypedStorage<1, 1, bool>                        mOverrideStackMatrix;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BoneOrientation();

    MCNAPI explicit BoneOrientation(::HashedString const&);

    MCNAPI BoneOrientation(::BoneOrientation const&);

    MCNAPI ::ExpressionNode const* getBoneBindingExpression() const;

    MCNAPI ::BoneBindingMethod getBoneBindingMethod() const;

    MCNAPI ::BoneOrientationTransform& getDefaultTransform();

    MCNAPI ::Matrix const& getMatrix() const;

    MCNAPI ::HashedString const& getName() const;

    MCNAPI ::Vec3 const& getPivot() const;

    MCNAPI ::Vec3& getPivot();

    MCNAPI ::BoneAnimationRelativeMode getRotationRelativeMode() const;

    MCNAPI ::BoneOrientationTransform const& getTransform() const;

    MCNAPI ::BoneOrientation& operator=(::BoneOrientation const&);

    MCNAPI void setBoneBindingExpression(std::string const&, ::MolangVersion const);

    MCNAPI void setBoneBindingMethod(::BoneBindingMethod);

    MCNAPI void setDefaultPose();

    MCNAPI void setDefaultTransform(::BoneOrientationTransform const&);

    MCNAPI void setMatrix(::Matrix const&);

    MCNAPI void setOverrideStackMatrix(bool);

    MCNAPI void setPivot(::Vec3 const&);

    MCNAPI void setTransform(::BoneOrientationTransform const&);

    MCNAPI void updateBoneTransform(::Vec3 const*, ::DirectX::XMMATRIX&);

    MCNAPI ~BoneOrientation();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI BoneOrientation();

    MCAPI BoneOrientation(::BoneOrientation&&);

    MCAPI explicit BoneOrientation(::HashedString const& boneName);

    MCAPI BoneOrientation(::BoneOrientation const& rhs);

    MCAPI ::BoneOrientation& operator=(::BoneOrientation const& rhs);

    MCAPI void setBoneBindingExpression(::std::string const& bindingExpression, ::MolangVersion molangVersion);

    MCAPI void LL_CC_V updateBoneTransform(::Vec3 const* offset, ::DirectX::XMMATRIX& boneToEntitySpaceMatrix);

    MCAPI ~BoneOrientation();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BoneOrientation& getIdentityBoneOrientation();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::BoneOrientation& getIdentityBoneOrientation();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::HashedString const&);

    MCNAPI void* $ctor(::BoneOrientation const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BoneOrientation&&);

    MCAPI void* $ctor(::HashedString const& boneName);

    MCAPI void* $ctor(::BoneOrientation const& rhs);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
