#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
namespace Util { struct ActorReplacementParams; }
namespace Util { struct ContainerReplacementParams; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Util { struct ReplacementParams; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Util { struct ReplacementResults; }
// clang-format on

namespace Util {

class ItemReplacementCommandUtil {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _replaceArmorSlots(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Util::ReplacementResults&,
        ::Actor&,
        ::gsl::span<const ItemStack> const,
        ::SharedTypes::Legacy::EquipmentSlot,
        int
#else // @header-generator platform
        ::Util::ReplacementResults&          replacementResults,
        ::Actor&                             entity,
        ::gsl::span<::ItemStack const> const itemSpan,
        ::SharedTypes::Legacy::EquipmentSlot slotType,
        int                                  count
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Util::ReplacementResults replaceActorSlotsOrError(::Util::ActorReplacementParams&);
#else // @header-generator platform
    MCNAPI static ::Util::ReplacementResults replaceActorSlotsOrError(::Util::ActorReplacementParams& actorParams);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Util::ReplacementResults replaceContainerSlotsOrError(::Util::ContainerReplacementParams&);
#else // @header-generator platform
    MCNAPI static ::Util::ReplacementResults
    replaceContainerSlotsOrError(::Util::ContainerReplacementParams& containerParams);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Util
