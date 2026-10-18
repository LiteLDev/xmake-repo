#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

namespace OreUI {

class TTSWarningScreenCommandGroup : public ::OreUI::CommandGroupBase<OreUI::TTSWarningScreenCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::IClientInstance&> mClient;
    ::ll::UntypedStorage<8, 144>                  mDoesLanguageSupportTts;
    ::ll::UntypedStorage<8, 144>                  mMarkTTSShown;
    ::ll::UntypedStorage<8, 144>                  mDisableTTS;
    // NOLINTEND

public:
    // prevent constructor by default
    TTSWarningScreenCommandGroup& operator=(TTSWarningScreenCommandGroup const&);
    TTSWarningScreenCommandGroup(TTSWarningScreenCommandGroup const&);
    TTSWarningScreenCommandGroup();
};

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
