#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace SDL {

struct StartSessionMinecraft {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                      mId;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, std::string>>> mConfigurations;
    // NOLINTEND

public:
    // prevent constructor by default
    StartSessionMinecraft& operator=(StartSessionMinecraft const&);
    StartSessionMinecraft();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StartSessionMinecraft(::SDL::StartSessionMinecraft const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SDL::StartSessionMinecraft const&);
    // NOLINTEND
};

} // namespace SDL
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
