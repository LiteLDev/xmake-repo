#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mThreadSafe;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<4, 4, uint>         mId;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentInfo& operator=(ComponentInfo const&);
    ComponentInfo();
};
