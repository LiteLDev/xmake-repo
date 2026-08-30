#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/MutableScriptingGameplayEvent.h"
#include "mc/world/events/ScriptingGameplayEvent.h"

// auto generated forward declare list
// clang-format off
struct BeforeWatchdogTerminateEvent;
struct ScriptCommandMessageEvent;
struct ScriptModuleShutdownEvent;
struct ScriptModuleStartupEvent;
// clang-format on

struct ScriptingNotificationEvent : public ::NotificationEventVariant<
                                        MutableScriptingGameplayEvent<CoordinatorResult>,
                                        ScriptingGameplayEvent<CoordinatorResult>> {};
