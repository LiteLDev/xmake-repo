#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
