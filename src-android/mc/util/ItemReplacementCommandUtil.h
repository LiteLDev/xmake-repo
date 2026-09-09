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
namespace Util { struct ReplacementParams; }
namespace Util { struct ReplacementResults; }
// clang-format on

namespace Util {

class ItemReplacementCommandUtil {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _replaceArmorSlots(
        ::Util::ReplacementResults&,
        ::Actor&,
        ::gsl::span<const ItemStack> const,
        ::SharedTypes::Legacy::EquipmentSlot,
        int
    );

    MCNAPI static ::Util::ReplacementResults replaceActorSlotsOrError(::Util::ActorReplacementParams&);

    MCNAPI static ::Util::ReplacementResults replaceContainerSlotsOrError(::Util::ContainerReplacementParams&);
    // NOLINTEND
};

} // namespace Util
