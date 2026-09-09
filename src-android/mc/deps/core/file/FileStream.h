#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileStdStreamBuf.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class PathView; }
// clang-format on

namespace Core {

class FileStream : public ::std::iostream {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::Core::FileStdStreamBuf> mStreamBuffer;
    ::ll::UntypedStorage<1, 160>                         mLoggingEnabled;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileStream();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileStream();

    MCNAPI FileStream(::Core::PathView, uint);

    MCNAPI FileStream(ulong, ::Core::PathView, uint);

    MCNAPI void open(::Core::PathView, uint);

    MCNAPI void open(::Core::PathView, ::Core::FileOpenMode);

    MCNAPI void setLoggingEnabled(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Core::PathView, uint);

    MCNAPI void* $ctor(ulong, ::Core::PathView, uint);
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

} // namespace Core
