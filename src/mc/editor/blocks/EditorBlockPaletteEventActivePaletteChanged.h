#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct EditorBlockPaletteEventActivePaletteChanged {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc9fce7;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorBlockPaletteEventActivePaletteChanged& operator=(EditorBlockPaletteEventActivePaletteChanged const&);
    EditorBlockPaletteEventActivePaletteChanged(EditorBlockPaletteEventActivePaletteChanged const&);
    EditorBlockPaletteEventActivePaletteChanged();
};

} // namespace Editor
#endif // @header-generator platform
