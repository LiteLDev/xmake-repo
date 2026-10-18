#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/events/BlockObject.h"

// auto generated forward declare list
// clang-format off
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
struct ScriptCommandMessageEvent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptEventCommandMessageAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                  mMessageId;
    ::ll::TypedStorage<8, 24, std::string>                  mMessageValue;
    ::ll::TypedStorage<8, 8, ::Level const&>                mLevel;
    ::ll::TypedStorage<8, 16, std::optional<ActorUniqueID>> mSourceActor;
    ::ll::TypedStorage<8, 32, std::optional<BlockObject>>   mBlockObject;
    ::ll::TypedStorage<8, 16, std::optional<ActorUniqueID>> mInitiator;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                    mMessageId;
    ::ll::TypedStorage<8, 32, ::std::string>                    mMessageValue;
    ::ll::TypedStorage<8, 8, ::Level const&>                    mLevel;
    ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>> mSourceActor;
    ::ll::TypedStorage<8, 32, ::std::optional<::BlockObject>>   mBlockObject;
    ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>> mInitiator;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEventCommandMessageAfterEventIntermediateData&
    operator=(ScriptEventCommandMessageAfterEventIntermediateData const&);
    ScriptEventCommandMessageAfterEventIntermediateData(ScriptEventCommandMessageAfterEventIntermediateData const&);
    ScriptEventCommandMessageAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
