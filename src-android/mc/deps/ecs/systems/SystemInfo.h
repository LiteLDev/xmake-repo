#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ComponentInfo.h"
#include "mc/deps/ecs/systems/Dependencies.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SystemInfo {
public:
    // SystemInfo inner types define
    using GenerateComponentInfoVectorFunction = std::vector<ComponentInfo> (*)();

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                     mName;
    ::ll::TypedStorage<1, 1, uchar>                            mDisplayCategoryIndex;
    ::ll::TypedStorage<8, 152, ::Dependencies>                 mDependencies;
    ::ll::TypedStorage<8, 8, std::vector<ComponentInfo> (*)()> mGenerateDetailedInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemInfo& operator=(SystemInfo const&);
    SystemInfo(SystemInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SystemInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
