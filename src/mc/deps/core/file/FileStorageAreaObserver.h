#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Core {

#if defined(LL_PLAT_A) // @header-generator platform
class FileStorageAreaObserver : public ::Core::Observer<Core::FileStorageAreaObserver, Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _onBeginWrites() = 0;

    virtual void _onEndWrites() = 0;

    virtual void _onWriteFile(::Core::PathView) = 0;

    virtual void _onDeleteFile(::Core::PathView) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class FileStorageAreaObserver {};
#endif // @header-generator platform

} // namespace Core
