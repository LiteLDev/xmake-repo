#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/profiling/EntityDiagnosticTimingInfo.h"
#include "mc/entity/profiling/SystemCategory.h"
#include "mc/entity/profiling/SystemDiagnosticTimingInfo.h"

namespace ECS::Profiling::Diagnostics {

struct EntitySystemDiagnosticSummary {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<ECS::Profiling::Diagnostics::EntityDiagnosticTimingInfo>> mEntityTimings;
    ::ll::TypedStorage<8, 24, std::vector<ECS::Profiling::Diagnostics::SystemDiagnosticTimingInfo>> mSystemTimings;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<ECS::Profiling::Diagnostics::SystemCategory>>> mSystemCategories;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemDiagnosticSummary& operator=(EntitySystemDiagnosticSummary const&);
    EntitySystemDiagnosticSummary();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EntitySystemDiagnosticSummary(::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary const&);

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
