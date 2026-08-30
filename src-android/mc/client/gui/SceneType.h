#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

enum class SceneType : uint {
    // bitfield representation
    NONE                         = 0,
    DEFAULT_SCENE                = 1u << 0,
    STORE_SCENE                  = 1u << 1,
    STORE_HOME_SCENE             = 1u << 2,
    STORE_INVENTORY_SCENE        = 1u << 3,
    START_MENU_SCENE             = 1u << 4,
    SETTINGS_SCENE               = 1u << 5,
    LIBRARY_ITEM_SCENE           = 1u << 6,
    LIBRARY_MODAL_SCENE          = 1u << 7,
    PROFILE_SCENE                = 1u << 8,
    DRESSING_ROOM_SCENE          = 1u << 9,
    ACHIEVEMENT_SCENE            = 1u << 10,
    NO_INTERRUPT                 = 1u << 11,
    ORE_UI                       = 1u << 12,
    PLAY_SCREEN                  = 1u << 13,
    PROGRESS_SCENE               = 1u << 14,
    PAUSE_SCENE                  = 1u << 15,
    REALMS_PLUS_PDP_SCENE        = 1u << 16,
    MULTI_CONTROLLER_INPUT_SCENE = 1u << 17,
    HUD_SCENE                    = 1u << 18,
    MARKETPLACE_PLUS_PDP_SCENE   = 1u << 19,
    DISPLAY_ERROR_LOG_SCENE      = 1u << 20,
};

}
