#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/FileStdStreamBuf.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class PathView; }
// clang-format on

namespace Core {

#if defined(LL_PLAT_A) // @header-generator platform
class FileStream : public ::std::iostream {
#else // @header-generator platform
class FileStream : public virtual ::std::ios, public ::std::iostream {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 120, ::Core::FileStdStreamBuf> mStreamBuffer;
    ::ll::UntypedStorage<1, 160>                         mLoggingEnabled;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 160> mUnk7e5019;
    ::ll::UntypedStorage<1, 112> mUnkfd47eb;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileStream();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    FileStream& operator=(FileStream const&);
    FileStream(FileStream const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileStream();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FileStream(::Core::PathView, uint);
#else // @header-generator platform
    MCNAPI FileStream(::Core::PathView filename, int openMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FileStream(ulong, ::Core::PathView, uint);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI FileStream(uint64 bufferSize, ::Core::PathView filename, int openMode);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void open(::Core::PathView, uint);

    MCNAPI void open(::Core::PathView, ::Core::FileOpenMode);

    MCNAPI void setLoggingEnabled(bool);
#else // @header-generator platform
    MCNAPI void open(::Core::PathView filename, ::Core::FileOpenMode openMode);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::PathView, uint);
#else // @header-generator platform
    MCNAPI void* $ctor(::Core::PathView filename, int openMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(ulong, ::Core::PathView, uint);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(uint64 bufferSize, ::Core::PathView filename, int openMode);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
