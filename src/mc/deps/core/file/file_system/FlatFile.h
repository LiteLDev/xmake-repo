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

class FlatFile : public ::Core::FileImpl {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileImpl>> mFlatFile;
    ::ll::UntypedStorage<8, 24>                               mRequestedPath;
    ::ll::TypedStorage<8, 8, ulong>                           mFileSize;
    ::ll::TypedStorage<8, 8, ulong>                           mSeekPos;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk45570e;
    ::ll::UntypedStorage<8, 32> mUnkc03435;
    ::ll::UntypedStorage<8, 8>  mUnk4bee19;
    ::ll::UntypedStorage<8, 8>  mUnk7e387d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FlatFile& operator=(FlatFile const&);
    FlatFile(FlatFile const&);
#endif // @header-generator platform
    FlatFile();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FlatFile();
#else // @header-generator platform
    virtual ~FlatFile() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> _getPath() const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> _getPath() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong _getBlockSize() const;
#else // @header-generator platform
    virtual uint64 _getBlockSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _isOpen();
#else // @header-generator platform
    virtual bool _isOpen() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _close();
#else // @header-generator platform
    virtual ::Core::Result _close() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _read(void*, ulong, ulong*);
#else // @header-generator platform
    virtual ::Core::Result _read(void* pBuffer, uint64 numBytes, uint64* pNumBytesRead) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _readExactly(void*, ulong);
#else // @header-generator platform
    virtual ::Core::Result _readExactly(void* buf, uint64 numBytes) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _skip(ulong);
#else // @header-generator platform
    virtual ::Core::Result _skip(uint64 numBytes) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _readAtPosition(ulong, void*, ulong, ulong*);
#else // @header-generator platform
    virtual ::Core::Result
    _readAtPosition(uint64 position, void* pBuf, uint64 numBytes, uint64* pNumBytesRead) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getPosition(ulong*);
#else // @header-generator platform
    virtual ::Core::Result _getPosition(uint64* pPosition) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _setPosition(ulong);
#else // @header-generator platform
    virtual ::Core::Result _setPosition(uint64 position) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _write(void const*, ulong);
#else // @header-generator platform
    virtual ::Core::Result _write(void const*, uint64) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _flush();
#else // @header-generator platform
    virtual ::Core::Result _flush() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getSize(ulong*);
#else // @header-generator platform
    virtual ::Core::Result _getSize(uint64* pSize) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getRemainingSize(ulong*);
#else // @header-generator platform
    virtual ::Core::Result _getRemainingSize(uint64* pFileSize) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI FlatFile(
        ::Core::FileSystemImpl*             pTransaction,
        ::Core::FileOpenMode                fileOpenMode,
        ::std::unique_ptr<::Core::FileImpl> baseFile,
        ::Core::PathView                    path,
        uint64                              seekPos,
        uint64                              fileSize
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::FileSystemImpl*             pTransaction,
        ::Core::FileOpenMode                fileOpenMode,
        ::std::unique_ptr<::Core::FileImpl> baseFile,
        ::Core::PathView                    path,
        uint64                              seekPos,
        uint64                              fileSize
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $_getPath() const;
#else // @header-generator platform
    MCNAPI ::Core::PathBuffer<::std::string> $_getPath() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $_getBlockSize() const;
#else // @header-generator platform
    MCNAPI uint64 $_getBlockSize() const;
#endif // @header-generator platform

    MCNAPI bool $_isOpen();

    MCNAPI ::Core::Result $_close();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_read(void*, ulong, ulong*);
#else // @header-generator platform
    MCNAPI ::Core::Result $_read(void* pBuffer, uint64 numBytes, uint64* pNumBytesRead);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_readExactly(void*, ulong);
#else // @header-generator platform
    MCNAPI ::Core::Result $_readExactly(void* buf, uint64 numBytes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_skip(ulong);
#else // @header-generator platform
    MCNAPI ::Core::Result $_skip(uint64 numBytes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_readAtPosition(ulong, void*, ulong, ulong*);
#else // @header-generator platform
    MCNAPI ::Core::Result $_readAtPosition(uint64 position, void* pBuf, uint64 numBytes, uint64* pNumBytesRead);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_getPosition(ulong*);
#else // @header-generator platform
    MCNAPI ::Core::Result $_getPosition(uint64* pPosition);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_setPosition(ulong);
#else // @header-generator platform
    MCNAPI ::Core::Result $_setPosition(uint64 position);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_write(void const*, ulong);
#else // @header-generator platform
    MCNAPI ::Core::Result $_write(void const*, uint64);
#endif // @header-generator platform

    MCNAPI ::Core::Result $_flush();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_getSize(ulong*);
#else // @header-generator platform
    MCNAPI ::Core::Result $_getSize(uint64* pSize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result $_getRemainingSize(ulong*);
#else // @header-generator platform
    MCNAPI ::Core::Result $_getRemainingSize(uint64* pFileSize);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
