#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/FileOpenMode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock { class FlushingIOController; }
#else // @header-generator platform
namespace Bedrock::Threading { class Mutex; }
namespace Core { class FileOpenMode; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Bedrock::FlushingIOController*> mFlushingIOController;
        ::ll::TypedStorage<4, 40, std::recursive_mutex>            mMutex;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnkec2ac3;
        ::ll::UntypedStorage<8, 80> mUnk52e0bb;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
    };
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using WriteMutexType = std::recursive_mutex;

    using WriteLockType = ::Bedrock::Threading::UniqueLock<std::recursive_mutex>;
#else // @header-generator platform
    public:
        // prevent constructor by default
        WriteBufferInfo& operator=(WriteBufferInfo const&);
        WriteBufferInfo(WriteBufferInfo const&);
        WriteBufferInfo();
    };
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, ::Core::FileOpenMode>               mOpenMode;
    ::ll::TypedStorage<8, 8, ::Core::FileSystemImpl*>            mpTransaction;
    ::ll::TypedStorage<8, 8, ::Core::FileImpl::WriteBufferInfo*> mWriteBuffer;
    ::ll::TypedStorage<1, 1, bool>                               mLoggingEnabled;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 2> mUnk77bcd9;
    ::ll::UntypedStorage<8, 8> mUnkb78983;
    ::ll::UntypedStorage<8, 8> mUnk95d296;
    ::ll::UntypedStorage<1, 1> mUnk1f6afd;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FileImpl& operator=(FileImpl const&);
    FileImpl(FileImpl const&);
#endif // @header-generator platform
    FileImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileImpl();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> _getPath() const = 0;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> _getPath() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong _getBlockSize() const = 0;
#else // @header-generator platform
    virtual uint64 _getBlockSize() const = 0;
#endif // @header-generator platform

    virtual bool _isOpen() = 0;

    virtual ::Core::Result _close() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _read(void*, ulong, ulong*) = 0;
#else // @header-generator platform
    virtual ::Core::Result _read(void* buf, uint64 numBytes, uint64* pNumBytesRead) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _readExactly(void*, ulong) = 0;
#else // @header-generator platform
    virtual ::Core::Result _readExactly(void* buf, uint64 numBytes) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _skip(ulong) = 0;
#else // @header-generator platform
    virtual ::Core::Result _skip(uint64 numBytes) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _readAtPosition(ulong, void*, ulong, ulong*) = 0;
#else // @header-generator platform
    virtual ::Core::Result _readAtPosition(uint64 position, void* buf, uint64 numBytes, uint64* pNumBytesRead) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getPosition(ulong*) = 0;
#else // @header-generator platform
    virtual ::Core::Result _getPosition(uint64* pSizeOut) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _setPosition(ulong) = 0;
#else // @header-generator platform
    virtual ::Core::Result _setPosition(uint64 position) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _write(void const*, ulong) = 0;
#else // @header-generator platform
    virtual ::Core::Result _write(void const* buf, uint64 numBytes) = 0;
#endif // @header-generator platform

    virtual ::Core::Result _flush() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getSize(ulong*) = 0;
#else // @header-generator platform
    virtual ::Core::Result _getSize(uint64* pSizeOut) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getRemainingSize(ulong*) = 0;
#else // @header-generator platform
    virtual ::Core::Result _getRemainingSize(uint64* pSizeOut) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FileImpl(::Core::FileSystemImpl*, ::Core::FileOpenMode);
#else // @header-generator platform
    MCNAPI FileImpl(::Core::FileSystemImpl* pTransaction, ::Core::FileOpenMode openMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result _writeOperation(::Core::Result&&, ulong);
#else // @header-generator platform
    MCNAPI ::Bedrock::Threading::UniqueLock<::std::recursive_mutex> _lockIfWriteBuffered(bool flushBuffer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result close();
#else // @header-generator platform
    MCNAPI ::Core::Result _writeOperation(::Core::Result&& result, uint64 numBytesWritten);

    MCNAPI void detachFromTransaction();
#endif // @header-generator platform

    MCNAPI ::Core::Result flush();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getBlockSize() const;
#else // @header-generator platform
    MCNAPI ::Core::Result read(void* buf, uint64 numBytes, uint64* pNumBytesRead);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> getPath() const;
#else // @header-generator platform
    MCNAPI ::Core::Result readAtPosition(uint64 position, void* pBuf, uint64 numBytes, uint64* pNumBytesRead);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result getPosition(ulong*);
#else // @header-generator platform
    MCNAPI ::Core::Result readExactly(void* buf, uint64 numBytes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI ::Core::Result write(void const* pBuf, uint64 numBytes);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<Core::FileImpl*>& sAllFiles();
#else // @header-generator platform
    MCNAPI static ::std::vector<::Core::FileImpl*>& sAllFiles();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::mutex& sAllFilesLock();
#else // @header-generator platform
    MCNAPI static ::Bedrock::Threading::Mutex& sAllFilesLock();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::FileSystemImpl*, ::Core::FileOpenMode);
#else // @header-generator platform
    MCNAPI void* $ctor(::Core::FileSystemImpl* pTransaction, ::Core::FileOpenMode openMode);
#endif // @header-generator platform
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
