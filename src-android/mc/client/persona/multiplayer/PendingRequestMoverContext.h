#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class IPersonaRepository;
class PersonaSessionManager;
// clang-format on

namespace persona::multiplayer::appearance {

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

} // namespace persona::multiplayer::appearance
