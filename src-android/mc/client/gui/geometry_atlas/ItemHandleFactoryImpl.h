#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/IItemHandleFactory.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
class TickingTextures;
// clang-format on

namespace GeometryAtlas {

class ItemHandleFactoryImpl : public ::OreUI::IItemHandleFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mGetItemRegistry;
    ::ll::UntypedStorage<8, 64> mGetTickingTextures;
    // NOLINTEND
};

} // namespace GeometryAtlas
