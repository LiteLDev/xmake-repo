#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class StringConversions {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string toUtf8(std::wstring_view const);
#else // @header-generator platform
    MCNAPI static ::std::string toUtf8(wchar_t const* src, int srcLen);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string toUtf8(wchar_t const*, int);
#else // @header-generator platform
    MCNAPI static int toUtf8(wchar_t const* src, int srcLen, char* dest, int max);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::wstring toWide(std::string_view);

    MCNAPI static std::wstring toWide(char const*, int);
#else // @header-generator platform
    MCNAPI static ::std::wstring toWide(char const* src, int srcLen);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
