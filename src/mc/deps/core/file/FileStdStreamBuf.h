#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/File.h"
#include "mc/deps/core/file/FileOpenMode.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

class FileStdStreamBuf : public ::std::streambuf {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Core::File>        mFile;
    ::ll::TypedStorage<1, 2, ::Core::FileOpenMode> mFileOpenMode;
    ::ll::TypedStorage<8, 24, std::vector<char>>   mBuffer;
    ::ll::TypedStorage<8, 8, ulong const>          mInitialBufferSize;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk2320e4;
    ::ll::UntypedStorage<1, 2>  mUnka28c60;
    ::ll::UntypedStorage<8, 24> mUnk5a4631;
    ::ll::UntypedStorage<8, 8>  mUnk892e32;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FileStdStreamBuf& operator=(FileStdStreamBuf const&);
    FileStdStreamBuf(FileStdStreamBuf const&);
#endif // @header-generator platform
    FileStdStreamBuf();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FileStdStreamBuf();
#else // @header-generator platform
    virtual ~FileStdStreamBuf() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::fpos<mbstate_t> seekoff(long long, ::std::ios_base::seekdir, uint);
#else // @header-generator platform
    virtual int underflow() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::fpos<mbstate_t> seekpos(std::fpos<mbstate_t>, uint);
#else // @header-generator platform
    virtual int overflow(int c) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int sync();
#else // @header-generator platform
    virtual ::std::fpos<::_Mbstatet> seekoff(int64 off, int way, int) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int underflow();
#else // @header-generator platform
    virtual ::std::fpos<::_Mbstatet> seekpos(::std::fpos<::_Mbstatet> pos, int) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int overflow(int);
#else // @header-generator platform
    virtual int sync() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int _flushoutput();
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI void close();

    MCNAPI bool isOpen() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& DEFAULT_BUFFER_SIZE();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::fpos<mbstate_t> $seekoff(long long, ::std::ios_base::seekdir, uint);
#else // @header-generator platform
    MCNAPI int $underflow();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::fpos<mbstate_t> $seekpos(std::fpos<mbstate_t>, uint);
#else // @header-generator platform
    MCNAPI int $overflow(int c);

    MCNAPI ::std::fpos<::_Mbstatet> $seekoff(int64 off, int way, int);

    MCNAPI ::std::fpos<::_Mbstatet> $seekpos(::std::fpos<::_Mbstatet> pos, int);
#endif // @header-generator platform

    MCNAPI int $sync();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $underflow();
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $overflow(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
