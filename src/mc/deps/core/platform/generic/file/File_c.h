#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/FileBufferingMode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/FileImpl.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct __sFILE;
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class Result; }
// clang-format on

namespace Core {

class File_c : public ::Core::FileImpl {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mpFile;
    ::ll::UntypedStorage<8, 24> mPath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk17d1aa;
    ::ll::UntypedStorage<8, 32> mUnkcb373f;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    File_c& operator=(File_c const&);
    File_c(File_c const&);
#endif // @header-generator platform
    File_c();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~File_c();
#else // @header-generator platform
    virtual ~File_c() /*override*/ = default;
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
    virtual ::Core::Result _read(void*, uint64, uint64*) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _readExactly(void*, ulong);
#else // @header-generator platform
    virtual ::Core::Result _readExactly(void*, uint64) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _skip(ulong);
#else // @header-generator platform
    virtual ::Core::Result _readAtPosition(uint64, void*, uint64, uint64*) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _readAtPosition(ulong, void*, ulong, ulong*);
#else // @header-generator platform
    virtual ::Core::Result _write(void const*, uint64) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getPosition(ulong*);
#else // @header-generator platform
    virtual ::Core::Result _setPosition(uint64) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _setPosition(ulong);
#else // @header-generator platform
    virtual ::Core::Result _getPosition(uint64*) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _write(void const*, ulong);
#else // @header-generator platform
    virtual ::Core::Result _skip(uint64) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _flush();
#else // @header-generator platform
    virtual ::Core::Result _flush() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getSize(ulong*);
#else // @header-generator platform
    virtual ::Core::Result _getSize(uint64*) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::Core::Result _getRemainingSize(uint64*) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
