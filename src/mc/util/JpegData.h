#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class JpegData {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool WriteJpgComments(::Core::Path const&, std::string const&);
    // NOLINTEND
};
#else // @header-generator platform
class JpegData {};
#endif // @header-generator platform
