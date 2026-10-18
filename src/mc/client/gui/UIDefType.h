#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class UIDefType : int {
    Button            = 0,
    Custom            = 1,
    CollectionPanel   = 2,
    Dropdown          = 3,
    EditBox           = 4,
    Factory           = 5,
    Grid              = 6,
    Image             = 7,
    InputPanel        = 8,
    Label             = 9,
    Panel             = 10,
    Screen            = 11,
    ScrollbarBox      = 12,
    ScrollTrack       = 13,
    ScrollView        = 14,
    SelectionWheel    = 15,
    Slider            = 16,
    SliderBox         = 17,
    StackPanel        = 18,
    Toggle            = 19,
    ImageCycler       = 20,
    LabelCycler       = 21,
    GridPageIndicator = 22,
    TooltipTrigger    = 23,
    Unknown           = 24,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class UIDefType : int {
    Button            = 0,
    Custom            = 1,
    CollectionPanel   = 2,
    Dropdown          = 3,
    EditBox           = 4,
    Factory           = 5,
    Grid              = 6,
    Image             = 7,
    InputPanel        = 8,
    Label             = 9,
    Panel             = 10,
    Screen            = 11,
    ScrollbarBox      = 12,
    ScrollTrack       = 13,
    ScrollView        = 14,
    SelectionWheel    = 15,
    Slider            = 16,
    SliderBox         = 17,
    StackPanel        = 18,
    Toggle            = 19,
    ImageCycler       = 20,
    LabelCycler       = 21,
    GridPageIndicator = 22,
    TooltipTrigger    = 23,
    Unknown           = 24,
};
#else // @header-generator platform
enum class UIDefType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
