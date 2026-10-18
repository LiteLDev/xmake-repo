#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/events/BeforeWatchdogTerminateEvent.h"
#include "mc/world/events/ScriptCommandMessageEvent.h"
#include "mc/world/events/ScriptModuleShutdownEvent.h"
#include "mc/world/events/ScriptModuleStartupEvent.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/MutableScriptingGameplayEvent.h"
#include "mc/world/events/ScriptingGameplayEvent.h"
#else // @header-generator platform
#include "mc/world/events/EventVariantImpl.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct BeforeWatchdogTerminateEvent;
struct ScriptCommandMessageEvent;
struct ScriptModuleShutdownEvent;
struct ScriptModuleStartupEvent;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
struct ScriptingNotificationEvent : public ::NotificationEventVariant<
                                        MutableScriptingGameplayEvent<CoordinatorResult>,
                                        ScriptingGameplayEvent<CoordinatorResult>> {};
#else // @header-generator platform
struct ScriptingNotificationEvent : public ::EventVariantImpl<
                                        ::BeforeWatchdogTerminateEvent const,
                                        ::ScriptCommandMessageEvent const,
                                        ::ScriptModuleStartupEvent const,
                                        ::ScriptModuleShutdownEvent const> {};
#endif // @header-generator platform
