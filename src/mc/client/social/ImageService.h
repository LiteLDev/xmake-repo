#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Social { class XboxLiveUser; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Social {

class ImageService {
public:
    // ImageService inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class image_size : int {
        Full   = 0,
        Small  = 1,
        Medium = 2,
        Large  = 3,
    };
#else // @header-generator platform
    enum class image_priority : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class image_priority : int {
        Normal = 0,
        High   = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Social::XboxLiveUser&> mUser;
    ::ll::TypedStorage<1, 1, bool>                    mCacheAvailable;
    ::ll::UntypedStorage<8, 24>                       mImageCache;
    ::ll::TypedStorage<8, 240, ::TaskGroup>           mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageService& operator=(ImageService const&);
    ImageService(ImageService const&);
    ImageService();
#else // @header-generator platform
    enum class image_size : int {};
#endif // @header-generator platform
};

} // namespace Social
