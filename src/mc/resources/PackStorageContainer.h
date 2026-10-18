#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/resources/PackStorage.h"

#if defined(LL_PLAT_A) // @header-generator platform
class PackStorageContainer : public ::Bedrock::Threading::SharedLockbox<PackStorage, std::shared_timed_mutex> {};
#else // @header-generator platform
class PackStorageContainer : public ::Bedrock::Threading::SharedLockbox<::PackStorage, ::std::shared_mutex> {};
#endif // @header-generator platform
