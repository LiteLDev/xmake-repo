#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorBlockPaletteEventPaletteRemoved {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkc05359;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorBlockPaletteEventPaletteRemoved& operator=(EditorBlockPaletteEventPaletteRemoved const&);
    EditorBlockPaletteEventPaletteRemoved(EditorBlockPaletteEventPaletteRemoved const&);
    EditorBlockPaletteEventPaletteRemoved();
};

} // namespace Editor
#endif // @header-generator platform
