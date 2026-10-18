#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/tts/TTSEventOptions.h"
#include "mc/util/ProfanityFilterContext.h"

class TTSEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>             mText;
    ::ll::TypedStorage<8, 40, ::TTSEventOptions>       mOptions;
    ::ll::TypedStorage<4, 4, ::ProfanityFilterContext> mProfanityFilterContext;
    // NOLINTEND
};
#else // @header-generator platform
class TTSEvent {};
#endif // @header-generator platform
