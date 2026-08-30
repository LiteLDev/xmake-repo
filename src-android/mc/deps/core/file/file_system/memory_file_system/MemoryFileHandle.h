#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileOpenMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/FileImpl.h"

// auto generated forward declare list
// clang-format off
namespace Core { class MemoryFileSystem; }
namespace Core { class MemoryFileSystemEntryFile; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class MemoryFileHandle : public ::Core::FileImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Core::MemoryFileSystemEntryFile*> mpEntry;
    ::ll::TypedStorage<8, 8, ulong>                              mPosition;
    ::ll::TypedStorage<1, 2, ::Core::FileOpenMode>               mFileOpenMode;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryFileHandle();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MemoryFileHandle() = default;

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
};

} // namespace Core
