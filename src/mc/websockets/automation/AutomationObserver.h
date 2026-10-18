#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Automation {

#if defined(LL_PLAT_A) // @header-generator platform
class AutomationObserver : public ::Core::Observer<Automation::AutomationObserver, Core::SingleThreadedLock> {};
#else // @header-generator platform
class AutomationObserver {};
#endif // @header-generator platform

} // namespace Automation
