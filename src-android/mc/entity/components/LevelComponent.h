#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILevel;
// clang-format on

class LevelComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ILevel>> mLevel;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelComponent(::LevelComponent&&);

    MCNAPI explicit LevelComponent(std::unique_ptr<ILevel>);

    MCNAPI ::ILevel const& getLevel() const;

    MCNAPI ::ILevel& getLevel();

    MCNAPI ::LevelComponent& operator=(::LevelComponent&&);

    MCNAPI ~LevelComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelComponent&&);

    MCNAPI void* $ctor(std::unique_ptr<ILevel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
