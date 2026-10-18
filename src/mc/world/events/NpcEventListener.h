#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
struct INpcDialogueData;
// clang-format on

class NpcEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcEventListener() = default;

    virtual ::EventResult onNpcDialogueDataChange(std::shared_ptr<INpcDialogueData>);

    virtual ::EventResult onNpcInteractScreenClose(::ActorUniqueID, bool);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
struct INpcDialogueData;
// clang-format on

class NpcEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcEventListener() = default;

    virtual ::EventResult onNpcDialogueDataChange(::std::shared_ptr<::INpcDialogueData> data);

    virtual ::EventResult onNpcInteractScreenClose(::ActorUniqueID npcId, bool performClosingActions);
    // NOLINTEND
};
#else // @header-generator platform
class NpcEventListener {};
#endif // @header-generator platform
#endif // @header-generator platform
