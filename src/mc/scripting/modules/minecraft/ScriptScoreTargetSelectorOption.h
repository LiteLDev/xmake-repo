#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptScoreTargetSelectorOption {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mObjective;
    ::ll::TypedStorage<4, 8, std::optional<int>>          mMinScore;
    ::ll::TypedStorage<4, 8, std::optional<int>>          mMaxScore;
    ::ll::TypedStorage<1, 2, std::optional<bool>>         mExclude;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mObjective;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>            mMinScore;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>            mMaxScore;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>           mExclude;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bindV010();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bindV010();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bindV1();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bindV1();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
