#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class PlatformImageService {
public:
    // PlatformImageService inner types define
    using RequestImage = ::brstd::function_ref<void(const std::string&, std::function<void(const Core::Path&)>)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCacheAvailable;
    ::ll::UntypedStorage<8, 24>    mImageCache;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformImageService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlatformImageService(std::string const&, ::Core::PathBuffer<std::string> const&);

    MCNAPI ::Core::PathBuffer<std::string> getDisplayPicture(
        std::string const&,
        ::brstd::function_ref<void(const std::string&, std::function<void(const Core::Path&)>)>,
        std::function<void(Core::Path)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, ::Core::PathBuffer<std::string> const&);
    // NOLINTEND
};
#else // @header-generator platform
class PlatformImageService {};
#endif // @header-generator platform

} // namespace Social
