#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class StringConversions {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string toUtf8(std::wstring_view const);

    MCNAPI static std::string toUtf8(wchar_t const*, int);

    MCNAPI static std::wstring toWide(std::string_view);

    MCNAPI static std::wstring toWide(char const*, int);
    // NOLINTEND
};

} // namespace Core
