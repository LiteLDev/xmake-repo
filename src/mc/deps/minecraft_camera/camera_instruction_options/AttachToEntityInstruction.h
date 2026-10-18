#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace CameraInstructionOptions {

struct AttachToEntityInstruction {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long>                                 mAttachToEntityId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, int64>                                mAttachToEntityId;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorLocation> mActorLocator;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::CameraInstructionOptions::AttachToEntityInstruction const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CameraInstructionOptions
