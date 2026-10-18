#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs_module/RegistrationOptions.h"
#include "mc/world/level/storage/Experiments.h"

// auto generated forward declare list
// clang-format off
namespace ECSModule { class IECSModule; }
// clang-format on

namespace VanillaSystemsRegistration {

struct RegistrationOptions : public ::ECSModule::RegistrationOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ECSModule::IECSModule*> mMoveModule;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 56, ::Experiments>           mExperiments;
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::Experiments>           mExperiments;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~RegistrationOptions();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~RegistrationOptions();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VanillaSystemsRegistration
