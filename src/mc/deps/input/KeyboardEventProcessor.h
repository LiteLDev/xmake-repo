#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Input {

class KeyboardEventProcessor {
public:
    // KeyboardEventProcessor inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class InputOrigin : int {
        UNKNOWN  = 0,
        HARDWARE = 1,
        VIRTUAL  = 2,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class InputOrigin : int {
        Unknown  = 0,
        Hardware = 1,
        Virtual  = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~KeyboardEventProcessor() = default;

    virtual void onKeyDown(int keyCode, ::Bedrock::Input::KeyboardEventProcessor::InputOrigin origin) = 0;

    virtual void onKeyUp(int keyCode) = 0;
    // NOLINTEND
#else // @header-generator platform
    enum class InputOrigin : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace Bedrock::Input
