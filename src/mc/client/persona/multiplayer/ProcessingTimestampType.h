#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona::multiplayer::appearance {

#if defined(LL_PLAT_A) // @header-generator platform
enum class ProcessingTimestampType : uint64 {
    AppliedSkinToPlayer              = 0,
    ApplyingClassicSkin              = 1,
    ApplyingDefaultSkin              = 2,
    Enqueued                         = 3,
    FinishedCharacterCreation        = 4,
    FinishedCharacterSkinRegistering = 5,
    QueuedAppearanceServiceRequest   = 6,
    ReadyToCreateOrUpdateCharacter   = 7,
    RemovedFromQueue                 = 8,
    Count                            = 9,
};
#else // @header-generator platform
enum class ProcessingTimestampType : uint64 {};
#endif // @header-generator platform

}
