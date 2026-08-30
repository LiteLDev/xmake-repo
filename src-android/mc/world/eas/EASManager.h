#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/EAS__AnyAttributeLayer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
class PacketSender;
namespace EAS { class AttributeLayer; }
namespace EAS { class AttributeRegistry; }
// clang-format on

namespace EAS {

class EASManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mAttributeRegistry;
    ::ll::TypedStorage<8, 40, std::unordered_map<DimensionType, std::vector<EAS::AnyAttributeLayer>>> mAttributeLayers;
    ::ll::UntypedStorage<8, 24>                                                                       mDimensionManager;
    // NOLINTEND

public:
    // prevent constructor by default
    EASManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EASManager() = default;

    virtual void tick(::PacketSender&) = 0;
    // NOLINTEND
};

} // namespace EAS
