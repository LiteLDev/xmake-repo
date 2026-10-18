#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/SingleThreadedLock.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
namespace Core { class SingleThreadedLock; }
// clang-format on
#endif // @header-generator platform

namespace CodeBuilder {

#if defined(LL_PLAT_A) // @header-generator platform
class CommandOutputObserver : public ::Core::Observer<CodeBuilder::CommandOutputObserver, Core::SingleThreadedLock> {};
#else // @header-generator platform
class CommandOutputObserver
: public ::Core::Observer<::CodeBuilder::CommandOutputObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onCommand(::CommandOrigin const& origin, ::CommandOutput const& output) = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace CodeBuilder
