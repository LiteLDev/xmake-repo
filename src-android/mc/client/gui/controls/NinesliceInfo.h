#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/ImageInfo.h"
#include "mc/deps/core/container/small_vector.h"

struct NinesliceInfo {
public:
    // NinesliceInfo inner types define
    using MultiSlice = ::Bedrock::small_vector<ImageInfo, 1>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 32, ::ImageInfo>                            mTopLeft;
    ::ll::TypedStorage<4, 32, ::ImageInfo>                            mTopRight;
    ::ll::TypedStorage<4, 32, ::ImageInfo>                            mBottomLeft;
    ::ll::TypedStorage<4, 32, ::ImageInfo>                            mBottomRight;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUVScale;
    ::ll::UntypedStorage<8, 48>                                       mLeft;
    ::ll::UntypedStorage<8, 48>                                       mTop;
    ::ll::UntypedStorage<8, 48>                                       mRight;
    ::ll::UntypedStorage<8, 48>                                       mBottom;
    ::ll::UntypedStorage<8, 48>                                       mMiddle;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~NinesliceInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
