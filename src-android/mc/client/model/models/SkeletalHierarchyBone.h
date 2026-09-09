#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class ModelPart;
// clang-format on

class SkeletalHierarchyBone {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mName;
    ::ll::TypedStorage<4, 12, ::Vec3>         mPos;
    ::ll::TypedStorage<4, 4, int>             mParentIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    SkeletalHierarchyBone& operator=(SkeletalHierarchyBone const&);
    SkeletalHierarchyBone();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkeletalHierarchyBone();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
