#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/FileImpl.h"

// auto generated forward declare list
// clang-format off
struct __sFILE;
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class File_c : public ::Core::FileImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mpFile;
    ::ll::UntypedStorage<8, 24> mPath;
    // NOLINTEND

public:
    // prevent constructor by default
    File_c();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~File_c();

    virtual ::Core::PathBuffer<std::string> _getPath() const;

    virtual ulong _getBlockSize() const;

    virtual bool _isOpen();

    virtual ::Core::Result _close();

    virtual ::Core::Result _read(void*, ulong, ulong*);

    virtual ::Core::Result _readExactly(void*, ulong);

    virtual ::Core::Result _skip(ulong);

    virtual ::Core::Result _readAtPosition(ulong, void*, ulong, ulong*);

    virtual ::Core::Result _getPosition(ulong*);

    virtual ::Core::Result _setPosition(ulong);

    virtual ::Core::Result _write(void const*, ulong);

    virtual ::Core::Result _flush();

    virtual ::Core::Result _getSize(ulong*);

    virtual ::Core::Result _getRemainingSize(ulong*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Core::PathBuffer<std::string> $_getPath() const;

    MCNAPI ulong $_getBlockSize() const;

    MCNAPI bool $_isOpen();

    MCNAPI ::Core::Result $_close();

    MCNAPI ::Core::Result $_read(void*, ulong, ulong*);

    MCNAPI ::Core::Result $_readExactly(void*, ulong);

    MCNAPI ::Core::Result $_skip(ulong);

    MCNAPI ::Core::Result $_readAtPosition(ulong, void*, ulong, ulong*);

    MCNAPI ::Core::Result $_getPosition(ulong*);

    MCNAPI ::Core::Result $_setPosition(ulong);

    MCNAPI ::Core::Result $_write(void const*, ulong);

    MCNAPI ::Core::Result $_flush();

    MCNAPI ::Core::Result $_getSize(ulong*);

    MCNAPI ::Core::Result $_getRemainingSize(ulong*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
