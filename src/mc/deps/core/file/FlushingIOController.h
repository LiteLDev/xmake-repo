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

#if defined(LL_PLAT_A) // @header-generator platform
        virtual ::Core::Result _flushBuffer(void const*, ulong) = 0;
#else // @header-generator platform
        virtual ::Core::Result _flushBuffer(void const* data, uint64 amount) = 0;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Bedrock::FlushingIOController::Flusher*> mFlusher;
    ::ll::TypedStorage<8, 8, void*>                                     mBuffer;
    ::ll::TypedStorage<8, 8, ulong>                                     mBufferSize;
    ::ll::TypedStorage<8, 8, ulong>                                     mBufferPos;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnka30178;
    ::ll::UntypedStorage<8, 8> mUnkc26063;
    ::ll::UntypedStorage<8, 8> mUnk5f53e1;
    ::ll::UntypedStorage<8, 8> mUnk77d4a1;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FlushingIOController& operator=(FlushingIOController const&);
    FlushingIOController(FlushingIOController const&);
    FlushingIOController();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FlushingIOController(::Bedrock::FlushingIOController::Flusher*, void*, ulong);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ::Core::Result flush();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result write(void const*, ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::FlushingIOController::Flusher*, void*, ulong);
#else // @header-generator platform
    MCNAPI ::Core::Result write(void const* data, uint64 byteCount);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
