#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona::multiplayer::appearance {

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

}
