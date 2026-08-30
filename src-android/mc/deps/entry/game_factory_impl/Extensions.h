#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace AppExtensions { class IGameModuleExtensions; }
// clang-format on

namespace GameFactoryImpl {

struct Extensions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                                                      mTest;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AppExtensions::IGameModuleExtensions>> mGameModule;
    // NOLINTEND

public:
    // prevent constructor by default
    Extensions& operator=(Extensions const&);
    Extensions(Extensions const&);
    Extensions();
};

} // namespace GameFactoryImpl
