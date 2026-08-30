#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/FileImpl.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class LruFile : public ::Core::FileImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileImpl>> mFile;
    ::ll::UntypedStorage<8, 24>                               mPath;
    // NOLINTEND

public:
    // prevent constructor by default
    LruFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LruFile() = default;

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
