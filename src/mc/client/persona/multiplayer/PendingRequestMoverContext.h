#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ILevel;
class IPersonaRepository;
class PersonaSessionManager;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace persona::multiplayer::appearance {

#if defined(LL_PLAT_A) // @header-generator platform
class PendingRequestMoverContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevel&>                mLevel;
    ::ll::TypedStorage<8, 8, ::IPersonaRepository&>    mRepository;
    ::ll::TypedStorage<8, 8, ::PersonaSessionManager&> mSessionManager;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingRequestMoverContext& operator=(PendingRequestMoverContext const&);
    PendingRequestMoverContext(PendingRequestMoverContext const&);
    PendingRequestMoverContext();
};
#else // @header-generator platform
class PendingRequestMoverContext {};
#endif // @header-generator platform

} // namespace persona::multiplayer::appearance
