#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

namespace Bedrock {

class FlushingIOController {
public:
    // FlushingIOController inner types declare
    // clang-format off
    class Flusher;
    // clang-format on

    // FlushingIOController inner types define
    class Flusher {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Flusher() = default;

        virtual ::Core::Result _flushBuffer(void const*, ulong) = 0;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::FlushingIOController::Flusher*> mFlusher;
    ::ll::TypedStorage<8, 8, void*>                                     mBuffer;
    ::ll::TypedStorage<8, 8, ulong>                                     mBufferSize;
    ::ll::TypedStorage<8, 8, ulong>                                     mBufferPos;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FlushingIOController(::Bedrock::FlushingIOController::Flusher*, void*, ulong);

    MCNAPI ::Core::Result flush();

    MCNAPI ::Core::Result write(void const*, ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::FlushingIOController::Flusher*, void*, ulong);
    // NOLINTEND
};

} // namespace Bedrock
