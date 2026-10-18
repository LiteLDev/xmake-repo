#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorBlockPaletteEventPaletteUpdated {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkab55ec;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorBlockPaletteEventPaletteUpdated& operator=(EditorBlockPaletteEventPaletteUpdated const&);
    EditorBlockPaletteEventPaletteUpdated(EditorBlockPaletteEventPaletteUpdated const&);
    EditorBlockPaletteEventPaletteUpdated();
};

} // namespace Editor
#endif // @header-generator platform
