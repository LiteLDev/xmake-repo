#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/PieceType.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
class PersonaAppearance;
class PersonaRepository;
struct PersonaCharacter;
// clang-format on

class PersonaRepositoryTestWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PersonaRepository&> mPersonaRepository;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaRepositoryTestWrapper& operator=(PersonaRepositoryTestWrapper const&);
    PersonaRepositoryTestWrapper(PersonaRepositoryTestWrapper const&);
    PersonaRepositoryTestWrapper();
};
