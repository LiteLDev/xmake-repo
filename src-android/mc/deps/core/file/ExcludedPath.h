#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace Core {

struct ExcludedPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>    mPath;
    ::ll::TypedStorage<1, 1, bool> mCopyLooseFile;
    // NOLINTEND

public:
    // prevent constructor by default
    ExcludedPath();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExcludedPath(::Core::PathBuffer<std::string>, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::PathBuffer<std::string>, bool);
    // NOLINTEND
};

} // namespace Core
