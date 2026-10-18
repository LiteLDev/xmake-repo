#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::EntryPoints::PartyModal {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ModalType : int {
    DeclineTravel = 0,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class ModalType : int {
    DeclineTravel = 0,
};
#else // @header-generator platform
enum class ModalType : int {};
#endif // @header-generator platform
#endif // @header-generator platform

}
