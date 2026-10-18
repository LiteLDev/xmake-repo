#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/entity/profiling/EntityDiagnosticTimingInfo.h"
#include "mc/entity/profiling/SystemCategory.h"
#include "mc/entity/profiling/SystemDiagnosticTimingInfo.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace ECS::Profiling::Diagnostics {

struct EntitySystemDiagnosticSummary {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<ECS::Profiling::Diagnostics::EntityDiagnosticTimingInfo>> mEntityTimings;
    ::ll::TypedStorage<8, 24, std::vector<ECS::Profiling::Diagnostics::SystemDiagnosticTimingInfo>> mSystemTimings;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<ECS::Profiling::Diagnostics::SystemCategory>>> mSystemCategories;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk4d1d66;
    ::ll::UntypedStorage<8, 24> mUnkfd305d;
    ::ll::UntypedStorage<8, 32> mUnk53375b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemDiagnosticSummary& operator=(EntitySystemDiagnosticSummary const&);
    EntitySystemDiagnosticSummary();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EntitySystemDiagnosticSummary(::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary&
    operator=(::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary&&);
#endif // @header-generator platform

    MCNAPI ~EntitySystemDiagnosticSummary();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ECS::Profiling::Diagnostics
