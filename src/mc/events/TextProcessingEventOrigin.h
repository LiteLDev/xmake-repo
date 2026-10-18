#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TextProcessingEventOrigin : int {
#if defined(LL_PLAT_A) // @header-generator platform
    unknown            = -1,
#else // @header-generator platform
    Unknown            = -1,
#endif // @header-generator platform
    ServerChatPublic   = 0,
    ServerChatWhisper  = 1,
    SignText           = 2,
    AnvilText          = 3,
    BookAndQuillText   = 4,
    CommandBlockText   = 5,
    BlockActorDataText = 6,
    JoinEventText      = 7,
    LeaveEventText     = 8,
    SlashCommandChat   = 9,
    CartographyText    = 10,
    KickCommand        = 11,
    TitleCommand       = 12,
    SummonCommand      = 13,
    ServerForm         = 14,
    DataDrivenUI       = 15,
#if defined(LL_PLAT_A) // @header-generator platform
    COUNT              = 16,
#else // @header-generator platform
    Count              = 16,
#endif // @header-generator platform
};
