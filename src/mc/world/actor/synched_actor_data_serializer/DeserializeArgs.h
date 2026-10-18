#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ReplayStateComponent;
// clang-format on

namespace SynchedActorDataSerializer {

struct DeserializeArgs {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>                mActor;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>   mTargetFrame;
    ::ll::TypedStorage<8, 8, ::ReplayStateComponent*> mReplay;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>                 mActor;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>> mTargetFrame;
    ::ll::TypedStorage<8, 8, ::ReplayStateComponent*>  mReplay;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DeserializeArgs& operator=(DeserializeArgs const&);
    DeserializeArgs(DeserializeArgs const&);
    DeserializeArgs();
};

} // namespace SynchedActorDataSerializer
