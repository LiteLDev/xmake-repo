#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/FileImpl.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class Result; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core::Internal { class FileData; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Core {

class ThrottledFile : public ::Core::FileImpl {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>     mFileData;
    ::ll::UntypedStorage<8, 48>     mOperateUnderLock;
    ::ll::UntypedStorage<8, 24>     mPath;
    ::ll::TypedStorage<8, 8, ulong> mPosition;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk468c9b;
    ::ll::UntypedStorage<8, 64> mUnka37d46;
    ::ll::UntypedStorage<8, 32> mUnk1ae51b;
    ::ll::UntypedStorage<8, 8>  mUnk185bc8;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ThrottledFile& operator=(ThrottledFile const&);
    ThrottledFile(ThrottledFile const&);
#endif // @header-generator platform
    ThrottledFile();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ThrottledFile() = default;
#else // @header-generator platform
    virtual ~ThrottledFile() /*override*/ = default;
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
    virtual ::Core::Result _skip(uint64) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _readAtPosition(ulong, void*, ulong, ulong*);
#else // @header-generator platform
    virtual ::Core::Result _readAtPosition(uint64, void*, uint64, uint64*) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getPosition(ulong*);
#else // @header-generator platform
    virtual ::Core::Result _getPosition(uint64*) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _setPosition(ulong);
#else // @header-generator platform
    virtual ::Core::Result _setPosition(uint64) /*override*/;
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
    virtual ::Core::Result _getSize(uint64*) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::Result _getRemainingSize(ulong*);
#else // @header-generator platform
    virtual ::Core::Result _getRemainingSize(uint64*) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
