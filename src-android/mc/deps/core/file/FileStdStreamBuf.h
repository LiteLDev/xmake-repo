#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/File.h"
#include "mc/deps/core/file/FileOpenMode.h"

namespace Core {

class FileStdStreamBuf : public ::std::streambuf {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Core::File>        mFile;
    ::ll::TypedStorage<1, 2, ::Core::FileOpenMode> mFileOpenMode;
    ::ll::TypedStorage<8, 24, std::vector<char>>   mBuffer;
    ::ll::TypedStorage<8, 8, ulong const>          mInitialBufferSize;
    // NOLINTEND

public:
    // prevent constructor by default
    FileStdStreamBuf();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileStdStreamBuf();

    virtual std::fpos<mbstate_t> seekoff(long long, ::std::ios_base::seekdir, uint);

    virtual std::fpos<mbstate_t> seekpos(std::fpos<mbstate_t>, uint);

    virtual int sync();

    virtual int underflow();

    virtual int overflow(int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int _flushoutput();

    MCNAPI void close();

    MCNAPI bool isOpen() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& DEFAULT_BUFFER_SIZE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::fpos<mbstate_t> $seekoff(long long, ::std::ios_base::seekdir, uint);

    MCNAPI std::fpos<mbstate_t> $seekpos(std::fpos<mbstate_t>, uint);

    MCNAPI int $sync();

    MCNAPI int $underflow();

    MCNAPI int $overflow(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
