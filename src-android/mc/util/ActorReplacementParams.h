#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/util/ReplacementParams.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
// clang-format on

namespace Util {

struct ActorReplacementParams : public ::Util::ReplacementParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>                             entity;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> equipSlotType;
    ::ll::TypedStorage<1, 1, bool>                                 fixChest;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorReplacementParams& operator=(ActorReplacementParams const&);
    ActorReplacementParams(ActorReplacementParams const&);
    ActorReplacementParams();
};

} // namespace Util
