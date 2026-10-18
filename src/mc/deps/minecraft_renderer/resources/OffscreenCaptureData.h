#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedImageResource; }
// clang-format on

struct OffscreenCaptureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mWidth;
    ::ll::TypedStorage<4, 4, uint> mHeight;
    ::ll::UntypedStorage<8, 24>    mCaptureImage;
    // NOLINTEND

public:
    // prevent constructor by default
    OffscreenCaptureData();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct OffscreenCaptureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk59fd72;
    ::ll::UntypedStorage<4, 4>  mUnkde1fa8;
    ::ll::UntypedStorage<8, 24> mUnk8285b9;
    // NOLINTEND

public:
    // prevent constructor by default
    OffscreenCaptureData& operator=(OffscreenCaptureData const&);
    OffscreenCaptureData(OffscreenCaptureData const&);
    OffscreenCaptureData();
};
#else // @header-generator platform
struct OffscreenCaptureData {};
#endif // @header-generator platform
#endif // @header-generator platform
