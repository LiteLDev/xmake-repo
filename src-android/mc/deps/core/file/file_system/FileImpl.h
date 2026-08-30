#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileOpenMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class FlushingIOController; }
namespace Core { class FileSystemImpl; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FileImpl {
public:
    // FileImpl inner types declare
    // clang-format off
    struct WriteBufferInfo;
    // clang-format on

    // FileImpl inner types define
    struct WriteBufferInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Bedrock::FlushingIOController*> mFlushingIOController;
        ::ll::TypedStorage<4, 40, std::recursive_mutex>            mMutex;
        // NOLINTEND
    };

    using WriteMutexType = std::recursive_mutex;

    using WriteLockType = ::Bedrock::Threading::UniqueLock<std::recursive_mutex>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::Core::FileOpenMode>               mOpenMode;
    ::ll::TypedStorage<8, 8, ::Core::FileSystemImpl*>            mpTransaction;
    ::ll::TypedStorage<8, 8, ::Core::FileImpl::WriteBufferInfo*> mWriteBuffer;
    ::ll::TypedStorage<1, 1, bool>                               mLoggingEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    FileImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileImpl();

    virtual ::Core::PathBuffer<std::string> _getPath() const = 0;

    virtual ulong _getBlockSize() const = 0;

    virtual bool _isOpen() = 0;

    virtual ::Core::Result _close() = 0;

    virtual ::Core::Result _read(void*, ulong, ulong*) = 0;

    virtual ::Core::Result _readExactly(void*, ulong) = 0;

    virtual ::Core::Result _skip(ulong) = 0;

    virtual ::Core::Result _readAtPosition(ulong, void*, ulong, ulong*) = 0;

    virtual ::Core::Result _getPosition(ulong*) = 0;

    virtual ::Core::Result _setPosition(ulong) = 0;

    virtual ::Core::Result _write(void const*, ulong) = 0;

    virtual ::Core::Result _flush() = 0;

    virtual ::Core::Result _getSize(ulong*) = 0;

    virtual ::Core::Result _getRemainingSize(ulong*) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileImpl(::Core::FileSystemImpl*, ::Core::FileOpenMode);

    MCNAPI ::Core::Result _writeOperation(::Core::Result&&, ulong);

    MCNAPI ::Core::Result close();

    MCNAPI ::Core::Result flush();

    MCNAPI ulong getBlockSize() const;

    MCNAPI ::Core::PathBuffer<std::string> getPath() const;

    MCNAPI ::Core::Result getPosition(ulong*);

    MCNAPI ::Core::Result getRemainingSize(ulong*);

    MCNAPI ::Core::Result getSize(ulong*);

    MCNAPI bool isOpen();

    MCNAPI ::Core::Result read(void*, ulong, ulong*);

    MCNAPI ::Core::Result readAtPosition(ulong, void*, ulong, ulong*);

    MCNAPI ::Core::Result readExactly(void*, ulong);

    MCNAPI ::Core::Result setPosition(ulong);

    MCNAPI ::Core::Result skip(ulong);

    MCNAPI ::Core::Result write(void const*, ulong);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ulong getNumFiles();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::vector<Core::FileImpl*>& sAllFiles();

    MCNAPI static std::mutex& sAllFilesLock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::FileSystemImpl*, ::Core::FileOpenMode);
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
