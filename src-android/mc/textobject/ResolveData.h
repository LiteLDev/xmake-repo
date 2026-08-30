#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Scoreboard;
// clang-format on

struct ResolveData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Actor*> const>      mActor;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const Scoreboard*> const> mScoreboard;
    // NOLINTEND

public:
    // prevent constructor by default
    ResolveData();
};
