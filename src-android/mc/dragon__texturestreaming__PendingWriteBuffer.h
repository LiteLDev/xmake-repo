#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class File; }
// clang-format on

namespace dragon::texturestreaming {

struct PendingWriteBuffer {
public:
    // PendingWriteBuffer inner types declare
    // clang-format off
    struct PendingWrite;
    // clang-format on

    // PendingWriteBuffer inner types define
    struct PendingWrite {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>                   mPosition;
        ::ll::TypedStorage<8, 24, std::vector<std::byte>> mData;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingWrite& operator=(PendingWrite const&);
        PendingWrite(PendingWrite const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                                     mFlushThreshold;
    ::ll::TypedStorage<8, 24, std::vector<dragon::texturestreaming::PendingWriteBuffer::PendingWrite>> mPendingWrites;
    ::ll::TypedStorage<8, 8, ulong>                                                                    mPendingBytes;
    ::ll::TypedStorage<8, 8, ulong>                                                                    mTotalWriteCount;
    ::ll::TypedStorage<8, 8, ulong>         mTotalBytesWritten;
    ::ll::TypedStorage<8, 8, ::Core::File&> mFile;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingWriteBuffer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PendingWriteBuffer(uint, ::Core::File&);

    MCNAPI void clear();

    MCNAPI bool flush();

    MCNAPI std::vector<const dragon::texturestreaming::PendingWriteBuffer::PendingWrite*>
           readPending(ulong, ulong) const;

    MCNAPI bool write(::gsl::not_null<const std::byte*>, ulong, ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint, ::Core::File&);
    // NOLINTEND
};

} // namespace dragon::texturestreaming
