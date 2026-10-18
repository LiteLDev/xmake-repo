#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling::Diagnostics {

struct EntityDiagnosticTimingInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mDisplayName;
    ::ll::TypedStorage<8, 24, std::string> mEntity;
    ::ll::TypedStorage<8, 8, ulong>        mTimeInNS;
    ::ll::TypedStorage<1, 1, uchar>        mPercentOfTotal;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkd9fcd9;
    ::ll::UntypedStorage<8, 32> mUnk1ca944;
    ::ll::UntypedStorage<8, 8>  mUnk8aa595;
    ::ll::UntypedStorage<1, 1>  mUnk8c7fdb;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityDiagnosticTimingInfo& operator=(EntityDiagnosticTimingInfo const&);
    EntityDiagnosticTimingInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EntityDiagnosticTimingInfo(::ECS::Profiling::Diagnostics::EntityDiagnosticTimingInfo const&);

    MCNAPI ::ECS::Profiling::Diagnostics::EntityDiagnosticTimingInfo&
    operator=(::ECS::Profiling::Diagnostics::EntityDiagnosticTimingInfo&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ECS::Profiling::Diagnostics::EntityDiagnosticTimingInfo const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ECS::Profiling::Diagnostics
