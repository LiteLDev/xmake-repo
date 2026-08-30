#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/SkeletalHierarchyBone.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"

// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
// clang-format on

class SkeletalHierarchy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SkeletalHierarchyIndex>            mGlobalSkeletalHierarchyIndex;
    ::ll::TypedStorage<8, 24, std::vector<SkeletalHierarchyBone>> mHierarchyBones;
    // NOLINTEND

public:
    // prevent constructor by default
    SkeletalHierarchy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkeletalHierarchy();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SkeletalHierarchyIndex getSkeletalHierarchyIndex(::DataDrivenGeometry const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::vector<std::unique_ptr<SkeletalHierarchy>>& _globalSkeletalHierarchies();
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
