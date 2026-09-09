#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

namespace Automation {

class AutomationObserver : public ::Core::Observer<Automation::AutomationObserver, Core::SingleThreadedLock> {};

} // namespace Automation
