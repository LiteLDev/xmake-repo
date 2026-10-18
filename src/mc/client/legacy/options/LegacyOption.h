#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class LegacyOption : int {
    MUSIC_VOLUME                     = 0,
    SOUND_VOLUME                     = 1,
    GAME_SENSITIVITY                 = 2,
    GAMMA                            = 3,
    MENU_SENSITIVITY                 = 4,
    MENU_OPACITY                     = 5,
    LANGUAGE                         = 6,
    LOCALE                           = 7,
    VIEW_BOB                         = 8,
    DISPLAY_GAMERTAGS                = 9,
    INVERT_LOOK                      = 10,
    SPLITSCREEN_VERTICAL             = 11,
    DISPLAY_GAMERTAGS_IN_SPLITSCREEN = 12,
    DISPLAY_CLOUDS                   = 13,
    DISPLAY_HUD                      = 14,
    DISPLAY_HAND                     = 15,
    CUSTOM_SKIN_ANIMATION            = 16,
    DEATH_MESSAGES                   = 17,
    UI_SIZE                          = 18,
    ANIMATED_CHARACTER               = 19,
    AUTO_JUMP                        = 20,
    DISPLAY_SAVE_ICON                = 21,
    SELECTED_SKIN                    = 22,
    ACTION_JUMP                      = 23,
    ACTION_USE                       = 24,
    ACTION_ACTION                    = 25,
    ACTION_LEFT_SCROLL               = 26,
    ACTION_RIGHT_SCROLL              = 27,
    ACTION_INVENTORY                 = 28,
    ACTION_DROP                      = 29,
    ACTION_TOGGLE_SNEAK              = 30,
    ACTION_CRAFTING                  = 31,
    ACTION_RENDER_THIRD_PERSON       = 32,
    ACTION_DPAD_LEFT                 = 33,
    ACTION_DPAD_RIGHT                = 34,
    ACTION_DPAD_UP                   = 35,
    ACTION_DPAD_DOWN                 = 36,
    ACTION_SPRINT                    = 37,
    ACTION_PICK_BLOCK                = 38,
};
#else // @header-generator platform
enum class LegacyOption : int {};
#endif // @header-generator platform
