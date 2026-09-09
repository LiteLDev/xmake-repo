#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

namespace Core {

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

} // namespace Core
