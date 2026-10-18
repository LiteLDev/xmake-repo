#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/EAS__AnyAttributeLayer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/world/level/dimension/DimensionType.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class DimensionManager;
#else // @header-generator platform
#endif // @header-generator platform
class PacketSender;
#if defined(LL_PLAT_A) // @header-generator platform
namespace EAS { class AttributeLayer; }
namespace EAS { class AttributeRegistry; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace EAS {

class EASManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mAttributeRegistry;
    ::ll::TypedStorage<8, 40, std::unordered_map<DimensionType, std::vector<EAS::AnyAttributeLayer>>> mAttributeLayers;
    ::ll::UntypedStorage<8, 24>                                                                       mDimensionManager;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk9d6ea6;
    ::ll::UntypedStorage<8, 64> mUnkde9fa9;
    ::ll::UntypedStorage<8, 24> mUnk5b6d90;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EASManager& operator=(EASManager const&);
    EASManager(EASManager const&);
#endif // @header-generator platform
    EASManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EASManager() = default;

    virtual void tick(::PacketSender&) = 0;
    // NOLINTEND
};

} // namespace EAS
