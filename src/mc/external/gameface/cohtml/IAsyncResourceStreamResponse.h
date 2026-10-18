#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cohtml { class ISyncStreamReader; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace cohtml {

class IAsyncResourceStreamResponse {
public:
    // IAsyncResourceStreamResponse inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Status : uint {
        Success = 0,
        Failure = 1,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Status : int {
        Success = 0,
        Failure = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAsyncResourceStreamResponse() = default;

    virtual void SetStreamReader(::cohtml::ISyncStreamReader*) = 0;

    virtual void Finish(::cohtml::IAsyncResourceStreamResponse::Status) = 0;
    // NOLINTEND
#else // @header-generator platform
    enum class Status : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace cohtml
