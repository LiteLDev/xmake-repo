#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/sdl/StartSessionMinecraft.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace SDL {

struct StartSessionConfigurations {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::SDL::StartSessionMinecraft> mMinecraft;
    // NOLINTEND

public:
    // prevent constructor by default
    StartSessionConfigurations& operator=(StartSessionConfigurations const&);
    StartSessionConfigurations();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StartSessionConfigurations();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SDL
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
