#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ECSModule { struct RegistrationOptions; }
// clang-format on

namespace ECSModule {

struct ModuleInitArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ECSModule::RegistrationOptions const&> mOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleInitArgs& operator=(ModuleInitArgs const&);
    ModuleInitArgs(ModuleInitArgs const&);
    ModuleInitArgs();
};

} // namespace ECSModule
