#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ViewId.h"
#include "mc/client/gui/oreui/views/FrameId.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ViewId.h"
#include "mc/client/gui/oreui/views/FrameId.h"
#include "mc/platform/threading/Mutex.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace OreUI {

class FramesToPaintQueue {
public:
    // FramesToPaintQueue inner types declare
    // clang-format off
    struct ViewFrame;
    // clang-format on

    // FramesToPaintQueue inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ViewFrame {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> viewId;
        ::ll::UntypedStorage<4, 4> frameId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>                                        mMutex;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::FramesToPaintQueue::ViewFrame>> mFrames;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ViewFrame {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::OreUI::ViewId>  viewId;
        ::ll::TypedStorage<4, 4, ::OreUI::FrameId> frameId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                           mMutex;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FramesToPaintQueue::ViewFrame>> mFrames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clear(::OreUI::ViewId viewId);
    // NOLINTEND
#else // @header-generator platform
    struct ViewFrame {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
