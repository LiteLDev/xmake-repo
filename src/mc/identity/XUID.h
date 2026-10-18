#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Social {

struct XUID {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkacf01a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    XUID& operator=(XUID const&);
    XUID(XUID const&);
#endif // @header-generator platform
    XUID();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string toString() const;
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<Social::XUID, std::error_code> parse(std::string_view, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::Bedrock::Result<::Social::XUID> parse(::std::string_view xuidString, bool allowGuestXUIDs);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social
