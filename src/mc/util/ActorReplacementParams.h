#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/ReplacementParams.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Util {

struct ActorReplacementParams : public ::Util::ReplacementParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>                             entity;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::EquipmentSlot> equipSlotType;
    ::ll::TypedStorage<1, 1, bool>                                 fixChest;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk6f7994;
    ::ll::UntypedStorage<4, 4> mUnk9a1181;
    ::ll::UntypedStorage<1, 1> mUnkd970b6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorReplacementParams& operator=(ActorReplacementParams const&);
    ActorReplacementParams(ActorReplacementParams const&);
    ActorReplacementParams();
};

} // namespace Util
