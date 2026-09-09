#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

namespace edu::auth {

struct CredentialsObserver : public ::Core::Observer<edu::auth::CredentialsObserver, Core::SingleThreadedLock> {};

} // namespace edu::auth
