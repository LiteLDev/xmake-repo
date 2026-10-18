#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"

class ModelPartLocator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SkeletalHierarchyIndex> mSkeletalHierarchyIndex;
    ::ll::TypedStorage<4, 4, int>                      mBoneMapping;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>          mBoneName;
    ::ll::TypedStorage<8, 40, ::HashedString>          mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>          mBoneName;
    ::ll::TypedStorage<8, 48, ::HashedString>          mName;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                  mOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>                  mPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                  mRotation;
    ::ll::TypedStorage<1, 1, bool>                     mIgnoreInheritedScale;
    ::ll::TypedStorage<4, 64, ::Matrix>                mWorldAbsoluteTransform;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ModelPartLocator(std::string const&, std::string const&, ::Vec3 const&, bool);

    MCNAPI bool compare(::ModelPartLocator const&, bool) const;

    MCNAPI ::Matrix const& getWorldAbsoluteTransform() const;

    MCNAPI void setWorldAbsoluteTransform(::Matrix const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, std::string const&, ::Vec3 const&, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool compare(::ModelPartLocator const& rhs, bool compareSkeletalHierarchyIndexAndBoneMapping) const;

    MCAPI void setWorldAbsoluteTransform(::Matrix const& transform);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
