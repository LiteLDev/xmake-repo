#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class AutoSaveWarningScreenCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::AutoSaveWarningScreenCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>> mAcknowledge;
    // NOLINTEND

public:
    // prevent constructor by default
    AutoSaveWarningScreenCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AutoSaveWarningScreenCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};
#else // @header-generator platform
class AutoSaveWarningScreenCommandGroup {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
