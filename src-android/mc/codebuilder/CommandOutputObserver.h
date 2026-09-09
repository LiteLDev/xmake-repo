#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

namespace CodeBuilder {

class CommandOutputObserver : public ::Core::Observer<CodeBuilder::CommandOutputObserver, Core::SingleThreadedLock> {};

} // namespace CodeBuilder
