#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace ECSModule { struct RegistrationOptions; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace ECSModule {

struct ModuleInitArgs {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ECSModule::RegistrationOptions const&> mOptions;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk60dd0c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleInitArgs& operator=(ModuleInitArgs const&);
    ModuleInitArgs(ModuleInitArgs const&);
    ModuleInitArgs();
};

} // namespace ECSModule
