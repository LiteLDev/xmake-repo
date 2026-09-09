#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/AnimationEventData.h"
#include "mc/client/gui/screens/ButtonScreenEventData.h"
#include "mc/client/gui/screens/ClipStateChangeEventData.h"
#include "mc/client/gui/screens/ClippedCollectionEventData.h"
#include "mc/client/gui/screens/ControllerDirectionEventData.h"
#include "mc/client/gui/screens/CustomRendererEventData.h"
#include "mc/client/gui/screens/FocusMoveScreenEventData.h"
#include "mc/client/gui/screens/HoverScreenEventData.h"
#include "mc/client/gui/screens/InputModeChangeScreenEventData.h"
#include "mc/client/gui/screens/LockedStateEventData.h"
#include "mc/client/gui/screens/PointerHeldScreenEventData.h"
#include "mc/client/gui/screens/PointerMoveScreenEventData.h"
#include "mc/client/gui/screens/RawInputScreenEventData.h"
#include "mc/client/gui/screens/ScrollDirectionEventData.h"
#include "mc/client/gui/screens/ScrollRequestScreenEventData.h"
#include "mc/client/gui/screens/SliderChangeEventData.h"
#include "mc/client/gui/screens/TextEditScreenEventData.h"
#include "mc/client/gui/screens/TextEditSelectedStateChangeEventData.h"
#include "mc/client/gui/screens/ToggleChangeEventData.h"

union ScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> button;
    ::ll::UntypedStorage<8, 40> textEdit;
    ::ll::UntypedStorage<8, 40> hover;
    ::ll::UntypedStorage<4, 40> pointerMove;
    ::ll::UntypedStorage<4, 40> pointerHeld;
    ::ll::UntypedStorage<4, 40> focusMove;
    ::ll::UntypedStorage<4, 40> inputMode;
    ::ll::UntypedStorage<4, 40> scrollRequest;
    ::ll::UntypedStorage<4, 40> scrollDirectionRequest;
    ::ll::UntypedStorage<8, 40> toggle;
    ::ll::UntypedStorage<4, 40> controllerDirectionEventData;
    ::ll::UntypedStorage<4, 40> rawInput;
    ::ll::UntypedStorage<8, 40> slider;
    ::ll::UntypedStorage<4, 40> animEventData;
    ::ll::UntypedStorage<1, 40> locked;
    ::ll::UntypedStorage<8, 40> clippedCollection;
    ::ll::UntypedStorage<8, 40> clipStateChangeEventData;
    ::ll::UntypedStorage<4, 40> textEditSelectedStateChangeEventData;
    ::ll::UntypedStorage<4, 40> customRendererEventData;
    // NOLINTEND
};