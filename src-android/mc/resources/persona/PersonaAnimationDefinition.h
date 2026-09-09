#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PersonaAnimationDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mAnimationName;
    ::ll::TypedStorage<8, 24, std::string> mAnimationFile;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaAnimationDefinition& operator=(PersonaAnimationDefinition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PersonaAnimationDefinition();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PersonaAnimationDefinition const& INVALID_ANIMATION_DEFINITION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
